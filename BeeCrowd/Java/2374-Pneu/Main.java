import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner (System.in);
        int N = teclado.nextInt();
        while ((N < 1) || (N > 40)) {
            N = teclado.nextInt();
        }
        int M = teclado.nextInt();
        while ((M < 1) || (M > 40)) {
            M = teclado.nextInt();
        }
        System.out.println(N - M);
        teclado.close();
    }
}