/* https://judge.beecrowd.com/pt/problems/view/1241 */

import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        sc.nextLine();

        for (int i = 0; i < n; i++) {
            String valor1 = sc.next();
            String valor2 = sc.next();
            if (encaixa(valor1, valor2)) {
                System.out.println("encaixa");
            } else {
                System.out.println("nao encaixa");
            }
        }

        sc.close();
    }

    private static boolean encaixa(String valor1, String valor2) {
        int length1 = valor1.length();
        int length2 = valor2.length();

        if (length2 > length1) return false;
        if (length1 == length2 && !valor1.contains(valor2)) return false;

        int dif = length1 - length2;

        return valor1.substring(dif).contains(valor2);

    }

}