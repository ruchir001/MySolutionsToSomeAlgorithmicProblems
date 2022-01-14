package Java;

import org.jetbrains.annotations.NotNull;
import org.junit.jupiter.api.Assertions;

import java.math.BigInteger;
import java.util.Map;

/**
 * Problem - https://leetcode.com/problems/string-to-integer-atoi/
 */
public class StringToInteger {

    public static void main(String[] args) {
        Map<String, Integer> testCases = Map.of(
                "123", 123,
                "0032", 32,
                "   ", 0,
                "    1", 1,
                "-91283472332", -2147483648,
                "+-12", 0,
                "00000-42a1234", 0,
                "  +  413", 0,
                "23123", 23123);
        testCases.forEach((input, expectedOutput) -> {
            int output = myAtoi(input);
            Assertions.assertEquals(expectedOutput.intValue(), output);
        });
    }

    public static int myAtoi(@NotNull String numberStr) {
        boolean whitespaceOver = false;
        boolean negative = false;
        boolean firstIntegerOrSignFound = false;
        StringBuilder number = new StringBuilder();
        for (int i = 0; i < numberStr.length(); i++) {
            char ch = numberStr.charAt(i);
            if (ch == ' ' && !whitespaceOver) {
                //ignore trailing whitespaces
                continue;
            }
            if ((ch == '+' || ch == '-') && !firstIntegerOrSignFound) {
                if (ch == '-') {
                    negative = true;
                }
                firstIntegerOrSignFound = true;
                whitespaceOver = true;
            }
            else if (ch < '0' || ch > '9') {
                break;
            }
            else {
                number.append(ch);
                whitespaceOver = true;
                firstIntegerOrSignFound = true;
            }
        }
        if (number.toString().isBlank()) {
            return 0;
        }
        BigInteger integerNumber = new BigInteger(number.toString());
        if (!negative) {
            if (BigInteger.valueOf(Integer.MAX_VALUE).compareTo(integerNumber) < 0) {
                return Integer.MAX_VALUE;
            }
            return integerNumber.intValue();
        }
        integerNumber = integerNumber.negate();
        if (BigInteger.valueOf(Integer.MIN_VALUE).compareTo(integerNumber) > 0) {
            return Integer.MIN_VALUE;
        }
        return integerNumber.intValue();
    }
}
