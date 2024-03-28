import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner (System.in);
        int t = teclado.nextInt();
        System.out.println(4*t);
        teclado.close();
    }
}