import java.util.Scanner;

public class Main {

	public static void main (String[] args) {
	
		Scanner teclado = new Scanner(System.in);
		
		int predios = teclado.nextInt();
		int andares[] = new int[predios];
		
		for (int i = 0; i < andares.length; i++) {
			andares[i] = teclado.nextInt();
		}
		
		teclado.close();
		
		int maiorD = andares[0] + 1 + andares[1];
		
		for (int i = 0; i < andares.length; i++) {
			for (int j = i+1; j < andares.length; j++) {
				
				if ((andares[i] + (j-i) + andares[j] + 1) > maiorD) {
					maiorD = andares[i] + (j-i) + andares[j];
				}
				
			}
		}
		
		System.out.printf("%d\n", maiorD);
	
	}

}