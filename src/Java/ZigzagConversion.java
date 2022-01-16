package Java;

import org.junit.jupiter.api.Assertions;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;

/**
 * Problem - https://leetcode.com/problems/zigzag-conversion/
 */
public class ZigzagConversion {

    public static void main(String[] args) {
        Map<List<String>, String> testCases = Map.of(
                List.of("PAYPALISHIRING", "3"), "PAHNAPLSIIGYIR",
                List.of("A", "1"), "A",
                List.of("PAYPALISHIRING", "4"), "PINALSIGYAHRPI");
        testCases.forEach((input, expectedOutput) -> {
            String output = convertToZigZagInitialSolution(input.get(0), Integer.parseInt(input.get(1)));
            Assertions.assertEquals(expectedOutput, output, "Failed for input " + input);
        });
        System.out.println("Code passed for all inputs :)");
    }

    public static String convertToZigZagInitialSolution(String s, int numRows) {
        List<List<Character>> listContainingIndexes = new ArrayList<>();
        listContainingIndexes.add(new ArrayList<>());
        listContainingIndexes.get(0).add(s.charAt(0));
        boolean goingDown = true;
        int currentRow = 1;
        int currentIndexOfStr = 1;
        while (currentIndexOfStr < s.length()) {
            if (listContainingIndexes.size() <= currentRow) {
                listContainingIndexes.add(new ArrayList<>());
            }
            listContainingIndexes.get(currentRow).add(s.charAt(currentIndexOfStr));
            currentIndexOfStr++;
            if (currentRow == numRows - 1 || currentRow == 0) {
                goingDown = !goingDown;
            }
            if (goingDown) {
                currentRow++;
            } else {
                currentRow--;
            }
        }
        StringBuilder zigzagString = new StringBuilder();
        listContainingIndexes.forEach(listOfCharacters -> listOfCharacters.forEach(zigzagString::append));
        return zigzagString.toString();
    }
}