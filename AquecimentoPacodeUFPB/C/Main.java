// Autor: Lucas Gabriel Fontes da Silva
// Propósito: dado o termo inicial, o termo final e um valor de acréscimo, determinar a progressão aritmética

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in); // Scanner

        int termoInicial = input.nextInt(); // Termo inicial da sequência
        int termoFinal = input.nextInt(); // Termo final da sequência
        int passo = input.nextInt(); // Valor de acréscimo da sequência

        while (termoInicial <= termoFinal) { // Enquanto o o termo inicial for menor ou igual ao termo final, imprime o termo inicial (que é, aqui, considerado o termo atual) e adiciona a ele o valor de acréscimo
            System.out.printf("%d ", termoInicial);
            termoInicial += passo;
        }

        System.out.println(); // Pula uma linha

        input.close(); // Fecha o Scanner

    }

}