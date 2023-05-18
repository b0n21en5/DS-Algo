package algorithms.Searching;

import java.util.Arrays;


// binary search can only be done on sorted array

public class Binary_Search1 {

    // func will return -1 if not present
    static int binarySearch(int[] arr, int findNum ){

        int left=0, right=arr.length-1;

        while(left <= right){
            int mid = (int) (left+right)/2;

            // check if num is equal to mid num
            if (arr[mid] == findNum) return mid;

            // if num is greater leave left half
            else if (arr[mid] < findNum) left = mid + 1;

            // if num is lower leave right half
            else right = mid - 1;
        }

        return -1;
    }
    public static void main(String[] args) {

        int[] arr = {4, 6, 7, 19, 3, 8, 4};
        int findNum = 7;

        // using built-in sorting method
        Arrays.sort(arr);

        int result = binarySearch(arr, findNum);

        if (result > 0)
        System.out.println(findNum+" is at index num " +result);

        else System.out.println("Num is not present in the array");
    }
}
