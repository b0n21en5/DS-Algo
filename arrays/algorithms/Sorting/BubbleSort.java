package algorithms.Sorting;

// Time Complexity for Bubble Sort is O(n^2)
// Space Complexity for Bubble Sort is O(1)

class BubbleSort {

    static void bubbleSort(int[] arr, int size){

        // outer loop will run length -2
        for (int i=0; i< size-1; i++){

            // temp var to store val when swapping
            int temp;
            
            // inner loop will push big val at the last
            for (int j=0; j<size-i-1; j++){

                // if 1st val is greater then swap with next
                if (arr[j]>arr[j+1]){

                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }


    static void printArray(int[] arr, String note){

        System.out.println(note );

        for (int e : arr){
            System.out.print(e+" ");
        }
        System.out.println();
    }

    
    public static void main(String[] args) {
        int[] arr = {3, 5, 14, 9, 1, 6, 7, 83, 10};
        int size = arr.length;

        printArray(arr, "Before Bubble Sort -");

        bubbleSort(arr, size);

        printArray(arr, "After Bubble sort -");
    }
}
