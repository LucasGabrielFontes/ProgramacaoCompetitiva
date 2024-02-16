import java.util.Scanner;

public class Main {

	public static void main (String[] args) {
	
		Scanner teclado = new Scanner(System.in);
		
		int M = teclado.nextInt();
		int A = teclado.nextInt();
		int B = teclado.nextInt();
		int C = M - (A + B);
		
		teclado.close();
		
		System.out.printf("%d\n", retornaMaior(A, B, C));
	
	}
	
	public static int retornaMaior (int a, int b, int c) {
		if (a >= b && a >= c) {
			return a;
		} else if (b >= a && b >= c)  {
			return b;
		} else {
			return c;
		}
	}

}