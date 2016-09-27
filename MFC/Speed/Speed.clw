; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSpeedDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Speed.h"

ClassCount=3
Class1=CSpeedApp
Class2=CSpeedDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_SPEED_DIALOG
Resource4=IDR_MENU1

[CLS:CSpeedApp]
Type=0
HeaderFile=Speed.h
ImplementationFile=Speed.cpp
Filter=N

[CLS:CSpeedDlg]
Type=0
HeaderFile=SpeedDlg.h
ImplementationFile=SpeedDlg.cpp
Filter=D
LastObject=ID_HELP_ABOUT
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=SpeedDlg.h
ImplementationFile=SpeedDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_SPEED_DIALOG]
Type=1
Class=CSpeedDlg
ControlCount=2
Control1=IDC_STATIC,static,1342308352
Control2=IDC_SPEED_EDIT,edit,1350631552

[MNU:IDR_MENU1]
Type=1
Class=CSpeedDlg
Command1=ID_FILE_CURRENTSPEED
Command2=ID_FILE_EXIT
Command3=ID_HELP_ABOUT
CommandCount=3

