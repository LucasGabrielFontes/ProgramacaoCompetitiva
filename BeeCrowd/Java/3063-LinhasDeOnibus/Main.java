import java.util.Scanner;
import java.util.ArrayList;

public class Main {

    public static void main (String[] args) {

        Scanner scanner = new Scanner(System.in);

        int terminais = scanner.nextInt();
        int linhasQuant = scanner.nextInt();
        int terminalOrigem = scanner.nextInt();
        int terminalDestino = scanner.nextInt();

        ArrayList<linha> linhas = new ArrayList<>(linhasQuant);

        for (int i = 0; i < linhasQuant; i++) {

            linhas.add(new linha());
            int quantTerminaisLinha = scanner.nextInt();

            for (int j = 0; j < quantTerminaisLinha; j++) {

                linhas.get(i).terminais.add(scanner.nextInt());                

            }

        }

        int onibus = 1;

        for (int i = 0; i < linhasQuant; i++) {

            if (linhas.get(i).terminais.contains(terminalOrigem)) {



            } 

        }

        System.out.println(onibus);

        scanner.close();        

    }

    public static class linha {

        ArrayList<Integer> terminais = new ArrayList<>();

    }

}