<%@ page language="java" pageEncoding="ISO-8859-1"%>

<jsp:useBean id="userpass" scope="page" class="allen.bean.User">
	<jsp:setProperty name="userpass" property="*" />
</jsp:useBean>

<html>
	<head>
		<title>Login Succeeded</title>
	</head>
	<body>
		Hi,
		<%=request.getParameter("user")%>!
		<br>
		<hr>
		User:
		<%=userpass.getUser()%><br>
		Password:
		<%=userpass.getPassword()%><br>
		<hr>
		User:
		<jsp:getProperty name="userpass" property="user" /><br>
		Password:
		<jsp:getProperty name="userpass" property="password" /><br>
		<hr>
	</body>
</html>