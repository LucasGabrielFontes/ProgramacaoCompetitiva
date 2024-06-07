// Autor: Lucas Gabriel Fontes da Silva
// Propósito: trabalhar lógica de programação
// *OBS*: esse código não foi aceito pelo BeeCrowd, por Time Limit Exceeded. Se puder contribuir com ele, agradeço!

import java.util.Scanner;
import java.util.ArrayList;

public class FestivalNoitesBrancas {

	public static void main (String[] args) {
		
		Scanner teclado = new Scanner(System.in);
		ArrayList<Integer> fibonacci = new ArrayList<Integer>(); // Cria um ArrayList que irá armazenar os números da sequência de Fibonacci
		
		int[] comparador = {100}; // Vetor de um elemento que irá armazenar a maior posição do número da sequência de Fibonacci solicitado (é necessário que seja um vetor para seu conteúdo ser modificado dentro de um método)
		inicializaFibonacci10(fibonacci);
		
		int reps = teclado.nextInt(); // Solicita quantas vezes o usúario quer testar valores
		teclado.nextLine();
		
		for (int i = 0; i < reps; i++) {
			
			String binario = teclado.nextLine(); // A String armazena o valor binário
			
			int decimal = binarioParaDecimal(binario); // A String binária é transformada em um número decimal
			
			int numFi = retornaNumFibonacci(fibonacci, comparador, decimal); // Armazena os três últimos digítos do número que fica na posição 'decimal' na sequência de Fibonacci
			
			System.out.printf("%03d\n", numFi);
			
		}
		
		teclado.close();
		
	}
	
	public static int retornaNumFibonacci (ArrayList<Integer> fi, int[] compara, int n) {
		
		if (n <= compara[0]) {
			
			return fi.get(n-1); // Se o número solicitado já está armazenado, o programa apenas o retorna
			
		} else {
			
			for (int i = compara[0]; i < n; i++) {
				
				fi.add(((fi.get(i-1)%1000) + (fi.get(i-2)%1000))%1000); // Senão, o programa o calcula
				
			}
			
			compara[0] = n; // E atualiza o valor da maior posição do número da sequência que foi solicitado
			
			return fi.get(n-1);
			
		}
		
	}
	
	public static int binarioParaDecimal (String bin) {
		
		int dec = 0;
		int aux = 1;
		
		for (int i = bin.length() - 1; i >= 0; i--) {
			
			dec += Integer.parseInt(Character.toString(bin.charAt(i)))*aux; // Faz a transformação da String que representa um número binário para um inteiro que representa um número decimal
			
			aux *= 2;
			
		}
		
		return dec;
		
	}
	
	public static void inicializaFibonacci10 (ArrayList<Integer> fi) {
		
		fi.add(1);
		fi.add(1);
		
		for (int i = 2; i < 100; i++) {
			fi.add(fi.get(i-1) + fi.get(i-2)); // Calcula os 100 primeiros números da sequência de Fibonacci para fins de inicialização
		}
		
	}
	
}