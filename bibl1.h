#ifndef BIBL_H_INCLUDED
#define BIBL_H_INCLUDED

#include<fstream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>

class Book {
    public:
        int bid;
    std::string btitle;
    std::string bauthor;
    int uid;
    void getBook(std::ifstream & inFile) {

        //inFile.open("books.txt");
        inFile >> bid;
        inFile >> btitle;
        for (long long unsigned int i = 0; i < btitle.size(); i++) {
            if (btitle[i] == '_') {
                btitle[i] = ' ';
            }
        }
        inFile >> bauthor;
        for (long long unsigned int i = 0; i < bauthor.size(); i++) {
            if (bauthor[i] == '_') {
                bauthor[i] = ' ';
            }
        }
        inFile >> uid;

    }
};
class Person {
    public:
        int uid;
    std::string name;
    std::string last_name;

    void getPerson(std::ifstream & inFile) {

        //inFile.open("books.txt");
        inFile >> uid;
        inFile >> name;
        inFile >> last_name;

    }
};

class Library {
    std::map < int, Book > ::iterator bookIterator;
    std::map < int, Person > ::iterator personIterator;
    std::map < int, int > ::iterator lentIterator;
    public:
        Person person_tmp;
    Book book_tmp;
    std::map < int, Person > allPpl;
    std::map < int, Book > allBooks;
    std::map < int, int > lentBooks;
    Library() {
        std::ifstream pplFile;
        std::ifstream booksFile;
        pplFile.open("users.txt");
        while (!pplFile.eof()) {
            person_tmp.getPerson(pplFile);
            allPpl.insert(std::pair < int, Person > (person_tmp.uid, person_tmp));

        }
        booksFile.open("books.txt");
        while (!booksFile.eof()) {
            book_tmp.getBook(booksFile);
            allBooks.insert(std::pair < int, Book > (book_tmp.bid, book_tmp));
        }
        for (bookIterator = allBooks.begin(); bookIterator != allBooks.end(); ++bookIterator) {
            personIterator = allPpl.find(bookIterator -> second.uid);
            if (personIterator != allPpl.end()) {
                lentBooks.insert(std::pair < int, int > (bookIterator -> first, personIterator -> first));
            }
        }
        booksFile.close();
        pplFile.close();

    }
    int lendBook(int uid, int bid) {
        bookIterator = allBooks.find(bid);
        if (bookIterator == allBooks.end()) {
            //brak ksiazki o podanym id(bid)
            return -1;
        }
        personIterator = allPpl.find(uid);
        if (personIterator == allPpl.end()) {
            //brak uzytkownika o podanym id(uid)
            return -2;
        }
        bookIterator -> second.uid = uid;
        lentBooks.insert(std::pair < int, int > (bid, uid));
        return 1;
    }
    int returnBook(int bid) {
        lentIterator = lentBooks.find(bid);
        if (lentIterator == lentBooks.end()) {
            //brak wyporzyczonej ksziazki o podanym id(bid)
            return -1;
        }
        bookIterator = allBooks.find(bid);
        bookIterator -> second.uid = 0;
        lentBooks.erase(lentIterator);
        return 1;
    }

    int addBook(std::string bauthor, std::string btitle) {
        book_tmp.bid = (allBooks.rbegin()) -> first + 1;
        book_tmp.bauthor = bauthor;
        book_tmp.btitle = btitle;
        book_tmp.uid = 0;
        allBooks.insert(std::pair < int, Book > (book_tmp.bid, book_tmp));
        return 1;
    }
    int deleteBook(int bid) {
        bookIterator = allBooks.find(bid);
        if (bookIterator == allBooks.end()) {
            //brak ksiazki o podanym id(bid)
            return -1;
        }
        lentIterator = lentBooks.find(bid);
        if (lentIterator != lentBooks.end()) {
            //nie wolo usunac wyporzyczonej ksziazki
            return -2;
        }
        allBooks.erase(bookIterator);
        return 1;
    }

    int addPerson(std::string name, std::string lastname) {
        person_tmp.uid = (allPpl.rbegin()) -> first + 1;
        person_tmp.name = name;
        person_tmp.last_name = lastname;
        allPpl.insert(std::pair < int, Person > (person_tmp.uid, person_tmp));
        return 1;
    }

    int deletePerson(int uid) {
        personIterator = allPpl.find(uid);
        if (personIterator == allPpl.end()) {
            //brak osoby o podanym id(uid)
            return -1;
        }
        for (lentIterator = lentBooks.begin(); lentIterator != lentBooks.end(); ++lentIterator) {
            if (lentIterator -> second == uid) {
                //nie mozna usunac osoby ktora wyporzyczyla ksiazke
                return -2;
            }
        }

        allPpl.erase(personIterator);
        return 1;
    }

    std::vector < Book > searchBook(std::string btitle) {
        std::vector < Book > tmpV;
        std::string tmpS;
        std::for_each(btitle.begin(), btitle.end(), [](char & c) {
            c = ::toupper(c);
        });
        for (bookIterator = allBooks.begin(); bookIterator != allBooks.end(); ++bookIterator) {
            tmpS = bookIterator -> second.btitle.substr(0, btitle.size());
            std::for_each(tmpS.begin(), tmpS.end(), [](char & c) {
                c = ::toupper(c);
            });
            //std::cout<<tmpS<<"-----porownywanie\n";
            if (btitle == tmpS) {
                tmpV.push_back(bookIterator -> second);
            }
        }
        return tmpV;

    }

    std::vector < Person > searchPerson(std::string name, std::string lastname) {
        std::vector < Person > tmpV;
        std::string tmpS1;
        std::string tmpS2;
        std::for_each(name.begin(), name.end(), [](char & c) {
            c = ::toupper(c);
        });
        std::for_each(lastname.begin(), lastname.end(), [](char & c) {
            c = ::toupper(c);
        });
        for (personIterator = allPpl.begin(); personIterator != allPpl.end(); ++personIterator) {
            tmpS1 = personIterator -> second.name.substr(0, name.size());
            std::for_each(tmpS1.begin(), tmpS1.end(), [](char & c) {
                c = ::toupper(c);
            });
            tmpS2 = personIterator -> second.last_name.substr(0, lastname.size());
            std::for_each(tmpS2.begin(), tmpS2.end(), [](char & c) {
                c = ::toupper(c);
            });
            //std::cout<<tmpS<<"-----porownywanie\n";
            if (name == tmpS1 && lastname == tmpS2) {
                tmpV.push_back(personIterator -> second);
            }
        }
        return tmpV;

    }
    int editPerson(int uid, std::string n_name, std::string n_lastname) {
        personIterator = allPpl.find(uid);
        if (personIterator == allPpl.end()) {
            //brak osoby o podanym id(uid)
            return -1;
        }
        personIterator -> second.name = n_name;
        personIterator -> second.last_name = n_lastname;
        return 1;
    }

    int editBook(int bid, std::string n_btitle, std::string n_bauthor) {
        bookIterator = allBooks.find(bid);
        if (bookIterator == allBooks.end()) {
            //brak ksiazki o podanym id(uid)
            return -1;
        }
        bookIterator -> second.btitle = n_btitle;
        bookIterator -> second.bauthor = n_bauthor;
        return 1;
    }

    int getBid(int choice) {
        int licznik = 0;
        if(choice == 1){
             for (personIterator = allPpl.begin(); personIterator != allPpl.end(); ++personIterator)
                licznik++;
        }
        if(choice == 0) {
             for (bookIterator = allBooks.begin(); bookIterator != allBooks.end(); ++bookIterator)
                licznik++;
        }
        return licznik;
    }

    void save() {
        std::ofstream pplFile;
        std::ofstream bookFile;
        pplFile.open("users.txt");
        bookFile.open("books.txt");
        for (personIterator = allPpl.begin(); personIterator != allPpl.end(); ++personIterator) {
            for (long long unsigned int i = 0; i < personIterator -> second.name.size(); i++) {
                if (personIterator -> second.name[i] == ' ') {
                    personIterator -> second.name[i] = '_';
                }
            }
            for (long long unsigned int i = 0; i < personIterator -> second.last_name.size(); i++) {
                if (personIterator -> second.last_name[i] == ' ') {
                    personIterator -> second.last_name[i] = '_';
                }
            }
            pplFile << personIterator -> second.uid << " " << personIterator -> second.name << " " << personIterator -> second.last_name << "\n";
        }
        for (bookIterator = allBooks.begin(); bookIterator != allBooks.end(); ++bookIterator) {
            for (long long unsigned int i = 0; i < bookIterator -> second.btitle.size(); i++) {
                if (bookIterator -> second.btitle[i] == ' ') {
                    bookIterator -> second.btitle[i] = '_';
                }
            }
            for (long long unsigned int i = 0; i < bookIterator -> second.bauthor.size(); i++) {
                if (bookIterator -> second.bauthor[i] == ' ') {
                    bookIterator -> second.bauthor[i] = '_';
                }
            }
            bookFile << bookIterator -> second.bid << " " << bookIterator -> second.btitle << " " << bookIterator -> second.bauthor << " " << bookIterator -> second.uid << "\n";

        }

        pplFile.close();
        bookFile.close();
    }

    void printPpl() {
        for (personIterator = allPpl.begin(); personIterator != allPpl.end(); ++personIterator) {
            //std::cout << personIterator -> first << " " << personIterator -> second.name << std::endl;
        }

    }
    void printBooks() {
        for (bookIterator = allBooks.begin(); bookIterator != allBooks.end(); ++bookIterator) {
            //std::cout << bookIterator -> first << " " << bookIterator -> second.bauthor << std::endl;
        }
    }

    void printComb() {
        for (lentIterator = lentBooks.begin(); lentIterator != lentBooks.end(); ++lentIterator) {
            //std::cout << lentIterator -> first << " " << lentIterator -> second << std::endl;
        }
    }
};

#endif // BIBL_H_INCLUDED
