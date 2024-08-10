/* https://judge.beecrowd.com/pt/problems/view/1222 */

import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int numeroPalavras = sc.nextInt();
            int maxLinhasPorPagina = sc.nextInt();
            int maxCaracteresPorLinha = sc.nextInt();

            sc.nextLine(); // Consome linha

            String conto = sc.nextLine();
            int totalLinhas = getTotalLinhas(conto, maxCaracteresPorLinha);

            int numeroPaginas =  (int) Math.ceil(totalLinhas / (double) maxLinhasPorPagina);

            System.out.println(numeroPaginas);

        }

        sc.close();
    }

    private static int getTotalLinhas(String conto, int maxCaracteresPorLinha) {
        String[] palavrasDoConto = conto.strip().split("\\b");

        int linhas = 0;
        int caracteresDaLinha = 0;


        for (String palavraAtual : palavrasDoConto) {
            int tamanhoPalavraAtual = palavraAtual.length();

            if (cabeNaLinha(maxCaracteresPorLinha, tamanhoPalavraAtual, caracteresDaLinha)) {
                caracteresDaLinha += tamanhoPalavraAtual;
            } else {
                ++linhas;
                caracteresDaLinha = (!palavraAtual.equals(" ")) ? tamanhoPalavraAtual : 0;
            }

        }

        if (temCaracteresRestantes(caracteresDaLinha)) {
            linhas++;
        }
        return linhas;
    }

    private static boolean cabeNaLinha(int maxCaracteresPorLinha, int tamanhoPalavraAtual, int totalCaracteres) {
        return tamanhoPalavraAtual <= (maxCaracteresPorLinha - totalCaracteres);
    }

    private static boolean temCaracteresRestantes(int totalCaracteres) {
        return totalCaracteres != 0;
    }

}