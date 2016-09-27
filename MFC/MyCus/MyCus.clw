; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyCusDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MyCus.h"

ClassCount=4
Class1=CMyCusApp
Class2=CMyCusDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_MYCUS_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Class4=CCustDlg
Resource4=IDD_CUSTOM_DIALOG

[CLS:CMyCusApp]
Type=0
HeaderFile=MyCus.h
ImplementationFile=MyCus.cpp
Filter=N

[CLS:CMyCusDlg]
Type=0
HeaderFile=MyCusDlg.h
ImplementationFile=MyCusDlg.cpp
Filter=D
LastObject=IDC_DISPLAYRESULTS_BUTTON
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=MyCusDlg.h
ImplementationFile=MyCusDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MYCUS_DIALOG]
Type=1
Class=CMyCusDlg
ControlCount=3
Control1=IDC_EXIT_BUTTON,button,1342242816
Control2=IDC_DISPLAYRESULTS_BUTTON,button,1342242816
Control3=IDC_GETDATA_BUTTON,button,1342242816

[DLG:IDD_CUSTOM_DIALOG]
Type=1
Class=CCustDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_MYDATA_EDIT,edit,1350631552

[CLS:CCustDlg]
Type=0
HeaderFile=CustDlg.h
ImplementationFile=CustDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDOK

