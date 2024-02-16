import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner (System.in);
        int N = teclado.nextInt();
        while ((N < 3) || (N > 500)) {
            N = teclado.nextInt();
        }
        int V[] = new int[N], teste = 0, total = 0;
        for (int i = 0; i < N; i++) {
            V[i] = teclado.nextInt();
            while ((V[i] != 1) && (V[i] != 2)) {
                V[i] = teclado.nextInt();
            }
            if (i == 0) {
                teste = V[i];
                total += 1;
            } else if (V[i] != teste) {
                total += 1;
                teste = V[i];
            }
        }
        System.out.println(total);
        teclado.close();
    }
}