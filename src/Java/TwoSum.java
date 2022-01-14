package Java;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

/**
 * Problem - https://leetcode.com/problems/two-sum/
 */
public class TwoSum {

    public static void main(String[] args) {
        int target = 6;
        int[] nums = {3, 2, 4};
        int[] ans = twoSum(nums, target);
        System.out.println(ans[0] + "  " + ans[1]);
    }

    public static int[] twoSum(int[] nums, int target) {

        Map<Integer, Integer> numberMapping = new HashMap<>();
        List<Integer> numbers = IntStream.of(nums).boxed().collect(Collectors.toList());
        AtomicInteger index = new AtomicInteger();
        for (int number : numbers) {
            if (numberMapping.containsKey(number)) {
                return new int[]{index.get(), numberMapping.get(number)};
            }
            numberMapping.put(target - number, index.get());
            index.getAndIncrement();
        }
        return new int[]{};
    }
}
