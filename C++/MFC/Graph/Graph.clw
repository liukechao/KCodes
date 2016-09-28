; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CAboutDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Graph.h"

ClassCount=4
Class1=CGraphApp
Class2=CGraphDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_GRAPH_DIALOG
Class4=CSetDlg
Resource4=IDD_CUSTOM_DIALOG

[CLS:CGraphApp]
Type=0
HeaderFile=Graph.h
ImplementationFile=Graph.cpp
Filter=N

[CLS:CGraphDlg]
Type=0
HeaderFile=GraphDlg.h
ImplementationFile=GraphDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_DRAW_BUTTON

[CLS:CAboutDlg]
Type=0
HeaderFile=GraphDlg.h
ImplementationFile=GraphDlg.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_GRAPH_DIALOG]
Type=1
Class=CGraphDlg
ControlCount=2
Control1=IDC_EXIT_BUTTON,button,1342242816
Control2=IDC_DRAW_BUTTON,button,1342242816

[DLG:IDD_CUSTOM_DIALOG]
Type=1
Class=CSetDlg
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_RED_RADIO,button,1342312457
Control4=IDC_GREEN_RADIO,button,1342181385
Control5=IDC_BLUE_RADIO,button,1342181385

[CLS:CSetDlg]
Type=0
HeaderFile=SetDlg.h
ImplementationFile=SetDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CSetDlg

