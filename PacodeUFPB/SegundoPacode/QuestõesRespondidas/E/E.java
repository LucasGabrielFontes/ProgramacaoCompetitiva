import java.util.Arrays;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class E {
    public static void main (String[] args) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine().trim());

        String[] input = br.readLine().trim().split(" ");
        int tempos[] = new int[N];
        
        for (int i = 0; i < N; i++) {
            tempos[i] = Integer.parseInt(input[i]);
        }

        Arrays.sort(tempos);

        long tempoEspera = 0;
        long tempoAcumulado = 0;

        for (int i = 0; i < N; i++) {
            tempoEspera += tempoAcumulado;
            tempoAcumulado += tempos[i];
        }

        System.out.println(tempoEspera);

    }
}