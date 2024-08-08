/* https://judge.beecrowd.com/pt/problems/view/1024 */

import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int tests = sc.nextInt();

        sc.nextLine();

        for (int i = 0; i < tests; i++) {
            StringBuilder message = new StringBuilder(sc.nextLine());
            System.out.println(thirdPass(secondPass(firstPass(message))));
        }

        sc.close();

    }

    private static StringBuilder thirdPass(StringBuilder msg) {
        int halfIfOdd = Math.floorDiv(msg.length(), 2);
        int halfIfEven = msg.length() / 2;
        int half = (msg.length() % 2 == 0) ? halfIfEven : halfIfOdd;

        for (int i = half; i < msg.length(); i++) {
            char current = msg.charAt(i);
            char newChar = (char) (current - 1);
            msg.setCharAt(i, newChar);
        }
        
        return msg;
    }

    private static StringBuilder secondPass(StringBuilder msg) {
        return msg.reverse();
    }

    private static StringBuilder firstPass(StringBuilder msg) {
        for (int i = 0; i < msg.length(); i++) {
            char current = msg.charAt(i);
            if (Character.isLetter(current)) {
                char newChar = (char) (current + 3);
                msg.setCharAt(i, newChar);
            }
        }
        return msg;
    }

}