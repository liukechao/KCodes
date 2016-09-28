<%@ page language="java" pageEncoding="ISO-8859-1"%>

<html>
	<head>
		<title>Login</title>
	</head>

	<body>
		<%!String msg;%>
		<form method=get action="check_login.jsp">
			User:
			<input type="text" name="user">
			Password:
			<input type="text" name="password">
			<input type="submit" value="Login">
		</form>
		<%
			msg = request.getParameter("msg");
			if (msg != null)
				out.print("<font color=\"#ff0000\">" + msg + "</font><br>");
		%>
		<a href="../index.jsp">Return</a>
	</body>
</html>
