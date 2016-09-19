package allen.servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class HelloServlet extends HttpServlet {

	public void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		response.setContentType("text/html;charset=ISO-8859-1");
		PrintWriter out = response.getWriter();

		out.println("<html>");
		out.println("<head><title>Hello Servlet</title></head>");
		out.println("<body>");
		out.println("Hello<hr>");
		out.print(this.getServletName());
		out.println(", using the GET method<br>");
		out.println("<a href=\"index.jsp\">Return</a>");
		out.println("</body>");
		out.println("</html>");
		out.flush();
		out.close();
	}

	public void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		response.setContentType("text/html;charset=ISO-8859-1");
		PrintWriter out = response.getWriter();

		out.println("<html>");
		out.println("<head><title>Hello Servlet</title></head>");
		out.println("<body>");
		out.println("Hello<hr>");
		out.print(this.getServletName());
		out.println(", using the POST method<br>");
		out.println("<a href=\"index.jsp\">Return</a>");
		out.println("</body>");
		out.println("</html>");
		out.flush();
		out.close();
	}
}
