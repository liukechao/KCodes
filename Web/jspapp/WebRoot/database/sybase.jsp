<%@ page language="java" import="java.sql.*" pageEncoding="UTF-8"%>

<html>
	<head>
		<title>MySQL</title>
	</head>

	<body>
		<h1>Sybase</h1><hr>
		<table border=1>
			<tr>
				<td>
					acctno
				</td>
				<td>
					acctst
				</td>
				<td>
					onlnbl
				</td>
			</tr>
			<%
				String driver = "com.sybase.jdbc2.jdbc.SybDriver";
				String url = "jdbc:sybase:Tds:192.168.100.1:5100/egb_csmain";
				String user = "sa";
				String pass = "hfsa1234";
				try {
					Class.forName(driver).newInstance();
					Connection connection = java.sql.DriverManager.getConnection(
							url, user, pass);
					Statement statement = connection.createStatement();
					ResultSet result = statement
							.executeQuery("select TOP 10 acctno, acctst, onlnbl from CBMAIN..kna_acct where custno = '1535012622636'");
					while (result.next()) {
						out.println("<tr>");
						out.println("<td>" + result.getString("acctno") + "</td>");
						out.println("<td>" + result.getString("acctst") + "</td>");
						out.println("<td>" + result.getString("onlnbl") + "</td>");
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
		<a href="mysql.jsp">MySQL</a>
		<a href="../index.jsp">Return</a>
	</body>
</html>
