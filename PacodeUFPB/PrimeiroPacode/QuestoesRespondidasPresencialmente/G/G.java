import java.util.Scanner;

public class G {
    public static void main (String args[]) {

        Scanner scan = new Scanner(System.in);

        int m = scan.nextInt();

        int n = scan.nextInt();

        int t = scan.nextInt();

        int resultado = (m * n + t) / (n + 1);

        System.out.println(resultado);

        scan.close();

    }
}
