; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTasksApp
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Tasks.h"
LastPage=0

ClassCount=5
Class1=CTasksApp
Class2=CTasksDoc
Class3=CTasksView
Class4=CMainFrame

ResourceCount=7
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CAboutDlg
Resource7=IDD_TASKS_FORM

[CLS:CTasksApp]
Type=0
HeaderFile=Tasks.h
ImplementationFile=Tasks.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC
LastObject=CTasksApp

[CLS:CTasksDoc]
Type=0
HeaderFile=TasksDoc.h
ImplementationFile=TasksDoc.cpp
Filter=N

[CLS:CTasksView]
Type=0
HeaderFile=TasksView.h
ImplementationFile=TasksView.cpp
Filter=D
BaseClass=CFormView
VirtualFilter=VWC
LastObject=CTasksView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=Tasks.cpp
ImplementationFile=Tasks.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_MRU_FILE1
Command6=ID_APP_EXIT
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_EDIT_COPY
Command10=ID_EDIT_PASTE
Command11=ID_APP_ABOUT
CommandCount=11

[DLG:IDD_TASKS_FORM]
Type=1
Class=CTasksView
ControlCount=7
Control1=IDC_STATIC,static,1342308865
Control2=IDC_STATIC,static,1342308865
Control3=IDC_TASK1_EDIT,edit,1350631557
Control4=IDC_TASK2_EDIT,edit,1350631557
Control5=IDC_TASK1_CHECK,button,1342242819
Control6=IDC_TASK2_CHECK,button,1342242819
Control7=IDC_TEST_EDIT,edit,1350631552

