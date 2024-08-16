/* https://judge.beecrowd.com/pt/problems/view/1243 */

import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLine()) {
            String linha = sc.nextLine();
            int media = calcularMediaPalavras(linha);
            classificarProblema(media);
        }

        sc.close();
    }

    private static void classificarProblema(double media) {
        if (media <= 3.0) {
            System.out.println("250");
        } else if (media <= 5.0) {
            System.out.println("500");
        } else {
            System.out.println("1000");
        }
    }

    private static int calcularMediaPalavras(String linha) {
        if (linha.isBlank()) return 0;

        String[] simbolos = linha.strip().split("\\s+");
        int qtdPalavras = 0;
        int tamanhoTotal = 0;

        for (String simbolo : simbolos) {
            if (isPalavra(simbolo)) {
                int comprimentoPalavra = simbolo.length();
                tamanhoTotal += (simbolo.endsWith(".")
                        ? comprimentoPalavra - 1
                        : comprimentoPalavra);
                qtdPalavras++;
            }
        }

        try {
            return tamanhoTotal / qtdPalavras;
        } catch (ArithmeticException e) {
            return 0;
        }
    }

    private static boolean isPalavra(String simbolo) {
        return simbolo.matches("[a-zA-Z]+[.]?");
    }

}