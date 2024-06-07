import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner(System.in);
        int pCuru = teclado.nextInt();
        int pBoi = teclado.nextInt();
        int pBoto = teclado.nextInt();
        int pMapi = teclado.nextInt();
        int pLara = teclado.nextInt();
        int pChica = 225;
        int total = calculaTotal(pCuru, pBoi, pBoto, pMapi, pLara, pChica);
        System.out.println(total);
        teclado.close();
    }
    
    public static int calculaTotal (int a, int b, int c, int d, int e, int f) {
        return (a*300 + b*1500 + c*600 + d*1000 + e*150 + f*1);
    }
}