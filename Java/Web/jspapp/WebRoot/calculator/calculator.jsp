<%@ page language="java" pageEncoding="ISO-8859-1"%>

<jsp:useBean id="calculator" scope="request"
	class="allen.bean.Calculator">
	<jsp:setProperty name="calculator" property="*" />
</jsp:useBean>

<html>
	<head>
		<title>Calculator</title>
	</head>

	<body>
		<h2>
			Result:
		</h2>
		<%
			try {
				if (calculator.getOperand1() != null) {
					calculator.calculate();
					out.println(calculator.getOperand1()
							+ calculator.getOperator()
							+ calculator.getOperand2() + "="
							+ calculator.getResult());
				}
			} catch (Exception e) {
				out.println("Cannot do this.");
			}
		%>
		<hr size="4" color="#003300">
		<form action="calculator.jsp" method=get>
			<div align="center">
			</div>
			<table width="75%" border="1" bordercolor="#003300">
				<tr bgcolor="#999999">
					<td colspan="2" align="center">
						Calculator
					</td>
				</tr>
				<tr>
					<td>
						Operand 1
					</td>
					<td>
						<input type=text name="operand1">
					</td>
				</tr>
				<tr>
					<td>
						Operator
					</td>
					<td>
						<select name="operator">
							<option value="+">
								+
							</option>
							<option value="-">
								-
							</option>
							<option value="*">
								*
							</option>
							<option value="/">
								/
							</option>
						</select>
					</td>
				</tr>
				<tr>
					<td>
						Operand 2
					</td>
					<td>
						<input type=text name="operand2">
					</td>
				</tr>
				<tr>
					<td colspan="2" align="center" bgcolor="#CCCCCC">
						<input type="submit" value="Calculate">
					</td>
				</tr>
			</table>
		</form>
		<a href="../index.jsp">Return</a>
	</body>
</html>
