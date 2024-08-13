/* https://judge.beecrowd.com/pt/problems/view/1238 */

import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            sc.nextLine();

            for (int i = 0; i < n; i++) {
                String str1 = sc.next();
                String str2 = sc.next();
                String strCombinada = combine(str1, str2);
                System.out.println(strCombinada);
            }
        }
    }

    private static String combine(String text1, String text2) {
        String textoAlternado = alternarCaracteres(text1.toCharArray(), text2.toCharArray());

        String maior = text1.length() > text2.length() ? text1 : text2;
        String menor = text1.length() < text2.length() ? text1 : text2;

        return textoAlternado.concat(maior.substring(menor.length()));
    }

    private static String alternarCaracteres(char[] arr1, char[] arr2) {
        StringBuilder strAlternada = new StringBuilder();

        int menorLength = Math.min(arr1.length, arr2.length);
        for (int i = 0; i < menorLength; i++) {
            strAlternada.append(arr1[i]).append(arr2[i]);
        }

        return strAlternada.toString();
    }

}
