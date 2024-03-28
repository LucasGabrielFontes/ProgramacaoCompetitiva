import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner (System.in);
        int N = teclado.nextInt(), D = 0;
        while ((N < 1) && (N > 1000)) {
            N = teclado.nextInt();
        }
        for (int i = 0; i < N; i++) {
            int T = teclado.nextInt();
            while ((T < 1) && (T > 100)) {
                T = teclado.nextInt();
            }
            int V = teclado.nextInt();
            while ((V < 0) && (V > 120)) {
                V = teclado.nextInt();
            }
            D += V*T;
        }
        System.out.println(D);
        teclado.close();
    }
}