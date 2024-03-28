// Autor: Lucas Gabriel Fontes da Silva
// Descrição: Este programa calcula o peso total de grãos de trigo em quilogramas, dado o número de quadrados de um tabuleiro de xadrez: o primeiro possui um grão e a quantidade do próximo é o dobro do anterior. O peso 12 grãos é de 0,001kg.

import java.util.Scanner;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.math.RoundingMode;

public class Main {

    public static void main (String[] args) {

        Scanner input = new Scanner(System.in);

        long testes = input.nextInt();

        for (long i = 0; i < testes; i++) {

            BigInteger totGraos = BigInteger.ONE; // .ONE é um método estático da classe BigInteger que retorna o valor 1
            BigInteger graos = BigInteger.ONE;
            long quadrados = input.nextInt();

            for (long aux = 1; aux < quadrados; aux++) {
                graos = graos.multiply(BigInteger.valueOf(2));
                totGraos = totGraos.add(graos);
            }

            BigDecimal pesoTot = new BigDecimal(totGraos)
                    .multiply(BigDecimal.valueOf(0.001))
                    .divide(BigDecimal.valueOf(12), 2, RoundingMode.HALF_DOWN); // Arredondamento para baixo com duas casas decimais

            System.out.printf("%.0f kg\n", pesoTot.setScale(0, RoundingMode.DOWN));

        }

        input.close();

    }

}