import java.sql.*;

public class SQLConnector {
	private Connection connection;

	public void connect(String name) throws Exception {
		Class.forName("com.mysql.jdbc.Driver").newInstance();
		connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/"
				+ name, "root", "liukechao");

	}

	public void executeQuery(String query) throws Exception {
		Statement statement;
		ResultSet result;

		statement = connection.createStatement();
		result = statement.executeQuery(query);
	}

	public void execute(String command) throws Exception {
		Statement statement;

		statement = connection.createStatement();
		statement.execute(command);
	}

	public void close() throws Exception {
		connection.close();
	}

	public static void main(String[] args) {
		SQLConnector connector = new SQLConnector();
		try {
			connector.connect("MyDB");
			connector.execute("insert into info(ID,Name,Sex,Birthday) values"
					+ "('0000000003','John','Male','1985-09-25')");
			connector.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
