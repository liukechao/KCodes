; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyMsgDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MyMsg.h"

ClassCount=3
Class1=CMyMsgApp
Class2=CMyMsgDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_MYMSG_DIALOG

[CLS:CMyMsgApp]
Type=0
HeaderFile=MyMsg.h
ImplementationFile=MyMsg.cpp
Filter=N

[CLS:CMyMsgDlg]
Type=0
HeaderFile=MyMsgDlg.h
ImplementationFile=MyMsgDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_YESNO_BUTTON

[CLS:CAboutDlg]
Type=0
HeaderFile=MyMsgDlg.h
ImplementationFile=MyMsgDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MYMSG_DIALOG]
Type=1
Class=CMyMsgDlg
ControlCount=7
Control1=IDC_EXIT_BUTTON,button,1342242816
Control2=IDC_OKCANCEL_BUTTON,button,1342242816
Control3=IDC_YESNO_BUTTON,button,1342242816
Control4=IDC_YESNOCANCEL_BUTTON,button,1342242816
Control5=IDC_RETRYCANCEL_BUTTON,button,1342242816
Control6=IDC_STATIC,button,1342177287
Control7=IDC_RESULTS_EDIT,edit,1350631553

