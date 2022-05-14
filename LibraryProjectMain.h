/***************************************************************
 * Name:      LibraryProjectMain.h
 * Purpose:   Defines Application Frame
 * Author:    Adam Basiak, Mateusz Budzowski, Bruno Wiech ()
 * Created:   2022-01-01
 * Copyright: Adam Basiak, Mateusz Budzowski, Bruno Wiech ()
 * License:
 **************************************************************/

#ifndef LIBRARYPROJECTMAIN_H
#define LIBRARYPROJECTMAIN_H

//(*Headers(LibraryProjectFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/menu.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

#include "bibl.h"

class LibraryProjectFrame: public wxFrame
{
    public:

        LibraryProjectFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~LibraryProjectFrame();

    private:

        Library lib;

        //(*Handlers(LibraryProjectFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnNotebook1PageChanged(wxNotebookEvent& event);
        void OnTextCtrlEditAddTitleText(wxCommandEvent& event);
        void OnTextCtrlEditAddAuthorText(wxCommandEvent& event);
        void OnButtonAddBookClick(wxCommandEvent& event);
        void OnButtonEditBookClick(wxCommandEvent& event);
        void OnButtonDeleteBookClick(wxCommandEvent& event);
        void OnTextCtrlEditAddNameText(wxCommandEvent& event);
        void OnTextCtrlEditAddSurNameText(wxCommandEvent& event);
        void OnButtonAddReaderClick(wxCommandEvent& event);
        void OnButtonEditReaderClick(wxCommandEvent& event);
        void OnButtonDeleteReaderClick(wxCommandEvent& event);
        void OnTextCtrlSearchBookText(wxCommandEvent& event);
        void OnButtonFindBookClick(wxCommandEvent& event);
        void OnTextCtrlSearchReaderText(wxCommandEvent& event);
        void OnButtonFindReaderClick(wxCommandEvent& event);
        void OnTextCtrlLendBookIDText(wxCommandEvent& event);
        void OnTextCtrlLendReaderIDText(wxCommandEvent& event);
        void OnTextCtrlReturnBookIDText(wxCommandEvent& event);
        void OnButtonLendBookClick(wxCommandEvent& event);
        void OnButtonReturnBookClick(wxCommandEvent& event);
        void OnButtonFindBookClick1(wxCommandEvent& event);
        void OnButtonFindReaderClick1(wxCommandEvent& event);
        //*)

        //(*Identifiers(LibraryProjectFrame)
        static const long ID_LISTCTRL1;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON8;
        static const long ID_BUTTON3;
        static const long ID_PANEL1;
        static const long ID_LISTCTRL2;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL3;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL4;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON11;
        static const long ID_BUTTON6;
        static const long ID_PANEL2;
        static const long ID_LISTCTRL3;
        static const long ID_STATICTEXT6;
        static const long ID_TEXTCTRL5;
        static const long ID_STATICTEXT12;
        static const long ID_TEXTCTRL10;
        static const long ID_STATICTEXT5;
        static const long ID_TEXTCTRL6;
        static const long ID_BUTTON7;
        static const long ID_PANEL3;
        static const long ID_STATICTEXT8;
        static const long ID_STATICTEXT9;
        static const long ID_TEXTCTRL7;
        static const long ID_STATICTEXT10;
        static const long ID_TEXTCTRL8;
        static const long ID_BUTTON9;
        static const long ID_STATICLINE1;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT11;
        static const long ID_TEXTCTRL9;
        static const long ID_BUTTON10;
        static const long ID_PANEL4;
        static const long ID_NOTEBOOK1;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(LibraryProjectFrame)
        wxButton* ButtonAddBook;
        wxButton* ButtonAddReader;
        wxButton* ButtonDeleteBook;
        wxButton* ButtonDeleteReader;
        wxButton* ButtonEditBook;
        wxButton* ButtonEditReader;
        wxButton* ButtonFindBook;
        wxButton* ButtonFindBoth;
        wxButton* ButtonFindReader;
        wxButton* ButtonLendBook;
        wxButton* ButtonReturnBook;
        wxListCtrl* ListCtrlBook;
        wxListCtrl* ListCtrlBoth;
        wxListCtrl* ListCtrlReader;
        wxNotebook* Notebook1;
        wxPanel* Panel1;
        wxPanel* Panel2;
        wxPanel* Panel3;
        wxPanel* Panel4;
        wxStaticLine* StaticLine1;
        wxStaticText* StaticText10;
        wxStaticText* StaticText11;
        wxStaticText* StaticText12;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStaticText* StaticText7;
        wxStaticText* StaticText8;
        wxStaticText* StaticText9;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrlEditAddAuthor;
        wxTextCtrl* TextCtrlEditAddName;
        wxTextCtrl* TextCtrlEditAddSurName;
        wxTextCtrl* TextCtrlEditAddTitle;
        wxTextCtrl* TextCtrlLendBookID;
        wxTextCtrl* TextCtrlLendReaderID;
        wxTextCtrl* TextCtrlReturnBookID;
        wxTextCtrl* TextCtrlSearchBook;
        wxTextCtrl* TextCtrlSearchReaderLastName;
        wxTextCtrl* TextCtrlSearchReaderName;
        //*)
        void updateReaders();
        void updateBooks();
        void updateBoth();
        DECLARE_EVENT_TABLE()
};

#endif // LIBRARYPROJECTMAIN_H
