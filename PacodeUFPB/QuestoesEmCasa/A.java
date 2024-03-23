// Autores: Lucas Gabriel, Deivily Breno e Antônio Augusto

import java.util.Scanner;

public class A {

    public static void main(String[] args) {
     
        // Cria um objeto Scanner para ler a entrada do usuário
        Scanner input = new Scanner(System.in);

        // Lê o número de sapos e o valor de 'ent' do usuário
        int sapos = input.nextInt();
        int ent = input.nextInt();

        // Cria um vetor para armazenar os valores dos sapos
        int vetor[] = new int[sapos];

        // Preenche o vetor com os valores dos sapos
        for (int i = 0; i < sapos; i++) {
            vetor[i] = input.nextInt();
        }

        // Inicializa o contador de subsequências cuja soma é igual a 'ent'
        int contador = 0;

        // Inicializa os ponteiros de início e fim da janela deslizante e a soma dos elementos na janela
        int start = 0;
        int end = 0;
        int soma = 0;

        // Enquanto o ponteiro de início não chegar ao fim do vetor
        while (start < sapos) {

            // Enquanto o ponteiro de fim não chegar ao fim do vetor e a soma for menor que 'ent'
            while (end < sapos && soma < ent) {

                // Adiciona o valor do sapo atual à soma e move o ponteiro de fim para a frente
                soma += vetor[end];
                end++;
            }

            // Se a soma for igual a 'ent', incrementa o contador
            if (soma == ent) {
                contador++;
            }

            // Subtrai o valor do sapo atual da soma e move o ponteiro de início para a frente
            soma -= vetor[start];
            start++;
        }

        // Imprime o contador
        System.out.println(contador);

        // Fecha o objeto Scanner
        input.close();

    }

}