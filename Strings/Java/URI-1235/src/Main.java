/* https://judge.beecrowd.com/pt/problems/view/1235 */

import java.io.IOException;
import java.util.Scanner;

public class Main {

    private static final Scanner SC;

    static {
        SC = new Scanner(System.in);
    }

    public static void main(String[] args) throws IOException {
        int noOfTests = SC.nextInt();

        SC.nextLine();

        for (int i = 0; i < noOfTests; i++)
            reverseHalves(SC.nextLine());


    }

    private static void reverseHalves(String s) {
        int half = s.length() / 2;

        String firstHalf = s.substring(0, half);
        String secondHalf = s.substring(half);

        StringBuilder sb = new StringBuilder(firstHalf).reverse()
                .append(new StringBuilder(secondHalf).reverse());

        System.out.println(sb);

    }

}