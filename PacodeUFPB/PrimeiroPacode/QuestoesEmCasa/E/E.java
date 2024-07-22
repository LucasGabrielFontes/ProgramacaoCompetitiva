// Autores: Lucas Gabriel, Deivily Breno e Antônio Augusto

import java.util.Scanner;

public class E {

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int[] vetor = new int[n];
        int total = 0;

        for (int i = 0; i < n; i++) {
            vetor[i] = scanner.nextInt();
            total += vetor[i];
        }

        int maneiras = 0;
        int soma = 0;
        
        for (int i = 0; i < n - 1; i++) { // n-1 para evitar dividir a tira em uma peça vazia
            soma += vetor[i];
            if (soma * 2 == total) {
                maneiras++;
            }
        }

        System.out.println(maneiras);

        scanner.close();
    }

}