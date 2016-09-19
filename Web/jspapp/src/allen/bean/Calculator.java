package allen.bean;

public class Calculator {
	private String operand1;
	private String operand2;
	private String operator;
	private int result;

	public String getOperand1() {
		return operand1;
	}

	public void setOperand1(String operand1) {
		this.operand1 = operand1;
	}

	public String getOperand2() {
		return operand2;
	}

	public void setOperand2(String operand2) {
		this.operand2 = operand2;
	}

	public String getOperator() {
		return operator;
	}

	public void setOperator(String operator) {
		this.operator = operator;
	}

	public int getResult() {
		return result;
	}

	public void calculate() {
		int a = Integer.parseInt(operand1);
		int b = Integer.parseInt(operand2);

		if (operator.equals("+"))
			result = a + b;
		else if (operator.equals("-"))
			result = a - b;
		else if (operator.equals("*"))
			result = a * b;
		else if (operator.equals("/"))
			result = a / b;
	}
}