import java.util.Scanner;

public class Main {

    public static void main (String[] args) {

        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        int i = input.nextInt();
        int f = input.nextInt();

        int vetor[] = new int[n];

        for (int a = 0; a < vetor.length; a++) {
            vetor[a] = input.nextInt();
        }

        int pares = 0;

        for (int a = 0; a < vetor.length; a++) {
            for (int b = a+1; b < vetor.length; b++) {
                if ((vetor[a] + vetor[b] >= i) && (vetor[a] + vetor[b] <= f)) {
                    pares++;
                }
            }
        }

        System.out.println(pares);

        input.close();

    }

}