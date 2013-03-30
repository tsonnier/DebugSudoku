///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DSudoku__
#define __DSudoku__

class GamePanel;

#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame 
{
	private:
	
	protected:
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
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnLeftUp( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnPaint( wxPaintEvent& event ) { event.Skip(); }
		virtual void OnNumButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSetButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNoteButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClearButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 719,492 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~MainFrame();
	
};

#endif //__DSudoku__