// Copyright (c) 2025 DevKid2001
// MIT License

#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("Click Me! App - by Sean");
	mainFrame->SetClientSize(430, 290);
	mainFrame->Center();
	mainFrame->Show();
	return true;
}
