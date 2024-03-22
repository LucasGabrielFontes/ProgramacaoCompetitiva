// Autor: Lucas Gabriel Fontes da Silva
// Propósito: dada uma lista de n números, determinar a quantidade de números distintos nela

import java.util.Scanner;
import java.util.ArrayList;

public class Main {

    public static void main (String[] args) {

        Scanner input = new Scanner(System.in); // Scanner

        int n = input.nextInt(); // Quantidade de números

        int numeros[] = new int[n]; // Vetor de tamanho n que guardará todos os números

        for (int i = 0; i < numeros.length; i++) { // Preenche todo o vetor
            numeros[i] = input.nextInt();
        }

        ArrayList<Integer> diferentes = new ArrayList<Integer>(); // ArrayList que guardará todos os números diferentes
        diferentes.add(numeros[0]); // O primeiro número do vetor já é guardado no ArrayList logo no início

        for (int i = 1; i < numeros.length; i++) { // Percorre todo o vetor dos números, a partir do índice 1, para verificar os elementos diferentes

            if (!diferentes.contains(numeros[i])) { // Se o valor não estiver no ArrayList de números diferentes, ele é adicionado a ele
                diferentes.add(numeros[i]);
            }

        }

        System.out.println(diferentes.size()); // Imprime o tamanho do ArrayList, que possui todos os números diferentes da lista dada no início

        input.close(); // Fecha o Scanner

    }

}