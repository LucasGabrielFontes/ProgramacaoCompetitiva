//Autor: Lucas Gabriel Fontes da Silva

import java.util.Scanner;

public class Main {

    public static void main (String[] args) {

        Scanner input = new Scanner(System.in);

        int passos = input.nextInt();
        while (passos < 0 || passos > 50) {
            passos = input.nextInt();
        }

        long quadradosA = 1;
        long quad4 = 1;
        long pontos = 4;

        for (int i = 0; i < passos; i++) {
            quad4 *= 2;
            pontos += 5 + (((quad4 - 2)*4) + (quadradosA - (1 + (quad4 - 2)))*3); 
            quadradosA *= 4;
        }

        System.out.println(pontos);

        input.close();

    }
    
}