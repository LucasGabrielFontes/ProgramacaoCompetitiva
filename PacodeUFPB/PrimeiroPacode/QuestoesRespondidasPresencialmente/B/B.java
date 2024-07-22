import java.util.Scanner;

public class B {
    public static void main(String[] args) {
        int n1;
        int n2;

        int contador = 0;

        Scanner scan = new Scanner(System.in);

        n1 = scan.nextInt();
        n2 = scan.nextInt();

        for (int i = 0; i < n2; i++) {
            contador += scan.nextInt();

        }

        if (contador == n1) {
            System.out.println("Tudo certo!");
        } else {
            System.out.println("Deu ruim!");
        }

        scan.close();

    }
}