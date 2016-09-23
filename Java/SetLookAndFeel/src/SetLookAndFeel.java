import javax.swing.*;
import javax.swing.border.*;
import java.awt.FlowLayout;
import java.awt.BorderLayout;
import java.awt.GridLayout;
import java.awt.Container;
import java.awt.Color;
import java.awt.Font;
import java.awt.Font.*;
import java.awt.event.*;

public class SetLookAndFeel extends JFrame implements ActionListener {
	private int zoomFlag = 0;
	private String LookAndFeel = null;

	private JFrame mainFrame = this;

	private JSeparator menuSeparator = new JSeparator();
	private JMenuItem defaultItem = new JMenuItem("Default", new ImageIcon(
			"Icons/4.png"));
	private JMenuItem customizeItem = new JMenuItem("Customize", new ImageIcon(
			"Icons/5.png"));
	private JMenuItem exitItem = new JMenuItem("Exit", new ImageIcon(
			"Icons/6.png"));

	private JCheckBoxMenuItem showCheck = new JCheckBoxMenuItem(
			"Show Infomation", true);
	private JRadioButtonMenuItem windowsLookRadio = new JRadioButtonMenuItem(
			"Windows", new ImageIcon("Icons/1.png"), false);
	private JRadioButtonMenuItem unixLookRadio = new JRadioButtonMenuItem(
			"UNIX", new ImageIcon("Icons/2.png"), false);
	private JRadioButtonMenuItem javaLookRadio = new JRadioButtonMenuItem(
			"Java", new ImageIcon("Icons/3.png"), true);

	private ButtonGroup lookGroup = new ButtonGroup();

	private JMenu lookMenu = new JMenu("Look And Feel...");
	private JMenu configMenu = new JMenu("Config");

	private JMenuBar myMenu = new JMenuBar();

	private JMenuItem zoomInPopup = new JMenuItem("Zoom In");
	private JMenuItem zoomOutPopup = new JMenuItem("Zoom Out");
	private JPopupMenu dispPopup = new JPopupMenu();

	private JButton windowsLookButton = new JButton(" Windows ", new ImageIcon(
			"Icons/1_big.png"));
	private JButton unixLookButton = new JButton(" UNIX ", new ImageIcon(
			"Icons/2_big.png"));
	private JButton javaLookButton = new JButton(" Java ", new ImageIcon(
			"Icons/3_big.png"));
	private JLabel dispLabel = new JLabel("", SwingConstants.CENTER);

	private configFrame customFrame = new configFrame();

	public SetLookAndFeel() {
		super("Set Look And Feel");

		lookGroup.add(windowsLookRadio);
		lookGroup.add(unixLookRadio);
		lookGroup.add(javaLookRadio);

		lookMenu.add(windowsLookRadio);
		lookMenu.add(unixLookRadio);
		lookMenu.add(javaLookRadio);

		configMenu.add(defaultItem);
		configMenu.add(customizeItem);
		configMenu.add(showCheck);
		configMenu.add(lookMenu);
		configMenu.add(menuSeparator);
		configMenu.add(exitItem);

		myMenu.add(configMenu);

		dispPopup.add(zoomInPopup);
		dispPopup.add(zoomOutPopup);

		JPanel setLookAndFeel = new JPanel(new FlowLayout());
		setLookAndFeel.add(windowsLookButton);
		setLookAndFeel.add(unixLookButton);
		setLookAndFeel.add(javaLookButton);
		setLookAndFeel.setBorder(new TitledBorder(new EtchedBorder(
				EtchedBorder.LOWERED), "Look And Feel"));
		setLookAndFeel.setToolTipText("Change Look And Feel");

		dispLabel.setFont(new Font("", Font.BOLD, 50));
		dispLabel.setToolTipText("Right Click to Change the Size");
		dispLabel.setBorder(new TitledBorder(new EtchedBorder(
				EtchedBorder.LOWERED), "Infomation"));

		Container content = this.getContentPane();
		content.setLayout(new BorderLayout());
		content.add(BorderLayout.NORTH, setLookAndFeel);
		content.add(BorderLayout.CENTER, dispLabel);

		windowsLookButton.setToolTipText("Windows Look And Feel");
		windowsLookButton.setBorder(new BevelBorder(BevelBorder.RAISED));
		unixLookButton.setToolTipText("UNIX Look And Feel");
		unixLookButton.setBorder(new BevelBorder(BevelBorder.RAISED));
		javaLookButton.setToolTipText("Java Look And Feel");
		javaLookButton.setBorder(new BevelBorder(BevelBorder.RAISED));

		defaultItem.addActionListener(this);
		customizeItem.addActionListener(this);
		exitItem.addActionListener(this);
		showCheck.addActionListener(this);
		windowsLookRadio.addActionListener(this);
		unixLookRadio.addActionListener(this);
		javaLookRadio.addActionListener(this);

		zoomInPopup.addActionListener(this);
		zoomOutPopup.addActionListener(this);

		windowsLookButton.addActionListener(this);
		unixLookButton.addActionListener(this);
		javaLookButton.addActionListener(this);

		dispLabel.addMouseListener(new MouseAdapter() {
			public void mousePressed(MouseEvent me) {
				if (SwingUtilities.isRightMouseButton(me))
					dispPopup.show(dispLabel, me.getX(), me.getY());
			}
		});

		this.setJMenuBar(myMenu);
		this.validate();
		this.pack();
		this.setLocation(200, 200);
		this.setVisible(true);
		this.addWindowListener(new WindowAdapter() {
			public void windowClosing(WindowEvent we) {
				System.exit(0);
			}
		});
	}

	public void SetInfo(String info) {
		dispLabel.setText(info);
		this.pack();
	}

	public void SetLookAndFeel(JFrame frame, String look) {
		try {
			UIManager.setLookAndFeel(look);
			SwingUtilities.updateComponentTreeUI(this);
			SwingUtilities.updateComponentTreeUI(frame);
			this.pack();
			frame.pack();
		} catch (Exception e) {
			e.printStackTrace();
		}

	}

	public void actionPerformed(ActionEvent ae) {
		Object sourceObj = ae.getSource();

		System.out.println(sourceObj);

		if (sourceObj == exitItem)
			System.exit(0);

		else if (sourceObj == showCheck) {
			dispLabel.setVisible(showCheck.getState());
			this.pack();
		}

		else if (sourceObj == windowsLookButton) {
			LookAndFeel = "com.sun.java.swing.plaf.windows.WindowsLookAndFeel";
			windowsLookRadio.setSelected(true);
		}

		else if (sourceObj == unixLookButton) {
			LookAndFeel = "com.sun.java.swing.plaf.motif.MotifLookAndFeel";
			unixLookRadio.setSelected(true);
		}

		else if (sourceObj == javaLookButton) {
			LookAndFeel = "javax.swing.plaf.metal.MetalLookAndFeel";
			javaLookRadio.setSelected(true);
		}

		else if (sourceObj == windowsLookRadio)
			LookAndFeel = "com.sun.java.swing.plaf.windows.WindowsLookAndFeel";

		else if (sourceObj == unixLookRadio)
			LookAndFeel = "com.sun.java.swing.plaf.motif.MotifLookAndFeel";

		else if (sourceObj == javaLookRadio)
			LookAndFeel = "javax.swing.plaf.metal.MetalLookAndFeel";

		else if (sourceObj == defaultItem) {
			LookAndFeel = "javax.swing.plaf.metal.MetalLookAndFeel";

			dispLabel.setVisible(true);
			dispLabel.setFont(new Font("", Font.BOLD, 50));
			SetInfo("Welcome to swing!");

			showCheck.setSelected(true);
			javaLookRadio.setSelected(true);

			windowsLookButton.setVisible(true);
			unixLookButton.setVisible(true);
			javaLookButton.setVisible(true);

			zoomFlag = 0;
			zoomInPopup.setEnabled(true);
			zoomOutPopup.setEnabled(true);

			customFrame.showWindowsLookButton.setSelected(true);
			customFrame.showUnixLookButton.setSelected(true);
			customFrame.showJavaLookButton.setSelected(true);
			customFrame.innerJavaLookRadio.setSelected(true);
		}

		else if (sourceObj == customizeItem) {
			customFrame.setLocationRelativeTo(this);
			customFrame.setVisible(true);
			this.setEnabled(false);
		}

		else if (sourceObj == zoomInPopup) {
			if (zoomFlag < 3) {
				zoomOutPopup.setEnabled(true);
				Font currentFont = dispLabel.getFont();
				dispLabel.setFont(new Font(currentFont.getFontName(),
						Font.BOLD, currentFont.getSize() + 10));
				this.pack();
				zoomFlag++;
				if (zoomFlag == 3)
					zoomInPopup.setEnabled(false);
			}
		}

		else if (sourceObj == zoomOutPopup) {
			if (zoomFlag > -3) {
				zoomInPopup.setEnabled(true);
				Font currentFont = dispLabel.getFont();
				dispLabel.setFont(new Font(currentFont.getFontName(),
						Font.BOLD, currentFont.getSize() - 10));
				this.pack();
				zoomFlag--;
				if (zoomFlag == -3)
					zoomOutPopup.setEnabled(false);
			}
		}

		if (LookAndFeel != null)
			SetLookAndFeel(customFrame, LookAndFeel);
	}

	class configFrame extends JFrame implements ActionListener {
		String innerLookAndFeel = null;

		private JCheckBox showWindowsLookButton = new JCheckBox(
				"Windows Look And Feel Button", true);
		private JCheckBox showUnixLookButton = new JCheckBox(
				"Unix Look And Feel Button", true);
		private JCheckBox showJavaLookButton = new JCheckBox(
				"Java Look And Feel Button", true);
		private JPanel innerCheckPanel = new JPanel();

		private JRadioButton innerWindowsLookRadio = new JRadioButton(
				"Windows Look And Feel");
		private JRadioButton innerUnixLookRadio = new JRadioButton(
				"Unix Look And Feel");
		private JRadioButton innerJavaLookRadio = new JRadioButton(
				"Java Look And Feel", true);
		private ButtonGroup innerLookGroup = new ButtonGroup();
		private JPanel innerLookPanel = new JPanel();

		public configFrame() {
			super("Customize");

			innerCheckPanel.setLayout(new GridLayout(3, 1));
			innerCheckPanel.add(showWindowsLookButton);
			innerCheckPanel.add(showUnixLookButton);
			innerCheckPanel.add(showJavaLookButton);
			innerCheckPanel.setBorder(new TitledBorder(new EtchedBorder(
					EtchedBorder.LOWERED), "Buttons to Show"));

			innerLookGroup.add(innerWindowsLookRadio);
			innerLookGroup.add(innerUnixLookRadio);
			innerLookGroup.add(innerJavaLookRadio);

			innerLookPanel.setLayout(new GridLayout(3, 1));
			innerLookPanel.add(innerWindowsLookRadio);
			innerLookPanel.add(innerUnixLookRadio);
			innerLookPanel.add(innerJavaLookRadio);
			innerLookPanel.setBorder(new TitledBorder(new EtchedBorder(
					EtchedBorder.LOWERED), "Look And Feel"));

			Container innerContent = this.getContentPane();
			innerContent.add(BorderLayout.WEST, innerCheckPanel);
			innerContent.add(BorderLayout.EAST, innerLookPanel);

			showWindowsLookButton.addActionListener(this);
			showUnixLookButton.addActionListener(this);
			showJavaLookButton.addActionListener(this);

			innerWindowsLookRadio.addActionListener(this);
			innerUnixLookRadio.addActionListener(this);
			innerJavaLookRadio.addActionListener(this);

			this.pack();
			this.addWindowListener(new WindowAdapter() {
				public void windowClosing(WindowEvent we) {
					we.getWindow().dispose();
					mainFrame.setEnabled(true);
				}
			});
		}

		public void actionPerformed(ActionEvent ae) {
			Object innerSourceObj = ae.getSource();
			System.out.println(innerSourceObj);

			if (innerSourceObj == showWindowsLookButton) {
				if (showWindowsLookButton.isSelected())
					windowsLookButton.setVisible(true);
				else
					windowsLookButton.setVisible(false);
			}

			else if (innerSourceObj == showUnixLookButton) {
				if (showUnixLookButton.isSelected())
					unixLookButton.setVisible(true);
				else
					unixLookButton.setVisible(false);
			}

			else if (innerSourceObj == showJavaLookButton) {
				if (showJavaLookButton.isSelected())
					javaLookButton.setVisible(true);
				else
					javaLookButton.setVisible(false);
			}

			else if (innerSourceObj == innerWindowsLookRadio) {
				innerLookAndFeel = "com.sun.java.swing.plaf.windows.WindowsLookAndFeel";
				windowsLookRadio.setSelected(true);
			} else if (innerSourceObj == innerUnixLookRadio) {
				innerLookAndFeel = "com.sun.java.swing.plaf.motif.MotifLookAndFeel";
				unixLookRadio.setSelected(true);
			}

			else if (innerSourceObj == innerJavaLookRadio) {
				innerLookAndFeel = "javax.swing.plaf.metal.MetalLookAndFeel";
				javaLookRadio.setSelected(true);
			}

			if (innerLookAndFeel != null)
				SetLookAndFeel(this, innerLookAndFeel);
		}
	}

	public static void main(String args[]) {
		SetLookAndFeel setDemo = new SetLookAndFeel();
		if (args.length > 0)
			setDemo.SetInfo(args[0]);
		else
			setDemo.SetInfo("Welcome!");
	}
}
