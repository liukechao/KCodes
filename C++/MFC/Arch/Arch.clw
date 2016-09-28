; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CArchDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Arch.h"

ClassCount=3
Class1=CArchApp
Class2=CArchDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_ARCH_DIALOG

[CLS:CArchApp]
Type=0
HeaderFile=Arch.h
ImplementationFile=Arch.cpp
Filter=N

[CLS:CArchDlg]
Type=0
HeaderFile=ArchDlg.h
ImplementationFile=ArchDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_LOAD_BUTTON

[CLS:CAboutDlg]
Type=0
HeaderFile=ArchDlg.h
ImplementationFile=ArchDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_ARCH_DIALOG]
Type=1
Class=CArchDlg
ControlCount=6
Control1=IDC_STATIC,static,1342308352
Control2=IDC_STATIC,static,1342308352
Control3=IDC_VAR1_EDIT,edit,1350631552
Control4=IDC_VAR2_EDIT,edit,1350631552
Control5=IDC_SAVE_BUTTON,button,1342246656
Control6=IDC_LOAD_BUTTON,button,1342246656

