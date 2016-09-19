<%@ page language="java" pageEncoding="ISO-8859-1"%>

<html>
	<body>
		<%
			String user = request.getParameter("user");
			String password = request.getParameter("password");
			if (user.startsWith("a") && password.endsWith("n")) {
		%>
		<jsp:forward page="login_success.jsp">
			<jsp:param name="user" value="<%=user%>" />
			<jsp:param name="password" value="<%=password%>" />
		</jsp:forward>
		<%
			} else {
		%>
		<jsp:forward page="login.jsp">
			<jsp:param name="msg" value="Login failed, please retry." />
		</jsp:forward>
		<%
			}
		%>
		<br>
	</body>
</html>