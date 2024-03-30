// OBS: o código resolve o problema, mas não está otimizado o suficiente para ser aceito juiz do BeeCrowd.

import java.util.Scanner;

public class Main {

    public static void main (String[] args) {

        Scanner scanner = new Scanner(System.in);

        int quadrados = scanner.nextInt();
        int[] valores = new int[quadrados];
        int K = scanner.nextInt();

        for (int i = 0; i < valores.length; i++) {
            valores[i] = scanner.nextInt();
        }

        int soma = 0;
        int somas = 0;
        int inicio = 0;

        while (inicio < valores.length) {
            
            soma += valores[inicio];

            if (soma == K) {
                somas += 1;
            }

            int fim = inicio + 1;

            while (fim < valores.length && soma <= K) {

                soma += valores[fim];

                if (soma == K) {
                    somas += 1;
                }

                fim++;

            }

            soma = 0;
            inicio++;

        }

        System.out.println(somas);

        scanner.close();

    }

}