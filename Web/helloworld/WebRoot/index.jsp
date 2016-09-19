<%@ page language="java" pageEncoding="ISO-8859-1"%>

<html>
	<head>
		<title>My first JSP page</title>
	</head>

	<body>
		Hello, JSP!<br>
		<%=new java.util.Date()%>
		<%for (int i = 1; i <= 6; i++) {%>
			<H<%=i%>>Hello</H<%=i%>>
		<%}%>
		<a href="index.html">My HTML Page</a>
	 </body>
</html>
