import java.util.Scanner;

public class Fatorial {
    public static void main(String args[]) {
        final Scanner rc = new Scanner(System.in);
        int nmr, fatorial;
        System.out.print("Informe um número: ");
        nmr = rc.nextInt();
        rc.close();
        fatorial = calcularFatorial(nmr);
        System.out.printf("O fatorial do número %d é %d", nmr, fatorial);
        return;
    }

    public static int calcularFatorial(int nmr) {
        if (nmr == 0 || nmr == 1) {
            return 1;
        } else {
            return nmr * calcularFatorial(nmr - 1);
        }
    }
}