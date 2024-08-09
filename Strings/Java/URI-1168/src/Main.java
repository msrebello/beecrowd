/* https://judge.beecrowd.com/pt/problems/view/1168 */

import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

    private static final Map<Character, Integer> LED_PER_DIGIT = new HashMap<>();

    static {
        LED_PER_DIGIT.put('0', 6);
        LED_PER_DIGIT.put('1', 2);
        LED_PER_DIGIT.put('2', 5);
        LED_PER_DIGIT.put('3', 5);
        LED_PER_DIGIT.put('4', 4);
        LED_PER_DIGIT.put('5', 5);
        LED_PER_DIGIT.put('6', 6);
        LED_PER_DIGIT.put('7', 3);
        LED_PER_DIGIT.put('8', 7);
        LED_PER_DIGIT.put('9', 6);
    }

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int tests = sc.nextInt();

        for (int i = 0; i < tests; i++) {
            char[] number = sc.next().toCharArray();

            System.out.println(getTotalLed(number) + " leds");
        }

        sc.close();
    }

    private static int getTotalLed(char[] no) {
        int totalLed = 0;

        for (char c : no)
            totalLed += LED_PER_DIGIT.get(c);

        return totalLed;
    }

}