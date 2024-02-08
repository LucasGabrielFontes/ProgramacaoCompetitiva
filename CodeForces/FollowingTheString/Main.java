import java.util.Scanner;

public class Main {

    public static void main (String[] args) {

        Scanner teclado = new Scanner(System.in);

        int t = teclado.nextInt();

        for (int i = 0; i < t; i++) {

            int n = teclado.nextInt();

            int letraAtual = 97;
            int numeros[] = new int[n];
            int vezesRepetidas[] = new int[n];
            char string[] = new char[n];

            for (int aux = 0; aux < n; aux++) {

                numeros[aux] = teclado.nextInt();

                if (numeros[aux] == 0) {
                    string[aux] = (char) letraAtual; // Faço a conversão de um número em seu caractere correspondente na tabela ascii.
                    vezesRepetidas[aux] = 0;
                    letraAtual++;
                } else {
                    for (int cont = 0; cont < aux; cont++) {
                        if (vezesRepetidas[cont] + 1 == numeros[aux]) {
                            string[aux] = string[cont];
                            vezesRepetidas[cont]++; // O problema tá aqui, possivelmente. Não estou atualizando as vezesRepetidas de todos os índices que contém a mesma letra.
                            vezesRepetidas[aux] = vezesRepetidas[cont] + 1;
                            cont = aux;
                        }
                    }
                }

            }

            String resp = new String(string); // Transformo um vetor de caracteres em uma String.

            System.out.println(resp);

        }

        teclado.close();

    }

}