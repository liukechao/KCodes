<%@ page language="java" import="java.sql.*" pageEncoding="ISO-8859-1"%>

<html>
	<head>
		<title>MySQL</title>
	</head>

	<body>
		<h1>
			MySQL
		</h1>
		<hr>
		<table border=1>
			<tr>
				<td>
					id
				</td>
				<td>
					username
				</td>
				<td>
					password
				</td>
			</tr>
			<%
				try {
					Class.forName("com.mysql.jdbc.Driver").newInstance();
					Connection connection = java.sql.DriverManager.getConnection(
							"jdbc:mysql://localhost/MySQL", "AUTEK", "FLYVIDEO");
					Statement statement = connection.createStatement();
					statement.execute("delete from local.lkc_user;");
					PreparedStatement prepared = connection
							.prepareStatement("insert local.lkc_user values(?,?,?)");
					for (int i = 1; i <= 10; i++) {
						prepared.setInt(1, i);
						prepared.setString(2, "Allen" + i);
						prepared.setString(3, "******");
						prepared.execute();
					}
					prepared.close();
					ResultSet result = statement
							.executeQuery("select * from local.lkc_user;");
					while (result.next()) {
						out.println("<tr>");
						out.println("<td>" + result.getString("id") + "</td>");
						out
								.println("<td>" + result.getString("username")
										+ "</td>");
						out
								.println("<td>" + result.getString("password")
										+ "</td>");
						out.println("</tr>");
					}
					result.close();
					statement.close();
					connection.close();
				} catch (Exception e) {
					e.printStackTrace();
					out.println(e.getMessage());
				}
			%>
		</table>
		<a href="sybase.jsp">Sybase</a>
		<a href="../index.jsp">Return</a>
	</body>
</html>
