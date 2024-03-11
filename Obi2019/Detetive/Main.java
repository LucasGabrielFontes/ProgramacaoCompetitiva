// Em construção...

import java.util.Scanner;
import java.util.ArrayList;

public class Main {

    public static void main (String[] args) {

        Scanner input = new Scanner(System.in);

        ArrayList<Integer> causas = new ArrayList<Integer>(); // Armazena as causas das implicações
        ArrayList<Integer> consequencias = new ArrayList<Integer>(); // Armazena as consequências das implicações
        ArrayList<Integer> verdadeiros = new ArrayList<Integer>(); // Armazena os índices dos eventos verdadeiros (iniciais e descobertos ao longo da execução)

        int E = input.nextInt(); // quantidade de eventos
        int I = input.nextInt(); // quantidade de implicações
        int V = input.nextInt(); // quantidade de eventos verdadeiros iniciais

        for (int i = 0; i < I; i++) { // lê o ArrayList de implicações
            causas.add(input.nextInt());
            consequencias.add(input.nextInt());
        }

        for (int i = 0; i < V; i++) { // lê o ArrayList de eventos verdadeiros iniciais
            verdadeiros.add(input.nextInt());
        }

        for (int i = 0; i < verdadeiros.size(); i++) {
            if (causas.contains(verdadeiros.get(i))) {
                verdadeiros.add(consequencias.get(causas.indexOf(verdadeiros.get(i))));
            }
        }

        // Mostra o resultado
        System.out.printf("Resultado: ");
        for (int i = 0; i < verdadeiros.size(); i++) {
            System.out.printf("%d ", verdadeiros.get(i));
        }

    }

}