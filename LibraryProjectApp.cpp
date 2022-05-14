/***************************************************************
 * Name:      LibraryProjectApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Adam Basiak, Mateusz Budzowski, Bruno Wiech ()
 * Created:   2022-01-01
 * Copyright: Adam Basiak, Mateusz Budzowski, Bruno Wiech ()
 * License:
 **************************************************************/

#include "LibraryProjectApp.h"

//(*AppHeaders
#include "LibraryProjectMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(LibraryProjectApp);

bool LibraryProjectApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	LibraryProjectFrame* Frame = new LibraryProjectFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
