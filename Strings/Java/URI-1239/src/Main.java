/* https://judge.beecrowd.com/pt/problems/view/1239 */

import java.io.IOException;
import java.util.*;

public class Main {

    public static Map<Character, String[]> TAGS_POR_ATALHO = new HashMap<>();

    static {
        TAGS_POR_ATALHO.put('_', new String[]{"<i>", "</i>"});
        TAGS_POR_ATALHO.put('*', new String[]{"<b>", "</b>"});
    }

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLine()) {
            String linha = sc.nextLine();
            String linhaHTML = formatarParaHTML(linha);
            System.out.println(linhaHTML);
        }

        sc.close();
    }

    private static String formatarParaHTML(String linha) {
        StringBuilder HTML = new StringBuilder();
        boolean isItalicOpen = true;
        boolean isBoldOpen = true;

        for (char atual : linha.toCharArray()) {
            if (isUnderLine(atual)) {
                HTML.append(isItalicOpen
                        ? TAGS_POR_ATALHO.get(atual)[0]
                        : TAGS_POR_ATALHO.get(atual)[1]);

                isItalicOpen = !isItalicOpen;

            } else if (isAsterisco(atual)) {
                    HTML.append(isBoldOpen
                            ? TAGS_POR_ATALHO.get(atual)[0]
                            : TAGS_POR_ATALHO.get(atual)[1]);
                    isBoldOpen = !isBoldOpen;
            } else {
                HTML.append(atual);
            }
        }

        return HTML.toString();
     }

    private static boolean isAsterisco(char atual) {
        return atual == '*';
    }

    private static boolean isUnderLine(char atual) {
        return atual == '_';
    }

}