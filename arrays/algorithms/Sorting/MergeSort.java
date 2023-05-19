package algorithms.Sorting;

public class MergeSort {

    public static void conquer(int arr[], int startIndex, int endIndex, int midIndex){

        int[] merged = new int[endIndex - startIndex + 1];

        int indx1 = startIndex;
        int indx2 = midIndex + 1;
        int newIndx = 0;

        while(indx1 <= midIndex && indx2 <= endIndex){
            if (arr[indx1] <= arr[indx2]){
                merged[newIndx++] = arr[indx1++];
            } else {
                merged[newIndx++] = arr[indx2++];
            }
        }

        while (indx1 <= midIndex){
            merged[newIndx++] = arr[indx1++];
        }

        while (indx2 <= endIndex){
            merged[newIndx++] = arr[indx2++];
        }

        for (int i=0, j=0; i<merged.length; i++, j++){
            arr[j] = merged[i];
        }
    }

    public static void divide(int arr[],  int startIndex, int endIndex){

        if (startIndex >= endIndex) return;

        int midIndex = startIndex + (endIndex - startIndex)/2; 
        divide(arr, startIndex, midIndex);
        divide(arr, midIndex+1, endIndex);

        conquer(arr, startIndex, endIndex, midIndex);
    }
    

    public static void main(String[] args) {
        int[] arr = {6, 7, 4, 3, 9, 2, 4};
        int arrSize = arr.length;

        divide(arr, 0, arrSize-1);

        for(int i=0; i<arrSize; i++){
            System.out.print(arr[i]+" ");
        }
    }
}
