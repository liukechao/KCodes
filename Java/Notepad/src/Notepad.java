/**
 * Copy Right 	: sjtu
 * Project      : Notepad
 * @author      : liukc
 * @version		: 1.1
 **/

import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;
import javax.swing.*;

public class Notepad extends Frame implements ActionListener, ItemListener {
	private static final long serialVersionUID = 1L;
	String file = "G:\\JAVA\\temp.txt";
	TextArea text = new TextArea("");
	MenuBar mb = new MenuBar();

	Menu menuFile = new Menu("�ļ�");
	MenuItem menuNew = new MenuItem("�½�");
	MenuItem menuOpen = new MenuItem("��...");
	MenuItem menuSave = new MenuItem("����");
	MenuItem menuSaveAs = new MenuItem("���Ϊ...");
	MenuItem menuPageConf = new MenuItem("ҳ������...");
	MenuItem menuPrint = new MenuItem("��ӡ...");
	MenuItem menuExit = new MenuItem("�˳�");

	Menu menuEdit = new Menu("�༭");
	MenuItem menuUndo = new MenuItem("����");
	MenuItem menuCut = new MenuItem("����");
	MenuItem menuCopy = new MenuItem("����");
	MenuItem menuPaste = new MenuItem("ճ��");
	MenuItem menuDelete = new MenuItem("ɾ��");
	MenuItem menuFind = new MenuItem("����...");
	MenuItem menuFindNext = new MenuItem("������һ��");
	MenuItem menuReplace = new MenuItem("�滻...");
	MenuItem menuGoto = new MenuItem("ת��...");
	MenuItem menuAll = new MenuItem("ȫѡ");
	MenuItem menuDateTime = new MenuItem("ʱ��/����");

	Menu menuFormat = new Menu("��ʽ");
	CheckboxMenuItem menuWrap = new CheckboxMenuItem("�Զ�����");
	MenuItem menuFont = new MenuItem("����...");

	Menu menuView = new Menu("�鿴");
	CheckboxMenuItem menuStatusBar = new CheckboxMenuItem("״̬��");

	Menu menuHelp = new Menu("����");
	MenuItem menuHelpIndex = new MenuItem("��������");
	MenuItem menuAbout = new MenuItem("���ڼ��±�");

	Dialog dlgPageConf = new Dialog(this, "ҳ������");
	FileDialog dlgOpen = new FileDialog(this, "��", FileDialog.LOAD);
	FileDialog dlgSaveAs = new FileDialog(this, "���Ϊ", FileDialog.SAVE);

	/**
	 * Description: Constructor
	 * 
	 * @param title
	 */

	Notepad(String title) {
		super(title);
		menuNew.addActionListener(this);
		menuOpen.addActionListener(this);
		menuSave.addActionListener(this);
		menuSaveAs.addActionListener(this);
		menuPageConf.addActionListener(this);
		menuExit.addActionListener(this);
		menuDateTime.addActionListener(this);
		menuFont.addActionListener(this);
		menuAbout.addActionListener(this);
		menuWrap.addItemListener(this);
		menuStatusBar.addItemListener(this);

		menuFile.add(menuNew);
		menuFile.add(menuOpen);
		menuFile.add(menuSave);
		menuFile.add(menuSaveAs);
		menuFile.addSeparator();
		menuFile.add(menuPageConf);
		menuFile.add(menuPrint);
		menuFile.addSeparator();
		menuFile.add(menuExit);

		menuEdit.add(menuUndo);
		menuEdit.addSeparator();
		menuEdit.add(menuCut);
		menuEdit.add(menuCopy);
		menuEdit.add(menuPaste);
		menuEdit.add(menuDelete);
		menuEdit.addSeparator();
		menuEdit.add(menuFind);
		menuEdit.add(menuFindNext);
		menuEdit.add(menuReplace);
		menuEdit.add(menuGoto);
		menuEdit.addSeparator();
		menuEdit.add(menuAll);
		menuEdit.add(menuDateTime);

		menuFormat.add(menuWrap);
		menuFormat.add(menuFont);

		menuView.add(menuStatusBar);

		menuHelp.add(menuHelpIndex);
		menuHelp.addSeparator();
		menuHelp.add(menuAbout);

		mb.add(menuFile);
		mb.add(menuEdit);
		mb.add(menuFormat);
		mb.add(menuView);
		mb.add(menuHelp);

		text.setFont(new Font("Default", Font.PLAIN, 12));
		this.setMenuBar(mb);
		this.add(text);
	}

	/**
	 * Description: implement
	 * 
	 * @param ActionEvent
	 */

	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == menuNew)
			text.setText("");
		else if (e.getSource() == menuOpen) {
			String Input;
			dlgOpen.setDirectory("G:\\JAVA\\");
			dlgOpen.setVisible(true);
			file = dlgOpen.getDirectory() + dlgOpen.getFile();
			text.setText("");
			try {
				BufferedReader textIn = new BufferedReader(new FileReader(file));
				while ((Input = textIn.readLine()) != null) {
					text.append(Input + "\n");
				}
				textIn.close();
			} catch (Exception ex) {
			}
		} else if (e.getSource() == menuSave) {
			try {
				BufferedWriter textOut = new BufferedWriter(
						new FileWriter(file));
				textOut.write(text.getText());
				textOut.flush();
				textOut.close();
			} catch (Exception ex) {
			}
		} else if (e.getSource() == menuSaveAs) {
			dlgSaveAs.setDirectory("G:\\JAVA\\");
			dlgSaveAs.setFile("temp.txt");
			dlgSaveAs.setVisible(true);
			file = dlgSaveAs.getDirectory() + dlgSaveAs.getFile();
			try {
				BufferedWriter textOut = new BufferedWriter(
						new FileWriter(file));
				textOut.write(text.getText());
				textOut.flush();
				textOut.close();
			} catch (Exception ex) {
			}
		} else if (e.getSource() == menuPageConf) {
			Button b = new Button("ȷ��");
			FlowLayout fl = new FlowLayout();
			Label l = new Label("��û�а�װ��ӡ�������Ȱ�װ��ӡ����");
			dlgPageConf.add(l);
			dlgPageConf.add(b);
			dlgPageConf.setLayout(fl);
			dlgPageConf.setSize(300, 70);
			dlgPageConf.setResizable(false);
			dlgPageConf.setLocation(350, 300);
			dlgPageConf.setVisible(true);
			dlgPageConf.addWindowListener(new windowClose());
			b.addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent buttonEvent) {
					dlgPageConf.dispose();
				}
			});
		} else if (e.getSource() == menuExit)
			System.exit(0);
		else if (e.getSource() == menuDateTime) {
			Date currentDate = new Date();
			text.append(currentDate.toLocaleString() + "\n");
		} else if (e.getSource() == menuFont) {
			Color c = Color.BLUE;
			text.setForeground(JColorChooser.showDialog(this, "ѡ��������ɫ", c));
		} else if (e.getSource() == menuAbout)
			new AboutDialog("���ڼ��±�");
	}

	/**
	 * Description: implement
	 * 
	 * @param ActionEvent
	 */
	public void itemStateChanged(ItemEvent e) {
		if (e.getSource() == menuWrap) {
			if (menuWrap.getState() == true)
				System.out.println("�Զ�����");
			else
				System.out.println("���Զ�����");
		} else if (e.getSource() == menuStatusBar) {
			if (menuStatusBar.getState() == true)
				System.out.println("��ʾ״̬��");
			else
				System.out.println("����ʾ״̬��");
		}
	}

	public static void main(String[] args) {
		Notepad myNotepad = new Notepad("���±�");
		myNotepad.setSize(800, 600);
		myNotepad.setLocation(100, 80);
		myNotepad.setVisible(true);
		myNotepad.addWindowListener(new windowClose());
	}
}

class windowClose extends WindowAdapter {
	public void windowClosing(WindowEvent e) {
		e.getWindow().dispose();
	}
}