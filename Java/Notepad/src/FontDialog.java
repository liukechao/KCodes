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
import java.text.*;

public class FontDialog {
	Frame fr = new Frame();
	Label labelName = new Label("���壺");
	Label labelStyle = new Label("���Σ�");
	Label labelSize = new Label("��С��");
	Label labelInstance = new Label("ʾ��");
	TextField tfName = new TextField("", 10);
	TextField tfStyle = new TextField("", 10);
	TextField tfSize = new TextField("", 10);
	TextField tfInstance = new TextField("", 10);
	FlowLayout fl = new FlowLayout();

	/**
	 * Description: Constructor
	 * 
	 * @param title
	 */
	FontDialog(String title) {
		fr.setTitle("ѡ������");
		fr.setLayout(fl);
		fr.add(labelName);
		fr.add(labelStyle);
		fr.add(labelSize);
		fr.add(labelInstance);
		fr.add(tfName);
		fr.add(tfStyle);
		fr.add(tfSize);
		fr.add(tfInstance);
		fr.setSize(300, 200);
		fr.setAlwaysOnTop(true);
		fr.setResizable(false);
		fr.setVisible(true);
		fr.addWindowListener(new windowClose());
	}

	/**
	 * Description: return font
	 * 
	 * @return font
	 */

	public Font returnFont() {
		String strName = tfName.getText();
		String strStyle = tfName.getText();
		String strSize = tfName.getText();
		Font f = new Font(strName, Font.BOLD, Integer.parseInt(strSize));
		return f;
	}
}