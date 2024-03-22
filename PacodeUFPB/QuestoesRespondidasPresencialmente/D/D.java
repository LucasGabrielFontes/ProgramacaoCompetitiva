import java.util.Scanner;

public class D {
    public static void main (String args[]) {

        Scanner scan = new Scanner(System.in);

        long n = scan.nextInt();

        System.out.printf("%d ", n);

        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
                if (n == 1) {
                    System.out.printf("%d\n", n);
                } else {
                    System.out.printf("%d ", n);
                }
            } else {
                n = n * 3 + 1;
                if (n == 1) {
                    System.out.printf("%d\n", n);
                } else {
                    System.out.printf("%d ", n);
                }
            }
        }

        scan.close();
    }
}