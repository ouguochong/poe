// exe.h : main header file for the EXE application
//

#if !defined(AFX_EXE_H__095626DD_6CB2_4748_B00F_CAE058D37F38__INCLUDED_)
#define AFX_EXE_H__095626DD_6CB2_4748_B00F_CAE058D37F38__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CExeApp:
// See exe.cpp for the implementation of this class
//

class CExeApp : public CWinApp
{
public:
	CExeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CExeApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXE_H__095626DD_6CB2_4748_B00F_CAE058D37F38__INCLUDED_)
