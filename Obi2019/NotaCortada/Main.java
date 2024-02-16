import java.util.Scanner;

public class Main {

	public static void main (String[] args) {
	
		Scanner teclado = new Scanner(System.in);
	
		int B = teclado.nextInt();
		int T = teclado.nextInt();
		double areaTot = 160.0*70.0;
		double areaFelix = 0;
		double areaMarzia = 0;
			
		if (T >= B) {
			
			areaFelix = calculaAreaRet(B, 70) + calculaAreaTri(T-B, 70);
			areaMarzia = areaTot - areaFelix;		
				
		} else {
			
			areaFelix = calculaAreaRet(T, 70) + calculaAreaTri(B-T, 70);
			areaMarzia = areaTot - areaFelix;
			
		}
		
		if (areaFelix > areaMarzia) {
			System.out.printf("1\n");
		} else if (areaMarzia > areaFelix) {
			System.out.printf("2\n");
		} else {
			System.out.printf("0\n");
		}
	
	}
	
	public static double calculaAreaRet (int base, int altura) {
		return (base*altura);
	}
	
	public static double calculaAreaTri (int base, int altura) {
		return ((base*altura)/2);
	}
	
}