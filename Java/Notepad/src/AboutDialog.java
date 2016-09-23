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

public class AboutDialog extends Frame {
	private static final long serialVersionUID = 1L;
	Label l = new Label("∞Ê»®À˘”– Allen");

	/**
	 * Description: Constructor
	 * 
	 * @param title
	 */
	AboutDialog(String title) {
		super(title);
		l.setAlignment(Label.CENTER);
		l.setFont(new Font("", Font.BOLD, 20));
		l.setBackground(Color.GREEN);
		add(l);
		setSize(300, 100);
		setLocation(350, 300);
		setResizable(false);
		setAlwaysOnTop(true);
		setVisible(true);
		addWindowListener(new windowClose());
	}
}