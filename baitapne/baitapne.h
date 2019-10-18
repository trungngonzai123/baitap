
// baitapne.h : main header file for the baitapne application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CbaitapneApp:
// See baitapne.cpp for the implementation of this class
//

class CbaitapneApp : public CWinApp
{
public:
	CbaitapneApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CbaitapneApp theApp;
