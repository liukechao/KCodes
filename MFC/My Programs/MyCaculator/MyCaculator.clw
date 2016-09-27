; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyCaculatorDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MyCaculator.h"

ClassCount=4
Class1=CMyCaculatorApp
Class2=CMyCaculatorDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_MYCACULATOR_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUT_DIALOG
Class4=AboutDlg
Resource4=IDD_ABOUTBOX
Resource5=IDR_MENU

[CLS:CMyCaculatorApp]
Type=0
HeaderFile=MyCaculator.h
ImplementationFile=MyCaculator.cpp
Filter=N

[CLS:CMyCaculatorDlg]
Type=0
HeaderFile=MyCaculatorDlg.h
ImplementationFile=MyCaculatorDlg.cpp
Filter=D
LastObject=IDC_BACKSPACE_BUTTON
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=MyCaculatorDlg.h
ImplementationFile=MyCaculatorDlg.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_MYCACULATOR_DIALOG]
Type=1
Class=CMyCaculatorDlg
ControlCount=23
Control1=IDC_EDIT,edit,1350633602
Control2=IDC_7_BUTTON,button,1342246656
Control3=IDC_8_BUTTON,button,1342242816
Control4=IDC_9_BUTTON,button,1342242816
Control5=IDC_DIVIDE_BUTTON,button,1342242816
Control6=IDC_SQAREROOT_BUTTON,button,1342242816
Control7=IDC_4_BUTTON,button,1342242816
Control8=IDC_5_BUTTON,button,1342242816
Control9=IDC_6_BUTTON,button,1342243584
Control10=IDC_MULTIPLY_BUTTON,button,1342242816
Control11=IDC_LOGARITHM_BUTTON,button,1342242816
Control12=IDC_1_BUTTON,button,1342242816
Control13=IDC_2_BUTTON,button,1342242816
Control14=IDC_3_BUTTON,button,1342242816
Control15=IDC_REDUCE_BUTTON,button,1342242816
Control16=IDC_RECIPROCAL_BUTTON,button,1342242816
Control17=IDC_0_BUTTON,button,1342242816
Control18=IDC_POSITIVEMINUS_BUTTON,button,1342242816
Control19=IDC_RADIXPOINT_BUTTON,button,1476460544
Control20=IDC_ADD_BUTTON,button,1342242816
Control21=IDC_EQUAL_BUTTON,button,1342242816
Control22=IDC_BACKSPACE_BUTTON,button,1342242816
Control23=IDC_CLEAR_BUTTON,button,1342242816

[MNU:IDR_MENU]
Type=1
Class=CMyCaculatorDlg
Command1=ID_MENU_COPY
Command2=ID_MENU_PASTE
Command3=ID_MENU_STANDARD
Command4=ID_MENU_SCIENCE
Command5=ID_MENU_GROUPED
Command6=ID_MENU_HELP
Command7=ID_MENU_ABOUT
CommandCount=7

[DLG:IDD_ABOUT_DIALOG]
Type=1
Class=AboutDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1342308353
Control3=IDC_STATIC,static,1342177294

[CLS:AboutDlg]
Type=0
HeaderFile=AboutDlg.h
ImplementationFile=AboutDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=ID_MENU_GROUPED

[DLG:IDD_ABOUTBOX]
Type=1
Class=?
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1342308353
Control3=IDC_STATIC,static,1342177294

