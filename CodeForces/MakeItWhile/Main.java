// Autor: Lucas Gabriel Fontes da Silva

import java.util.Scanner;

public class Main {

	public static void main (String[] args) {

		Scanner teclado = new Scanner(System.in);

		int t = teclado.nextInt();
		teclado.nextLine();
		while (t < 0 || t > 10000) {
			t = teclado.nextInt();
			teclado.nextLine();
		}
		
		for (int i = 0; i < t; i++) {
			
			int n = teclado.nextInt();
			teclado.nextLine();
			while (n < 0 || n > 10) {
				n = teclado.nextInt();
				teclado.nextLine();
			}
			
			String frase = teclado.nextLine();
			
			int indice1 = -1;
			int indice2 = 0;
			
			for (int cont = 0; cont < frase.length(); cont++) {
				
				if (Character.toString(frase.charAt(cont)).equals("B")) {
					if (indice1 == -1) {
						indice1 = cont;
					} else {
						indice2 = cont;
					}
				}
				
			}
			
			if (indice2 == 0) {
				System.out.printf("1\n");
			} else {
				System.out.printf("%d\n", indice2 - indice1 + 1);
			}
			
		}

	}	

}