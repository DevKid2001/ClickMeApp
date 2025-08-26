// Copyright (c) 2025 DevKid2001
// MIT License

#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);

private:
	void OnButtonClick(wxCommandEvent& evt);
};

