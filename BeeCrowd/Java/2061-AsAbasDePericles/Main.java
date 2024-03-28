import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner (System.in);
        int N = teclado.nextInt();
        while (N < 0) {
            N = teclado.nextInt();
        }
        int M = teclado.nextInt();
        while (M > 500) {
            M = teclado.nextInt();
        }
        for (int i = 0; i <= M; i++) {
            String acao;
            acao = teclado.nextLine();
            if (acao.equals("fechou")) {
                N += 1;
            } else if (acao.equals("clicou")) {
                N -= 1;
            }
        }
        System.out.println(N);
        teclado.close();
    }
}