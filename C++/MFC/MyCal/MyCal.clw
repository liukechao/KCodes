; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyCalDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MyCal.h"

ClassCount=3
Class1=CMyCalApp
Class2=CMyCalDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_MYCAL_DIALOG

[CLS:CMyCalApp]
Type=0
HeaderFile=MyCal.h
ImplementationFile=MyCal.cpp
Filter=N

[CLS:CMyCalDlg]
Type=0
HeaderFile=MyCalDlg.h
ImplementationFile=MyCalDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_TODAY_BUTTON

[CLS:CAboutDlg]
Type=0
HeaderFile=MyCalDlg.h
ImplementationFile=MyCalDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MYCAL_DIALOG]
Type=1
Class=CMyCalDlg
ControlCount=3
Control1=IDC_CALENDAR1,{8E27C92B-1264-101C-8A2F-040224009C02},1342242816
Control2=IDC_TODAY_BUTTON,button,1342242816
Control3=IDC_EXIT_BUTTON,button,1342242816

