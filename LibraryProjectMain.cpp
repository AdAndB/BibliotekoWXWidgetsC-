/***************************************************************
 * Name:      LibraryProjectMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Adam Basiak, Mateusz Budzowski, Bruno Wiech ()
 * Created:   2022-01-01
 * Copyright: Adam Basiak, Mateusz Budzowski, Bruno Wiech ()
 * License:
 **************************************************************/

#include "LibraryProjectMain.h"
#include <wx/msgdlg.h>
#include "bibl.h"

//(*InternalHeaders(LibraryProjectFrame)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(LibraryProjectFrame)
const long LibraryProjectFrame::ID_LISTCTRL1 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT1 = wxNewId();
const long LibraryProjectFrame::ID_TEXTCTRL1 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT2 = wxNewId();
const long LibraryProjectFrame::ID_TEXTCTRL2 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON1 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON2 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON8 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON3 = wxNewId();
const long LibraryProjectFrame::ID_PANEL1 = wxNewId();
const long LibraryProjectFrame::ID_LISTCTRL2 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT3 = wxNewId();
const long LibraryProjectFrame::ID_TEXTCTRL3 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT4 = wxNewId();
const long LibraryProjectFrame::ID_TEXTCTRL4 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON4 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON5 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON11 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON6 = wxNewId();
const long LibraryProjectFrame::ID_PANEL2 = wxNewId();
const long LibraryProjectFrame::ID_LISTCTRL3 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT6 = wxNewId();
const long LibraryProjectFrame::ID_TEXTCTRL5 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT12 = wxNewId();
const long LibraryProjectFrame::ID_TEXTCTRL10 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT5 = wxNewId();
const long LibraryProjectFrame::ID_TEXTCTRL6 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON7 = wxNewId();
const long LibraryProjectFrame::ID_PANEL3 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT8 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT9 = wxNewId();
const long LibraryProjectFrame::ID_TEXTCTRL7 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT10 = wxNewId();
const long LibraryProjectFrame::ID_TEXTCTRL8 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON9 = wxNewId();
const long LibraryProjectFrame::ID_STATICLINE1 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT7 = wxNewId();
const long LibraryProjectFrame::ID_STATICTEXT11 = wxNewId();
const long LibraryProjectFrame::ID_TEXTCTRL9 = wxNewId();
const long LibraryProjectFrame::ID_BUTTON10 = wxNewId();
const long LibraryProjectFrame::ID_PANEL4 = wxNewId();
const long LibraryProjectFrame::ID_NOTEBOOK1 = wxNewId();
const long LibraryProjectFrame::ID_MENUITEM1 = wxNewId();
const long LibraryProjectFrame::idMenuAbout = wxNewId();
const long LibraryProjectFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(LibraryProjectFrame,wxFrame)
    //(*EventTable(LibraryProjectFrame)
    //*)
END_EVENT_TABLE()

LibraryProjectFrame::LibraryProjectFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(LibraryProjectFrame)
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* BoxSizer11;
    wxBoxSizer* BoxSizer12;
    wxBoxSizer* BoxSizer13;
    wxBoxSizer* BoxSizer14;
    wxBoxSizer* BoxSizer15;
    wxBoxSizer* BoxSizer16;
    wxBoxSizer* BoxSizer17;
    wxBoxSizer* BoxSizer18;
    wxBoxSizer* BoxSizer19;
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer20;
    wxBoxSizer* BoxSizer21;
    wxBoxSizer* BoxSizer24;
    wxBoxSizer* BoxSizer25;
    wxBoxSizer* BoxSizer26;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer7;
    wxBoxSizer* BoxSizer8;
    wxBoxSizer* BoxSizer9;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, _("Biblioteka"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("C:\\Users\\USER\\Desktop\\LibraryProject\\icon.ico"))));
    	SetIcon(FrameIcon);
    }
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxDefaultPosition, wxSize(659,719), 0, _T("ID_NOTEBOOK1"));
    Panel1 = new wxPanel(Notebook1, ID_PANEL1, wxPoint(202,248), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    BoxSizer4 = new wxBoxSizer(wxVERTICAL);
    ListCtrlBook = new wxListCtrl(Panel1, ID_LISTCTRL1, wxDefaultPosition, wxSize(627,456), wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL1"));
    BoxSizer4->Add(ListCtrlBook, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer8 = new wxBoxSizer(wxVERTICAL);
    BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Tytul ksiazki"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT1"));
    BoxSizer9->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlEditAddTitle = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(190,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer9->Add(TextCtrlEditAddTitle, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer8->Add(BoxSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Autor ksiazki"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT2"));
    BoxSizer10->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlEditAddAuthor = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(190,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    BoxSizer10->Add(TextCtrlEditAddAuthor, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer8->Add(BoxSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(BoxSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    ButtonAddBook = new wxButton(Panel1, ID_BUTTON1, _("Dodaj"), wxDefaultPosition, wxSize(143,28), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer3->Add(ButtonAddBook, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonEditBook = new wxButton(Panel1, ID_BUTTON2, _("Edytuj"), wxDefaultPosition, wxSize(143,28), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer3->Add(ButtonEditBook, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonFindBook = new wxButton(Panel1, ID_BUTTON8, _("Znajdz"), wxDefaultPosition, wxSize(143,28), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    BoxSizer3->Add(ButtonFindBook, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonDeleteBook = new wxButton(Panel1, ID_BUTTON3, _("Usun"), wxDefaultPosition, wxSize(143,28), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    BoxSizer3->Add(ButtonDeleteBook, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(BoxSizer2);
    BoxSizer2->Fit(Panel1);
    BoxSizer2->SetSizeHints(Panel1);
    Panel2 = new wxPanel(Notebook1, ID_PANEL2, wxPoint(105,11), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    BoxSizer5 = new wxBoxSizer(wxVERTICAL);
    BoxSizer7 = new wxBoxSizer(wxVERTICAL);
    ListCtrlReader = new wxListCtrl(Panel2, ID_LISTCTRL2, wxDefaultPosition, wxSize(627,456), wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL2"));
    BoxSizer7->Add(ListCtrlReader, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer6 = new wxBoxSizer(wxVERTICAL);
    BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
    StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Imie czytelnika"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT3"));
    BoxSizer11->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlEditAddName = new wxTextCtrl(Panel2, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(190,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    BoxSizer11->Add(TextCtrlEditAddName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer6->Add(BoxSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("Nazwisko czytelnika"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT4"));
    BoxSizer12->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlEditAddSurName = new wxTextCtrl(Panel2, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxSize(190,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    BoxSizer12->Add(TextCtrlEditAddSurName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer6->Add(BoxSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
    ButtonAddReader = new wxButton(Panel2, ID_BUTTON4, _("Dodaj"), wxDefaultPosition, wxSize(143,28), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    BoxSizer13->Add(ButtonAddReader, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonEditReader = new wxButton(Panel2, ID_BUTTON5, _("Edytuj"), wxDefaultPosition, wxSize(143,28), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    BoxSizer13->Add(ButtonEditReader, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonFindReader = new wxButton(Panel2, ID_BUTTON11, _("Znajdz"), wxDefaultPosition, wxSize(143,28), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    BoxSizer13->Add(ButtonFindReader, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonDeleteReader = new wxButton(Panel2, ID_BUTTON6, _("Usun"), wxDefaultPosition, wxSize(143,28), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    BoxSizer13->Add(ButtonDeleteReader, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7->Add(BoxSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel2->SetSizer(BoxSizer5);
    BoxSizer5->Fit(Panel2);
    BoxSizer5->SetSizeHints(Panel2);
    Panel3 = new wxPanel(Notebook1, ID_PANEL3, wxPoint(190,15), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
    BoxSizer14 = new wxBoxSizer(wxVERTICAL);
    ListCtrlBoth = new wxListCtrl(Panel3, ID_LISTCTRL3, wxDefaultPosition, wxSize(627,456), wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL3"));
    BoxSizer14->Add(ListCtrlBoth, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer16 = new wxBoxSizer(wxVERTICAL);
    BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
    StaticText6 = new wxStaticText(Panel3, ID_STATICTEXT6, _("Imie czytelnika"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT6"));
    BoxSizer17->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlSearchReaderName = new wxTextCtrl(Panel3, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxSize(140,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    BoxSizer17->Add(TextCtrlSearchReaderName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer16->Add(BoxSizer17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
    StaticText12 = new wxStaticText(Panel3, ID_STATICTEXT12, _("Nazwisko cztelnika"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT12"));
    BoxSizer18->Add(StaticText12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlSearchReaderLastName = new wxTextCtrl(Panel3, ID_TEXTCTRL10, wxEmptyString, wxDefaultPosition, wxSize(140,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
    BoxSizer18->Add(TextCtrlSearchReaderLastName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer16->Add(BoxSizer18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer15->Add(BoxSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
    StaticText5 = new wxStaticText(Panel3, ID_STATICTEXT5, _("Tytul ksiazki"), wxDefaultPosition, wxSize(53,21), wxALIGN_RIGHT, _T("ID_STATICTEXT5"));
    BoxSizer19->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlSearchBook = new wxTextCtrl(Panel3, ID_TEXTCTRL6, wxEmptyString, wxDefaultPosition, wxSize(76,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    BoxSizer19->Add(TextCtrlSearchBook, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer15->Add(BoxSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer14->Add(BoxSizer15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonFindBoth = new wxButton(Panel3, ID_BUTTON7, _("Znajdz"), wxDefaultPosition, wxSize(157,28), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    BoxSizer14->Add(ButtonFindBoth, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer14->Add(259,75,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel3->SetSizer(BoxSizer14);
    BoxSizer14->Fit(Panel3);
    BoxSizer14->SetSizeHints(Panel3);
    Panel4 = new wxPanel(Notebook1, ID_PANEL4, wxPoint(368,14), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
    BoxSizer20 = new wxBoxSizer(wxVERTICAL);
    BoxSizer21 = new wxBoxSizer(wxVERTICAL);
    BoxSizer21->Add(127,43,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText8 = new wxStaticText(Panel4, ID_STATICTEXT8, _("Wypozyczenie"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT8"));
    wxFont StaticText8Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText8->SetFont(StaticText8Font);
    BoxSizer21->Add(StaticText8, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxSHAPED, 5);
    BoxSizer21->Add(121,45,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
    StaticText9 = new wxStaticText(Panel4, ID_STATICTEXT9, _("Numer Ksiazki"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT9"));
    BoxSizer24->Add(StaticText9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlLendBookID = new wxTextCtrl(Panel4, ID_TEXTCTRL7, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
    BoxSizer24->Add(TextCtrlLendBookID, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer21->Add(BoxSizer24, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer25 = new wxBoxSizer(wxHORIZONTAL);
    StaticText10 = new wxStaticText(Panel4, ID_STATICTEXT10, _("Numer Czytelnika"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT10"));
    BoxSizer25->Add(StaticText10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlLendReaderID = new wxTextCtrl(Panel4, ID_TEXTCTRL8, wxEmptyString, wxDefaultPosition, wxSize(130,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
    BoxSizer25->Add(TextCtrlLendReaderID, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer21->Add(BoxSizer25, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer21->Add(98,24,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonLendBook = new wxButton(Panel4, ID_BUTTON9, _("Wypozycz Ksiazke"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
    BoxSizer21->Add(ButtonLendBook, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer21->Add(129,32,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticLine1 = new wxStaticLine(Panel4, ID_STATICLINE1, wxDefaultPosition, wxSize(631,3), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    BoxSizer21->Add(StaticLine1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer21->Add(121,44,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText7 = new wxStaticText(Panel4, ID_STATICTEXT7, _("Zwrot"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT7"));
    wxFont StaticText7Font(11,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText7->SetFont(StaticText7Font);
    BoxSizer21->Add(StaticText7, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxSHAPED, 5);
    BoxSizer21->Add(124,40,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
    StaticText11 = new wxStaticText(Panel4, ID_STATICTEXT11, _("Numer Ksiazki"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT11"));
    BoxSizer26->Add(StaticText11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrlReturnBookID = new wxTextCtrl(Panel4, ID_TEXTCTRL9, wxEmptyString, wxDefaultPosition, wxSize(130,30), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
    BoxSizer26->Add(TextCtrlReturnBookID, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer21->Add(BoxSizer26, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer21->Add(101,23,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonReturnBook = new wxButton(Panel4, ID_BUTTON10, _("Zwroc Ksiazke"), wxDefaultPosition, wxSize(149,34), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    BoxSizer21->Add(ButtonReturnBook, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer21->Add(124,38,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer20->Add(BoxSizer21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel4->SetSizer(BoxSizer20);
    BoxSizer20->Fit(Panel4);
    BoxSizer20->SetSizeHints(Panel4);
    Notebook1->AddPage(Panel1, _("Ksiazki"), false);
    Notebook1->AddPage(Panel2, _("Czytelnicy"), false);
    Notebook1->AddPage(Panel3, _("Wyszukiwanie"), false);
    Notebook1->AddPage(Panel4, _("Wypozyczenia / Zwroty"), false);
    BoxSizer1->Add(Notebook1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Wyjscie\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("O aplikacji\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Pomoc"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&LibraryProjectFrame::OnTextCtrlEditAddTitleText);
    Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&LibraryProjectFrame::OnTextCtrlEditAddAuthorText);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonAddBookClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonEditBookClick);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonFindBookClick1);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonDeleteBookClick);
    Connect(ID_TEXTCTRL3,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&LibraryProjectFrame::OnTextCtrlEditAddNameText);
    Connect(ID_TEXTCTRL4,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&LibraryProjectFrame::OnTextCtrlEditAddSurNameText);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonAddReaderClick);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonEditReaderClick);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonFindReaderClick1);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonDeleteReaderClick);
    Connect(ID_TEXTCTRL5,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&LibraryProjectFrame::OnTextCtrlSearchReaderText);
    Connect(ID_TEXTCTRL6,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&LibraryProjectFrame::OnTextCtrlSearchBookText);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonFindBookClick);
    Connect(ID_TEXTCTRL7,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&LibraryProjectFrame::OnTextCtrlLendBookIDText);
    Connect(ID_TEXTCTRL8,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&LibraryProjectFrame::OnTextCtrlLendReaderIDText);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonLendBookClick);
    Connect(ID_TEXTCTRL9,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&LibraryProjectFrame::OnTextCtrlReturnBookIDText);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LibraryProjectFrame::OnButtonReturnBookClick);
    Connect(ID_NOTEBOOK1,wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&LibraryProjectFrame::OnNotebook1PageChanged);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&LibraryProjectFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&LibraryProjectFrame::OnAbout);
    //*)

    ListCtrlBook->InsertColumn(0,"ID Ksiazki",wxLIST_FORMAT_LEFT,209);
    ListCtrlBook->InsertColumn(1,"Tytul",wxLIST_FORMAT_LEFT,209);
    ListCtrlBook->InsertColumn(2,"Autor",wxLIST_FORMAT_LEFT,209);
    std::map<int,Book>::iterator bookIterator;
    for(bookIterator=lib.allBooks.begin();bookIterator!=lib.allBooks.end();++bookIterator){
        ListCtrlBook->InsertItem(bookIterator->first-1,wxString::Format(wxT("%i"),bookIterator->second.bid),-1);
        ListCtrlBook->SetItem(bookIterator->first-1,1,bookIterator->second.btitle,-1);
        ListCtrlBook->SetItem(bookIterator->first-1,2,bookIterator->second.bauthor,-1);
    }

    ListCtrlReader->InsertColumn(0,"ID Czytelnika",wxLIST_FORMAT_LEFT,209);
    ListCtrlReader->InsertColumn(1,"Imie",wxLIST_FORMAT_LEFT,209);
    ListCtrlReader->InsertColumn(2,"Nazwisko",wxLIST_FORMAT_LEFT,209);
    std::map<int,Person>::iterator personIterator;
    for(personIterator=lib.allPpl.begin();personIterator!=lib.allPpl.end();++personIterator){
        ListCtrlReader->InsertItem(personIterator->first-1,wxString::Format(wxT("%i"),personIterator->second.uid),-1);
        ListCtrlReader->SetItem(personIterator->first-1,1,personIterator->second.name,-1);
        ListCtrlReader->SetItem(personIterator->first-1,2,personIterator->second.last_name,-1);
    }

    ListCtrlBoth->InsertColumn(0,"ID Ksiazki",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(1,"Tytul",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(2,"Autor",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(3,"ID Czytelnika",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(4,"Imie",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(5,"Nazwisko",wxLIST_FORMAT_LEFT,104);
    std::map<int,int>::iterator bothIterator;
    for(bothIterator=lib.lentBooks.begin();bothIterator!=lib.lentBooks.end();++bothIterator){
        bookIterator=lib.allBooks.find(bothIterator->first);
        personIterator=lib.allPpl.find(bothIterator->second);
        ListCtrlBoth->InsertItem(0,wxString::Format(wxT("%i"),bookIterator->second.bid),-1);
        ListCtrlBoth->SetItem(0,1,bookIterator->second.btitle,-1);
        ListCtrlBoth->SetItem(0,2,bookIterator->second.bauthor,-1);
        ListCtrlBoth->SetItem(0,3,wxString::Format(wxT("%i"),personIterator->second.uid),-1);
        ListCtrlBoth->SetItem(0,4,personIterator->second.name,-1);
        ListCtrlBoth->SetItem(0,5,personIterator->second.last_name,-1);
    }
}

LibraryProjectFrame::~LibraryProjectFrame()
{
    //(*Destroy(LibraryProjectFrame)
    //*)
}
void LibraryProjectFrame::updateBooks(){
    ListCtrlBook->ClearAll();
    ListCtrlBook->InsertColumn(0,"ID Ksiazki",wxLIST_FORMAT_LEFT,209);
    ListCtrlBook->InsertColumn(1,"Tytul",wxLIST_FORMAT_LEFT,209);
    ListCtrlBook->InsertColumn(2,"Autor",wxLIST_FORMAT_LEFT,209);
    std::map<int,Book>::iterator bookIterator;
    for(bookIterator=lib.allBooks.begin();bookIterator!=lib.allBooks.end();++bookIterator){
        ListCtrlBook->InsertItem(bookIterator->first-1,wxString::Format(wxT("%i"),bookIterator->second.bid),-1);
        ListCtrlBook->SetItem(bookIterator->first-1,1,bookIterator->second.btitle,-1);
        ListCtrlBook->SetItem(bookIterator->first-1,2,bookIterator->second.bauthor,-1);
    }
}
void LibraryProjectFrame::updateBoth(){
    ListCtrlBoth->ClearAll();
    ListCtrlBoth->InsertColumn(0,"ID Ksiazki",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(1,"Tytul",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(2,"Autor",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(3,"ID Czytelnika",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(4,"Imie",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(5,"Nazwisko",wxLIST_FORMAT_LEFT,104);
    std::map<int,int>::iterator bothIterator;
    std::map<int,Person>::iterator personIterator;
    std::map<int,Book>::iterator bookIterator;
    for(bothIterator=lib.lentBooks.begin();bothIterator!=lib.lentBooks.end();++bothIterator){
        bookIterator=lib.allBooks.find(bothIterator->first);
        personIterator=lib.allPpl.find(bothIterator->second);
        ListCtrlBoth->InsertItem(0,wxString::Format(wxT("%i"),bookIterator->second.bid),-1);
        ListCtrlBoth->SetItem(0,1,bookIterator->second.btitle,-1);
        ListCtrlBoth->SetItem(0,2,bookIterator->second.bauthor,-1);
        ListCtrlBoth->SetItem(0,3,wxString::Format(wxT("%i"),personIterator->second.uid),-1);
        ListCtrlBoth->SetItem(0,4,personIterator->second.name,-1);
        ListCtrlBoth->SetItem(0,5,personIterator->second.last_name,-1);
    }

}
void LibraryProjectFrame::updateReaders(){
    ListCtrlReader->ClearAll();
    ListCtrlReader->InsertColumn(0,"ID Czytelnika",wxLIST_FORMAT_LEFT,209);
    ListCtrlReader->InsertColumn(1,"Imie",wxLIST_FORMAT_LEFT,209);
    ListCtrlReader->InsertColumn(2,"Nazwisko",wxLIST_FORMAT_LEFT,209);
    std::map<int,Person>::iterator personIterator;
    for(personIterator=lib.allPpl.begin();personIterator!=lib.allPpl.end();++personIterator){
        ListCtrlReader->InsertItem(personIterator->first-1,wxString::Format(wxT("%i"),personIterator->second.uid),-1);
        ListCtrlReader->SetItem(personIterator->first-1,1,personIterator->second.name,-1);
        ListCtrlReader->SetItem(personIterator->first-1,2,personIterator->second.last_name,-1);
    }

}
void LibraryProjectFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void LibraryProjectFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox(wxT("Projekt utworzony przez: \nAdam Basiak\nMateusz Budzowski\nBruno Wiech"), _("Witamy w ..."));
}

void LibraryProjectFrame::OnButtonAddBookClick(wxCommandEvent& event)
{
    wxString title, author;
    author = TextCtrlEditAddAuthor->GetValue();
    title = TextCtrlEditAddTitle->GetValue();
    if(title.IsEmpty() || author.IsEmpty())
        wxMessageBox(wxT("Pole tytul i autor nie moga byc puste!"), _("Uwaga !"));
    else
    {
        int tmp = lib.getBid(0)+1;
        wxString str = wxString::Format(wxT("%i"),tmp);
        lib.addBook(author.ToStdString(), title.ToStdString());
        ListCtrlBook->InsertItem(tmp-1,str,-1);
        ListCtrlBook->SetItem(tmp-1,1,title,-1);
        ListCtrlBook->SetItem(tmp-1,2,author,-1);
        lib.save();
    }
}

void LibraryProjectFrame::OnButtonEditBookClick(wxCommandEvent& event)
{
    wxString title, author, text;
    author = TextCtrlEditAddAuthor->GetValue();
    title = TextCtrlEditAddTitle->GetValue();
    int numbers = ListCtrlBook->GetItemCount();
    for(int i=0; numbers>i; i++)
    {
        if (ListCtrlBook->GetItemState((numbers-1)-i, wxLIST_STATE_SELECTED) == wxLIST_STATE_SELECTED)
        {
            text = ListCtrlBook->GetItemText((numbers-1)-i, 0);
            int nr = wxAtoi(text);
            if(lib.editBook(nr, title.ToStdString(), author.ToStdString())>0){
                ListCtrlBook->SetItem((numbers-1)-i,1,title,-1);
                ListCtrlBook->SetItem((numbers-1)-i,2,author,-1);
                lib.save();
            }
            else if((lib.editBook(nr, title.ToStdString(), author.ToStdString())==-2))
                wxMessageBox(wxT("Ksiazka jest wypozyczona!\nNiedozwolona edycja."), _("Uwaga !"));
        }
   }
}

void LibraryProjectFrame::OnButtonDeleteBookClick(wxCommandEvent& event)
{
    wxString text;
    int numbers = ListCtrlBook->GetItemCount();
    for(int i=0; numbers>i; i++)
    {
        if (ListCtrlBook->GetItemState((numbers-1)-i, wxLIST_STATE_SELECTED) == wxLIST_STATE_SELECTED)
        {
            text = ListCtrlBook->GetItemText((numbers-1)-i, 0);
            int nr = wxAtoi(text);
            if(lib.deleteBook(nr)>0){
                ListCtrlBook->DeleteItem((numbers-1)-i);
                lib.save();
            }
            else if(lib.deleteBook(nr)==-2){
                wxMessageBox(wxT("Ksiazka jest aktualnie wypozyczona!"), _("Uwaga !"));
            }
        }
   }
}

void LibraryProjectFrame::OnButtonAddReaderClick(wxCommandEvent& event)
{
    wxString name, surname;
    surname = TextCtrlEditAddSurName->GetValue();
    name = TextCtrlEditAddName->GetValue();
    if(name.IsEmpty() || surname.IsEmpty())
        wxMessageBox(wxT("Pole imie i nazwisko nie moga byc puste!"), _("Uwaga !"));
    else
    {
        int tmp = lib.getBid(1) + 1;
        wxString str = wxString::Format(wxT("%i"),tmp);
        lib.addPerson(surname.ToStdString(), name.ToStdString());
        ListCtrlReader->InsertItem(tmp-1,str,-1);
        ListCtrlReader->SetItem(tmp-1,1,name,-1);
        ListCtrlReader->SetItem(tmp-1,2,surname,-1);
        lib.save();
    }
}

void LibraryProjectFrame::OnButtonEditReaderClick(wxCommandEvent& event)
{
    wxString name, surname, text;
    surname = TextCtrlEditAddSurName->GetValue();
    name = TextCtrlEditAddName->GetValue();
    int numbers = ListCtrlReader->GetItemCount();
    for(int i=0; numbers>i; i++)
    {
        if (ListCtrlReader->GetItemState((numbers-1)-i, wxLIST_STATE_SELECTED) == wxLIST_STATE_SELECTED)
        {
            text = ListCtrlReader->GetItemText((numbers-1)-i, 0);
            int nr = wxAtoi(text);
            if(lib.editPerson(nr, name.ToStdString(), surname.ToStdString())>0){
                ListCtrlReader->SetItem((numbers-1)-i,1,name,-1);
                ListCtrlReader->SetItem((numbers-1)-i,2,surname,-1);
                lib.save();
            }
            else if(lib.editPerson(nr, name.ToStdString(), surname.ToStdString())==-2){
                wxMessageBox(wxT("Ksiazka nie zostala oddana!\nNiedozwolona edycja."), _("Uwaga !"));
            }

        }
   }
}

void LibraryProjectFrame::OnButtonDeleteReaderClick(wxCommandEvent& event)
{
    wxString text;
    int numbers = ListCtrlReader->GetItemCount();
    for(int i=0; numbers>i; i++)
    {
        if (ListCtrlReader->GetItemState((numbers-1)-i, wxLIST_STATE_SELECTED) == wxLIST_STATE_SELECTED)
        {
            text = ListCtrlReader->GetItemText((numbers-1)-i, 0);
            int nr = wxAtoi(text);
            if(lib.deletePerson(nr)>0){
                ListCtrlReader->DeleteItem((numbers-1)-i);
                lib.deletePerson(nr);
                lib.save();
            }
            else if(lib.deletePerson(nr)==-2){
                wxMessageBox(wxT("Ta osoba wciaz ma nieoddane ksiazki!"), _("Uwaga !"));
            }
        }
    }
}

void LibraryProjectFrame::OnButtonFindBookClick(wxCommandEvent& event)
{
    wxString book, personName, personLastName;
    book = TextCtrlSearchBook->GetValue();
    personName = TextCtrlSearchReaderName->GetValue();
    personLastName = TextCtrlSearchReaderLastName->GetValue();

    std::map<int,int>tmpM=lib.searchBoth(book.ToStdString(),personName.ToStdString(),personLastName.ToStdString());
    std::map<int,int>::iterator tmpIterator;
    std::map<int,Book>::iterator bookIterator;
    std::map<int,Person>::iterator personIterator;
    //std::vector<Person>ppl=lib.searchPerson(person.ToStdString());
    ListCtrlBoth->ClearAll();
    ListCtrlBoth->InsertColumn(0,"ID Ksiazki",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(1,"Tytul",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(2,"Autor",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(3,"ID Czytelnika",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(4,"Imie",wxLIST_FORMAT_LEFT,104);
    ListCtrlBoth->InsertColumn(5,"Nazwisko",wxLIST_FORMAT_LEFT,104);
    for(tmpIterator=tmpM.begin();tmpIterator!=tmpM.end();++tmpIterator){

        bookIterator=lib.allBooks.find(tmpIterator->first);
        personIterator=lib.allPpl.find(tmpIterator->second);
        ListCtrlBoth->InsertItem(0,wxString::Format(wxT("%i"),bookIterator->second.bid),-1);
        ListCtrlBoth->SetItem(0,1,bookIterator->second.btitle,-1);
        ListCtrlBoth->SetItem(0,2,bookIterator->second.bauthor,-1);
        ListCtrlBoth->SetItem(0,3,wxString::Format(wxT("%i"),personIterator->second.uid),-1);
        ListCtrlBoth->SetItem(0,4,personIterator->second.name,-1);
        ListCtrlBoth->SetItem(0,5,personIterator->second.last_name,-1);
    }
}

void LibraryProjectFrame::OnButtonFindReaderClick(wxCommandEvent& event)
{
    ListCtrlBoth->ClearAll();
    wxString reader;
    reader = TextCtrlSearchReaderName->GetValue();
    lib.searchPerson(reader.ToStdString(), reader.ToStdString());

}

void LibraryProjectFrame::OnButtonLendBookClick(wxCommandEvent& event)
{
    wxString ID_bk, ID_rd;
    ID_bk = TextCtrlLendBookID->GetValue();
    ID_rd = TextCtrlLendReaderID->GetValue();
    int bk = wxAtoi(ID_bk);
    int rd = wxAtoi(ID_rd);
    if(lib.lendBook(rd,bk)>0){
        updateBoth();
        lib.save();
    }
    else if(lib.lendBook(rd,bk)==-1){
        wxMessageBox(wxT("Brak ksiazki o podanym ID!"), _("Uwaga !"));
    }
    else if(lib.lendBook(rd,bk)==-2){
        wxMessageBox(wxT("Brak czytelnika o podanym ID!"), _("Uwaga !"));
    }
    else if(lib.lendBook(rd,bk)==-3){
        wxMessageBox(wxT("Ksiazka jest juz wypozyczona!"), _("Uwaga !"));
    }
}

void LibraryProjectFrame::OnButtonReturnBookClick(wxCommandEvent& event)
{
    wxString ID_bk;
    ID_bk = TextCtrlReturnBookID->GetValue();
    int bk = wxAtoi(ID_bk);
    if(lib.returnBook(bk)>0){
        updateBoth();
        lib.save();
    }
    else if(lib.returnBook(bk)==-1){
        wxMessageBox(wxT("Brak ksiazki o podanym ID!"), _("Uwaga !"));
    }
}

void LibraryProjectFrame::OnTextCtrlEditAddNameText(wxCommandEvent& event){}
void LibraryProjectFrame::OnTextCtrlEditAddSurNameText(wxCommandEvent& event){}
void LibraryProjectFrame::OnTextCtrlEditAddTitleText(wxCommandEvent& event){}
void LibraryProjectFrame::OnTextCtrlEditAddAuthorText(wxCommandEvent& event){}
void LibraryProjectFrame::OnTextCtrlSearchReaderText(wxCommandEvent& event){}
void LibraryProjectFrame::OnTextCtrlSearchBookText(wxCommandEvent& event){}
void LibraryProjectFrame::OnTextCtrlLendBookIDText(wxCommandEvent& event){}
void LibraryProjectFrame::OnTextCtrlLendReaderIDText(wxCommandEvent& event){}
void LibraryProjectFrame::OnTextCtrlReturnBookIDText(wxCommandEvent& event){}
void LibraryProjectFrame::OnNotebook1PageChanged(wxNotebookEvent& event){}

void LibraryProjectFrame::OnButtonFindBookClick1(wxCommandEvent& event)
{
    ListCtrlBook->ClearAll();
    wxString book;
    book= TextCtrlEditAddTitle->GetValue();
    std::vector<Book>tmpV=lib.searchBook(book.ToStdString());
    ListCtrlBook->InsertColumn(0,"ID Ksiazki",wxLIST_FORMAT_LEFT,209);
    ListCtrlBook->InsertColumn(1,"Tytul",wxLIST_FORMAT_LEFT,209);
    ListCtrlBook->InsertColumn(2,"Autor",wxLIST_FORMAT_LEFT,209);
    std::map<int,Book>::iterator bookIterator;
    for(long long unsigned int i=0;i<tmpV.size();i++){
        ListCtrlBook->InsertItem(i,wxString::Format(wxT("%i"),tmpV[i].bid),-1);
        ListCtrlBook->SetItem(i,1,tmpV[i].btitle,-1);
        ListCtrlBook->SetItem(i,2,tmpV[i].bauthor,-1);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////
void LibraryProjectFrame::OnButtonFindReaderClick1(wxCommandEvent& event)
{
    ListCtrlReader->ClearAll();
    wxString name,lastname;
    name= TextCtrlEditAddName->GetValue();
    lastname= TextCtrlEditAddSurName->GetValue();
    std::vector<Person>tmpV=lib.searchPerson(name.ToStdString(),lastname.ToStdString());
    ListCtrlReader->InsertColumn(0,"ID Czytelnika",wxLIST_FORMAT_LEFT,209);
    ListCtrlReader->InsertColumn(1,"Imie",wxLIST_FORMAT_LEFT,209);
    ListCtrlReader->InsertColumn(2,"Nazwisko",wxLIST_FORMAT_LEFT,209);
    std::map<int,Person>::iterator personIterator;
    for(long long unsigned int i=0;i<tmpV.size();i++){
        ListCtrlReader->InsertItem(i,wxString::Format(wxT("%i"),tmpV[i].uid),-1);
        ListCtrlReader->SetItem(i,1,tmpV[i].name,-1);
        ListCtrlReader->SetItem(i,2,tmpV[i].last_name,-1);
    }
}
