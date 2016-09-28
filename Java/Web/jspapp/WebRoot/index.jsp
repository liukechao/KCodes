<%@ page language="java" import="java.util.Date"
	pageEncoding="ISO-8859-1"%>

<html>
	<head>
		<title>My jspapp starting page</title>
	</head>

	<body>
		<h1>
			Hello,
			<%=request.getRemoteAddr()%>
		</h1>
		<%
			System.out.println(request.getRemoteAddr() + ", " + new Date());
		%>
		<hr width="100%" size="2">
		<a href="login/login.jsp">Login</a>
		<br>
		<a href="applet/applet.jsp">Applet</a>
		<br>
		<a href="calculator/calculator.jsp">Calculator</a>
		<br>
		<a href="null.htm">Servlet</a>
		<br>
		<a href="database/mysql.jsp">Database</a>
	</body>
</html>
