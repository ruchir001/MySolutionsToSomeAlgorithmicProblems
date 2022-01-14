package Java;

import org.junit.jupiter.api.Assertions;

import java.util.Map;
import java.util.Stack;

/**
 * Problem - https://leetcode.com/problems/reverse-words-in-a-string/
 */
public class ReverseWordsInString {

    public static void main(String[] args) {
        Map<String, String> testCases = Map.of(
                "  hello world  ", "world hello",
                "a good   example", "example good a",
                "  Bob    Loves  Alice   ", "Alice Loves Bob",
                "the sky is blue", "blue is sky the");
        testCases.forEach((input, expectedOutput) -> {
            String output = reverseWords(input);
            Assertions.assertEquals(expectedOutput, output);
        });
    }

    public static String reverseWords(String s) {
        Stack<String> words = new Stack<>();
        s = s.trim();

        StringBuilder currentWord = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                if (!currentWord.toString().isBlank()) {
                    words.push(currentWord.toString());
                }
                currentWord.setLength(0);
            } else {
                currentWord.append(s.charAt(i));
            }
        }
        if (!currentWord.toString().isBlank()) {
            words.push(currentWord.toString());
        }
        StringBuilder reversedString = new StringBuilder();
        while (true) {
            reversedString.append(words.pop());
            if (words.isEmpty()) {
                break;
            }
            reversedString.append(" ");
        }
        return reversedString.toString();
    }

}