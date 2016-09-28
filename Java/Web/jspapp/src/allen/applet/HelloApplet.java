package allen.applet;

import java.applet.Applet;
import java.awt.*;

public class HelloApplet extends Applet {
	@Override
	public void paint(Graphics g) {
		g.drawString("Hello, Applet!", 20, 100);
		g.drawRect(10, 50, 100, 100);
	}
}