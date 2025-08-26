// Copyright (c) 2025 DevKid2001
// MIT License

#include "MainFrame.h"
#include "App.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition, wxSize(430, 290), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)) {
	wxPanel* panel = new wxPanel(this);

	wxButton* button = new wxButton(panel, wxID_ANY, "Click Me!", wxPoint(125, 110), wxSize(180, 50));
	button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClick, this);

	CreateStatusBar();

	wxIcon icon("IDI_ICON1", wxBITMAP_TYPE_ICO_RESOURCE);
	SetIcon(icon);

}

void MainFrame::OnButtonClick(wxCommandEvent& evt) {
	wxLogStatus("Status: Happy");

	while (true) {
		int result = wxMessageBox("Happy Day...", "Click Me! said...", wxYES_NO | wxICON_INFORMATION);

		if (result == wxYES) {
			while (true) {
				int goodBoy = wxMessageBox("Good Boy...", "Click Me! said...", wxYES_NO);

				if (goodBoy == wxYES) {
					break;
				}
			}

			break;
		}
	}
}

// Thank you