import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner (System.in);
        int N = teclado.nextInt();
        while ((N < 0) && (N > 100)) {
            N = teclado.nextInt();
        }
        char conceito = converteParaConceito(N);
        System.out.println(conceito);
        teclado.close();
    }
    
    public static char converteParaConceito (int num) {
        if (num == 0) {
            return 'E';
        } else if (num < 36) {
            return 'D';
        } else if (num < 61) {
            return 'C';
        } else if (num < 86) {
            return 'B';
        } else {
            return 'A';
        }
    }
}