import java.awt.*;
import java.awt.event.*;

public class Calculator extends Frame implements ActionListener {

	private static final long serialVersionUID = 1L;

	private TextField Display = new TextField("0");

	private Button Backspace = new Button("Backspace");
	private Button CE = new Button("CE");
	private Button C = new Button("C");

	private Button add = new Button("+");
	private Button minus = new Button("-");
	private Button multiply = new Button("*");
	private Button devide = new Button("/");
	private Button sqareRoot = new Button("sqrt");
	private Button sin = new Button("sin");
	private Button reciprocal = new Button("1/x");
	private Button equal = new Button("=");
	private Button dot = new Button(".");
	private Button posORneg = new Button("+/-");

	private Button Number[] = new Button[10];

	private double arg1 = 0, arg2 = 0;
	private double result = 0;
	private String operator = new String("");
	// private boolean isFraction = false;
	private boolean isPositive = true;
	// private boolean isSecondArg = false;
	private boolean hasOperator = false;

	public Calculator() {
		super("¼ÆËãÆ÷");

		Panel dispPanel = new Panel();
		Panel ctrlPanel = new Panel();
		Panel calPanel = new Panel();

		dispPanel.setLayout(new GridLayout(1, 1));
		dispPanel.add(Display);

		ctrlPanel.setLayout(new GridLayout(1, 3));
		ctrlPanel.add(Backspace);
		ctrlPanel.add(CE);
		ctrlPanel.add(C);

		for (int i = 0; i < Number.length; i++)
			Number[i] = new Button((Integer.valueOf(i)).toString());

		calPanel.setLayout(new GridLayout(4, 5));
		calPanel.add(Number[7]);
		calPanel.add(Number[8]);
		calPanel.add(Number[9]);
		calPanel.add(devide);
		calPanel.add(sqareRoot);
		calPanel.add(Number[4]);
		calPanel.add(Number[5]);
		calPanel.add(Number[6]);
		calPanel.add(multiply);
		calPanel.add(sin);
		calPanel.add(Number[1]);
		calPanel.add(Number[2]);
		calPanel.add(Number[3]);
		calPanel.add(minus);
		calPanel.add(reciprocal);
		calPanel.add(Number[0]);
		calPanel.add(posORneg);
		calPanel.add(dot);
		calPanel.add(add);
		calPanel.add(equal);

		this.setLayout(new BorderLayout());
		this.add("North", dispPanel);
		this.add("Center", ctrlPanel);
		this.add("South", calPanel);
		this.pack();
		this.setLocation(300, 300);
		this.setResizable(false);
		this.setVisible(true);

		Backspace.addActionListener(this);
		CE.addActionListener(this);
		C.addActionListener(this);

		add.addActionListener(this);
		minus.addActionListener(this);
		multiply.addActionListener(this);
		devide.addActionListener(this);
		sqareRoot.addActionListener(this);
		sin.addActionListener(this);
		reciprocal.addActionListener(this);
		equal.addActionListener(this);
		dot.addActionListener(this);
		posORneg.addActionListener(this);

		for (int i = 0; i < Number.length; i++)
			Number[i].addActionListener(this);

		this.addWindowListener(new WindowAdapter() {
			public void windowClosing(WindowEvent we) {
				System.exit(0);
			}
		});

	}

	public void actionPerformed(ActionEvent ae) {
		if (!hasOperator)
			arg1 = Double.valueOf(Display.getText()).doubleValue();
		else
			arg2 = Double.valueOf(Display.getText()).doubleValue();

		for (int i = 0; i < Number.length; i++)
			if (ae.getSource() == Number[i]) {
				if (hasOperator)
					Display.setText("0");
				if (Display.getText().equals(new String("0")))
					Display.setText(Integer.valueOf(i).toString());
				else
					Display.setText(Display.getText()
							+ Integer.valueOf(i).toString());
			}

		if (ae.getSource() == dot) {
			if (Display.getText().indexOf(".") < 0)
				Display.setText(Display.getText() + ".");
		} else if (ae.getSource() == posORneg) {
			if (!Display.getText().equals(new String("0"))) {
				if (!isPositive)
					Display.setText(Display.getText().substring(1));
				else
					Display.setText("-" + Display.getText());
				isPositive = !isPositive;
			}
		} else if (ae.getSource() == Backspace) {
			if (Display.getText().length() > 1)
				Display.setText(Display.getText().substring(0,
						Display.getText().length() - 1));
			else
				Display.setText("0");
		} else if (ae.getSource() == CE)
			Display.setText("0");
		else if (ae.getSource() == C) {
			arg1 = 0;
			operator = "";
			Display.setText("0");
		} else if (ae.getSource() == add)
			doCalculation("+");
		else if (ae.getSource() == minus)
			doCalculation("-");
		else if (ae.getSource() == multiply)
			doCalculation("*");
		else if (ae.getSource() == devide)
			doCalculation("/");
		else if (ae.getSource() == sqareRoot) {
			result = Math.sqrt(arg1);
			Display.setText(Double.valueOf(result).toString());
		} else if (ae.getSource() == sin) {
			result = Math.sin(arg1);
			Display.setText(Double.valueOf(result).toString());
		} else if (ae.getSource() == reciprocal) {
			result = 1 / arg1;
			Display.setText(Double.valueOf(result).toString());
		} else if (ae.getSource() == equal) {
			if (operator.equals("+"))
				result = arg1 + arg2;
			else if (operator.equals("-"))
				result = arg1 - arg2;
			else if (operator.equals("*"))
				result = arg1 * arg2;
			else if (operator.equals("/"))
				result = arg1 / arg2;
			Display.setText(Double.valueOf(result).toString());
		}

	}

	public void doCalculation(String op) {
		operator = op;
		hasOperator = true;
	}

	public static void main(String args[]) {
		new Calculator();
	}

}