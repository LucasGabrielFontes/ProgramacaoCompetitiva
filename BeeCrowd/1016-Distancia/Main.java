import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner (System.in);
        int D = teclado.nextInt();
        System.out.printf("%.0f minutos\n",calculaTempo(D));
        teclado.close();
    }
    
    public static float calculaTempo (int dist) {
        return ((float)dist/30)*60; 
    }
}
