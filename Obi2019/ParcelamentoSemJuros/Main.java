import java.util.Scanner;

public class Main {
    
    public static void main (String[] args) {

        Scanner input = new Scanner(System.in);

        int valor = input.nextInt();
        int parcelas = input.nextInt();

        if (valor%parcelas == 0) {
            int parcela = valor/parcelas;

            for (int i = 0; i < parcelas; i++) {
                System.out.println(parcela);
            }
        } else {
            int parcela = valor/parcelas;
            int resto = valor%parcelas;

            for (int i = 0; i < parcelas; i++) {
                if (resto > 0) { 
                    System.out.println(parcela + 1);
                    resto--;
                } else {
                    System.out.println(parcela);
                }
                
            }
        }

        input.close();

    }

}