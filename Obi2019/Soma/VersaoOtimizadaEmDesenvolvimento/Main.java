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
		int soma = 0;
		int inicio = 0;
		
		for (int i = 0; i < valoresQuadrados.length; i++) {
			soma += valoresQuadrados[i];
			
			while (soma > K && inicio <= i) {
				soma -= valoresQuadrados[inicio];
				inicio++;	
			}
			
			if (soma == K) {
				retangulos += 1;
			} 
	
		}
		
		System.out.printf("%d\n", retangulos);
	
	}

}