import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner (System.in);
        int n = teclado.nextInt();      
        System.out.println(CalculaFatorial(n));
        teclado.close();
    }  
    
    public static int CalculaFatorial (int numero) {
        int f = 1;
        for (int i = numero; i >= 1; i--) {
            f *= i;
        }
        return f;
    }
}