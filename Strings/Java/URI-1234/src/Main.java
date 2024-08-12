/* https://judge.beecrowd.com/pt/problems/view/1234 */

import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLine()) {
            String sentence = sc.nextLine();
            String dancing =  toDancing(sentence);
            System.out.println(dancing);
        }

        sc.close();
    }

    private static String toDancing(String sentence) {
        StringBuilder sb = new StringBuilder();
        boolean flag = true;

        char[] sentenceCharacters = sentence.toCharArray();

        for (char c : sentenceCharacters) {
            if (Character.isLetter(c)) {
                if (flag) {
                    sb.append(Character.toUpperCase(c));
                    flag = false;
                } else {
                    sb.append(Character.toLowerCase(c));
                    flag = true;
                }
            } else {
                sb.append(c);
            }
        }

        return sb.toString();
    }

}