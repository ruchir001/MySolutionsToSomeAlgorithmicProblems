package Java;

import org.junit.jupiter.api.Assertions;

/**
 * Problem - https://leetcode.com/problems/median-of-two-sorted-arrays/
 */
public class MedianOfTwoSortedArrays {

    public static void main(String[] args) {
        int[] array1 = new int[]{1, 2};
        int[] array2 = new int[]{-1, 5};
        Assertions.assertEquals(1.50000, findMedianSortedArrays(array1, array2), 0.00000);
    }

    /**
     * Best solution - faster than 99.9% java submissions.
     */
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        double median = 0;
        int totalArraySize = nums1.length + nums2.length;
        int medianFirstIndex = (totalArraySize - 1) / 2;
        int medianSecondIndex = -1;
        if (totalArraySize % 2 == 0) {
            medianSecondIndex = medianFirstIndex + 1;
        }
        int currentIndex = 0;
        int firstArrayIndex = 0;
        int secondArrayIndex = 0;
        int currentIndexNumber;
        while (currentIndex < totalArraySize) {
            if (firstArrayIndex >= nums1.length && secondArrayIndex >= nums2.length) {
                System.out.println("Could not find median even after parsing both the arrays");
                break;
            } else if (firstArrayIndex >= nums1.length) {
                currentIndexNumber = nums2[secondArrayIndex];
                secondArrayIndex++;
            } else if (secondArrayIndex >= nums2.length) {
                currentIndexNumber = nums1[firstArrayIndex];
                firstArrayIndex++;
            } else if (nums1[firstArrayIndex] <= nums2[secondArrayIndex]) {
                currentIndexNumber = nums1[firstArrayIndex];
                firstArrayIndex++;
            } else {
                currentIndexNumber = nums2[secondArrayIndex];
                secondArrayIndex++;
            }

            if (currentIndex == medianFirstIndex) {
                if (medianSecondIndex == -1) {
                    return currentIndexNumber;
                }
                median = currentIndexNumber;
            }
            if (currentIndex == medianSecondIndex) {
                return (median + currentIndexNumber) / 2;
            }
            currentIndex++;
        }
        return median;
    }
}
