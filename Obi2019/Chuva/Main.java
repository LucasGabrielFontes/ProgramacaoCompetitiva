// OBS: esse código ainda está em desenvolvimento

import java.util.Scanner;

public class Main {

    public static void main (String[] args) {

        Scanner input = new Scanner(System.in);

        int N = input.nextInt();
        int M = input.nextInt();

        char matriz[][] = new char[N][M];

        for (int i = 0; i < matriz.length; i++) {

            for (int j = 0; j < matriz[0].length; j++) {
                if (input.hasNext()) {
                    matriz[i][j] = input.next().charAt(0);
                }
            }

        }

        for (int j = 0; j < matriz[0].length; j++) {

            for (int i = 0; i < matriz.length; i++) {

                if (matriz[i][j] != '#') {

                    if (i-1 >= 0 && matriz[i-1][j] == 'o') {

                        matriz[i][j] = 'o';

                    } 

                    if (j-1 >= 0 && i+1 < matriz.length && matriz[i][j-1] == 'o' && matriz[i+1][j-1] != '.') {

                        matriz[i][j] = 'o';

                    }

                }

            }

        }

        mostraMatriz(matriz);

        input.close();

    }

    public static void mostraMatriz (char matriz[][]) {

        for (int i = 0; i < matriz.length; i++) {

            for (int j = 0; j < matriz[0].length; j++) {

                System.out.printf("%c ", matriz[i][j]);

            }

            System.out.println();

        }

    }

}