/* https://judge.beecrowd.com/pt/problems/view/1120 */

import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;

class Reviewer {

    public static Contract reviewContractNumber(String digitToRemove, Contract contract) {
        String revisedNumber = contract.originalNumber()
                .replaceAll(digitToRemove, "");

        return new Contract(revisedNumber.isEmpty() ? "0" : revisedNumber);
    }


}

record Contract(String originalNumber) { }

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        while (true) {
            String digit = sc.next();
            String noContract = sc.next();

            if (digit.equals("0") && noContract.equals("0")) break;

            Contract revisedContract = Reviewer
                    .reviewContractNumber(digit, new Contract(noContract));

            System.out.println(new BigInteger(revisedContract.originalNumber()));
        }

        sc.close();
    }

}