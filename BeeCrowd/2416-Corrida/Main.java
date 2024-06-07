import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner (System.in);
        int C = teclado.nextInt();
        while ((C < 1) && (C > 100000000)) {
            C = teclado.nextInt();
        }
        int N = teclado.nextInt();
        while ((N < 1) && (N > 100)) {
            N = teclado.nextInt();
        }
        int F = calculaFinal(C, N);
        System.out.println(F);
        teclado.close();
    }
    
    public static int calculaFinal (int A, int B) {
        int C = A;
        while (C >= B) {
            C -= B;
        }
        return C;
    }
}