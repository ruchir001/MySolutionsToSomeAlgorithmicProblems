package Java;

import org.jetbrains.annotations.NotNull;
import org.junit.jupiter.api.Assertions;

import java.util.HashMap;
import java.util.Map;

/**
 * Problem - https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */
public class LongestSubstringWithoutRepeatingCharacters {


    public static void main(String[] args) {
        Map<String, Integer> testCases = Map.of(
                "pwwkew", 3,
                "abba", 2,
                "abc", 3);
        testCases.forEach((input, expectedOutput) -> {
            int longestLength = myLengthOfLongestSubstring(input);
            Assertions.assertEquals(expectedOutput.intValue(), longestLength, "Code failed for input '" + input + "'");
        });
    }

    public static int myLengthOfLongestSubstring(@NotNull String s) {
        HashMap<Character, Integer> mapOfParsedChars = new HashMap<>();
        int maxLength = 0;
        int currentLength = 0;
        int startIndex = 0;

        for (int index = 0; index < s.length(); index++) {
            char currentCh = s.charAt(index);
            if (!mapOfParsedChars.containsKey(currentCh)) {
                currentLength++;
            } else {
                int firstDuplicateCharIndex = mapOfParsedChars.get(currentCh);
                currentLength = currentLength - (firstDuplicateCharIndex - startIndex);
                // Time consuming ?
                for (int j = startIndex; j <= firstDuplicateCharIndex; j++) {
                    mapOfParsedChars.remove(s.charAt(j));
                }
                startIndex = firstDuplicateCharIndex + 1;

            }
            mapOfParsedChars.put(currentCh, index);
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }
        return maxLength;
    }

    /**
     * Commonly used tables are:
     * <p>
     * int[26] for Letters 'a' - 'z' or 'A' - 'Z'
     * int[128] for ASCII
     * int[256] for Extended ASCII
     */
    public static int bestLengthOfLongestSubstring(@NotNull String s) {
        Integer[] chars = new Integer[128];

        int left = 0;
        int currentIndex = 0;

        int maxLength = 0;
        while (currentIndex < s.length()) {

            char currentChar = s.charAt(currentIndex);

            Integer indexOfDuplicateChar = chars[currentChar];
            // indexOfDuplicateChar >= left && indexOfDuplicateChar < currentIndex
            // This condition will take care of abba case where the set already has a garbage index from previous
            // sliding window.
            if (indexOfDuplicateChar != null && indexOfDuplicateChar >= left && indexOfDuplicateChar < currentIndex) {
                left = indexOfDuplicateChar + 1;
            }

            maxLength = Math.max(maxLength, currentIndex - left + 1);

            chars[currentChar] = currentIndex;
            currentIndex++;
        }

        return maxLength;
    }
}
