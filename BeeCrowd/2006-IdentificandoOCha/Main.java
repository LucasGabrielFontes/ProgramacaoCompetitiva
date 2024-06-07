import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner(System.in);
        int T = teclado.nextInt();
        int A, B, C , D, E, acertos = 0;
        A = teclado.nextInt();
        B = teclado.nextInt();
        C = teclado.nextInt();
        D = teclado.nextInt();
        E = teclado.nextInt();
        if (A == T) {
            acertos += 1;
        } 
        if (B == T) {
            acertos += 1;
        } 
        if (C == T) {
            acertos += 1;
        } 
        if (D == T) {
            acertos += 1;
        } 
        if (E == T) {
            acertos += 1;
        } 
        System.out.println(acertos);
        teclado.close();
    } 
}