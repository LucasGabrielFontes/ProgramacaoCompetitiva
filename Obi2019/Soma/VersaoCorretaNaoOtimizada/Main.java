import java.util.Scanner;

public class Main {

	public static void main (String[] args) {
	
		Scanner teclado = new Scanner(System.in);
	
		int quadrados = teclado.nextInt();
		int K = teclado.nextInt();
		int valoresQuadrados[] = new int[quadrados];
		
		
		for (int i = 0; i < valoresQuadrados.length; i++) {
			valoresQuadrados[i] = teclado.nextInt();
		}
		
		teclado.close();
		
		int retangulos = 0;
		
		for (int i = 0; i < valoresQuadrados.length; i++) {
			int soma = valoresQuadrados[i];
			
			if (soma == K) {
				retangulos += 1;
			} 
			
			int j = i + 1;
			
			while (soma <= K && j < valoresQuadrados.length) {
				
				soma += valoresQuadrados[j];
				
				if (soma == K) {
					retangulos += 1;
				}
				
				j += 1;
				
			}
		}
		
		System.out.printf("%d\n", retangulos);
	
	}

}