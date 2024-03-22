import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);

        String sequencia = input.nextLine();

        int maiorSequencia = 0;

        char letraAtual = sequencia.charAt(0);

        for (int i = 1; i < sequencia.length(); i++) {

            int contador = 1;

            while (i < sequencia.length() && sequencia.charAt(i) == (letraAtual)) {
                
                contador++;
                letraAtual = sequencia.charAt(i);
                i++;

            }

            if (i < sequencia.length()) {

                letraAtual = sequencia.charAt(i);

            }

            if (contador > maiorSequencia) {

                maiorSequencia = contador;

            }

        }

        System.out.println(maiorSequencia);

        input.close();

    }

}