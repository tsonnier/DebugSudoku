///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIFRAME_H__
#define __GUIFRAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include "GamePanel.h"

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

#define ID_GUIFRAME 1000

///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar1;
		wxMenu* m_menuFile;
		wxMenu* m_menuPuzzle;
		wxMenu* m_menuAbout;
		GamePanel* m_panelGuess;
		GamePanel* m_panelTrue;
		wxPanel* m_panelControls;
		wxPanel* m_panelNumbers;
		wxButton* m_button1;
		wxButton* m_button2;
		wxButton* m_button3;
		wxButton* m_button4;
		wxButton* m_button5;
		wxButton* m_button6;
		wxButton* m_button7;
		wxButton* m_button8;
		wxButton* m_button9;
		wxPanel* m_panelSettings;
		wxButton* m_buttonSet;
		wxButton* m_buttonNote;
		wxButton* m_buttonClear;
		wxPanel* m_panelDebug;
		wxButton* m_buttonSolve;
		wxButton* m_buttonNakedSingle;
		wxButton* m_buttonHiddenSingle;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnSetFocus( wxFocusEvent& event ) { event.Skip(); }
		virtual void OnNewPuzzle( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNewBase( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSavePuzzle( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLoadPuzzle( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnScrambleBoards( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveLayer( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnResetPossibles( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemovePossibles( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnResetRowColSec( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGenPuzzles( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnGuessPanelEraseBG( wxEraseEvent& event ) { event.Skip(); }
		virtual void OnGuessPanelKeyUp( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnGuessPanelLeftUp( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnGuessPanelPaint( wxPaintEvent& event ) { event.Skip(); }
		virtual void OnTruePanelEraseBG( wxEraseEvent& event ) { event.Skip(); }
		virtual void OnTruePanelPaint( wxPaintEvent& event ) { event.Skip(); }
		virtual void OnNumButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSetButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNoteButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClearButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSolve( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNakedSingle( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnHiddenSingle( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIFrame( wxWindow* parent, wxWindowID id = ID_GUIFRAME, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 727,511 ), long style = wxDEFAULT_FRAME_STYLE );
		
		~GUIFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class GenPuzzleDialog
///////////////////////////////////////////////////////////////////////////////
class GenPuzzleDialog : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrlGenPuzzles;
	
	public:
		
		GenPuzzleDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("How many puzzles?"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 567,83 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~GenPuzzleDialog();
	
};

#endif //__GUIFRAME_H__
