package allen.control;

import java.util.Random;

public class ForEach {
	public static void main(String[] args) {
		Random rand = new Random();
		int[] val = new int[5];
		
		for (int i = 0; i < 5; i++) {
			val[i] = rand.nextInt(100);
		}
		for (int x : val) {
			System.out.println(x);
		}

		for (char c : "For each character in a string".toCharArray()) {
			System.out.print(c + " ");
		}
	}
}