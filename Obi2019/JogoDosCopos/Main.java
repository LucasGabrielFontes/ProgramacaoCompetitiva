import java.util.Scanner;

public class Main {

    public static void main (String[] args) {

        Scanner input = new Scanner(System.in);

        int movimentos = input.nextInt();
        input.nextLine();

        String posAtual = input.nextLine();

        for (int i = 0; i < movimentos; i++) {

            int tipoMov = input.nextInt();

            switch (tipoMov) {

                case 1:
                    if (posAtual.equals("A")) {
                        posAtual = "B";
                    } else if (posAtual.equals("B")) {
                        posAtual = "A";
                    }
                break;

                case 2:
                    if (posAtual.equals("B")) {
                        posAtual = "C";
                    } else if (posAtual.equals("C")) {
                        posAtual = "B";
                    }
                break;

                case 3:
                    if (posAtual.equals("A")) {
                        posAtual = "C";
                    } else if (posAtual.equals("C")) {
                        posAtual = "A";
                    }
                break;

            }

        }

        System.out.printf("%s\n", posAtual);

        input.close();

    }

}