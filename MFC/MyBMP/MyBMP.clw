; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyBMPDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MyBMP.h"

ClassCount=3
Class1=CMyBMPApp
Class2=CMyBMPDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_MYBMP_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Resource4=IDR_MENU1

[CLS:CMyBMPApp]
Type=0
HeaderFile=MyBMP.h
ImplementationFile=MyBMP.cpp
Filter=N

[CLS:CMyBMPDlg]
Type=0
HeaderFile=MyBMPDlg.h
ImplementationFile=MyBMPDlg.cpp
Filter=D
LastObject=CMyBMPDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=MyBMPDlg.h
ImplementationFile=MyBMPDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MYBMP_DIALOG]
Type=1
Class=CMyBMPDlg
ControlCount=0

[MNU:IDR_MENU1]
Type=1
Class=CMyBMPDlg
Command1=ID_FILE_EXIT
Command2=ID_HELP_ABOUT
CommandCount=2

