// Autor: Lucas Gabriel Fontes da Silva

import java.util.Scanner;

public class Main {

    public static void main (String[] args) {

        Scanner teclado = new Scanner(System.in);

        int t = teclado.nextInt(); // recebe a o número de testes

        for (int i = 0; i < t; i++) {

            int n = teclado.nextInt(); // recebe o tamanho da String

            int letraAtual = 97; // letra 'a' na tabela ascii
            int numeros[] = new int[n]; // armazenará a String (aqui, por enquanto, tratada como um vetor de int)
            char string[] = new char[n]; // armazenará a resposta final (palavra rastreada)

            for (int aux = 0; aux < n; aux++) { // lê todos os valores do vetor
                numeros[aux] = teclado.nextInt(); 
            }

            for (int aux = 0; aux < n; aux++) {

                if (numeros[aux]  == 0) { // se o valor é 0, significa que uma nova letra deve ser adicionada
                    string[aux] = (char) letraAtual;
                    letraAtual++; // incrementa 1 no valor da letra da tabela ascii

                    for (int aux2 = aux+1 ; aux2 < n; aux2++) { // percorre toda a string para frente, a fim de preencher as letras na sequência correta
                        if (numeros[aux2] == numeros[aux] + 1) {
                            string[aux2] = string[aux];
                            numeros[aux]++;
                            numeros[aux2] = -2; // atribue-se -2 para essa posição não interferir em outros testes
                        }
                    }

                    numeros[aux] = -2; // atribue-se -2 para essa posição não interferir em outros testes

                }

            }

            String resp = new String(string); // transformo o vetor de caracteres em uma String

            System.out.println(resp); // imprimo a resposta, finalmente. HAHA!

        }

        teclado.close();

    }

}