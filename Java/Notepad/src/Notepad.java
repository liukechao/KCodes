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

	Menu menuFile = new Menu("文件");
	MenuItem menuNew = new MenuItem("新建");
	MenuItem menuOpen = new MenuItem("打开...");
	MenuItem menuSave = new MenuItem("保存");
	MenuItem menuSaveAs = new MenuItem("另存为...");
	MenuItem menuPageConf = new MenuItem("页面设置...");
	MenuItem menuPrint = new MenuItem("打印...");
	MenuItem menuExit = new MenuItem("退出");

	Menu menuEdit = new Menu("编辑");
	MenuItem menuUndo = new MenuItem("撤消");
	MenuItem menuCut = new MenuItem("剪切");
	MenuItem menuCopy = new MenuItem("复制");
	MenuItem menuPaste = new MenuItem("粘贴");
	MenuItem menuDelete = new MenuItem("删除");
	MenuItem menuFind = new MenuItem("查找...");
	MenuItem menuFindNext = new MenuItem("查找下一个");
	MenuItem menuReplace = new MenuItem("替换...");
	MenuItem menuGoto = new MenuItem("转到...");
	MenuItem menuAll = new MenuItem("全选");
	MenuItem menuDateTime = new MenuItem("时间/日期");

	Menu menuFormat = new Menu("格式");
	CheckboxMenuItem menuWrap = new CheckboxMenuItem("自动换行");
	MenuItem menuFont = new MenuItem("字体...");

	Menu menuView = new Menu("查看");
	CheckboxMenuItem menuStatusBar = new CheckboxMenuItem("状态栏");

	Menu menuHelp = new Menu("帮助");
	MenuItem menuHelpIndex = new MenuItem("帮助主题");
	MenuItem menuAbout = new MenuItem("关于记事本");

	Dialog dlgPageConf = new Dialog(this, "页面设置");
	FileDialog dlgOpen = new FileDialog(this, "打开", FileDialog.LOAD);
	FileDialog dlgSaveAs = new FileDialog(this, "另存为", FileDialog.SAVE);

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
			Button b = new Button("确定");
			FlowLayout fl = new FlowLayout();
			Label l = new Label("您没有安装打印机，请先安装打印机。");
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
			text.setForeground(JColorChooser.showDialog(this, "选择字体颜色", c));
		} else if (e.getSource() == menuAbout)
			new AboutDialog("关于记事本");
	}

	/**
	 * Description: implement
	 * 
	 * @param ActionEvent
	 */
	public void itemStateChanged(ItemEvent e) {
		if (e.getSource() == menuWrap) {
			if (menuWrap.getState() == true)
				System.out.println("自动换行");
			else
				System.out.println("不自动换行");
		} else if (e.getSource() == menuStatusBar) {
			if (menuStatusBar.getState() == true)
				System.out.println("显示状态栏");
			else
				System.out.println("不显示状态栏");
		}
	}

	public static void main(String[] args) {
		Notepad myNotepad = new Notepad("记事本");
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