package algorithms.Sorting;

// Time Complexity for Insertion Sort is O(n^2)
// Space Complexity for Insertion Sort is O(1)

public class InsertionSort {

    // insertion sort using iterative approach
    public static void IterativeApproach(int[] arr){
        int lngth = arr.length;

        for (int i=1; i<lngth; i++){
            int key = arr[i];
            int j = i - 1;

            while(j >= 0 && arr[j]>key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }


    static void printArray(int[] arr, String note){

        System.out.print(note+" ");
        for(int ele: arr){
            System.out.print(ele+" ");
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        int[] arr = {3, 4, 21, 1, 9, 7, 8, 3};

        printArray(arr, "Before Insertion sort -");

        IterativeApproach(arr);
        printArray(arr, "After Insertion sort -");
    }
}
