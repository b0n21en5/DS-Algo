class Rotation {

    static void Rotate(int[] arr, int dist, int size){

        // temporary array to store rotated array
        int[] tempArr = new int[size];

        int j=0;

        // copying ele from given distance till last ele
        for (int i=dist; i<size; i++){
            tempArr[j] = arr[i];
            j++;
        }

        // copying ele from first to given distance
        for (int i=0; i<dist; i++){
            tempArr[j] = arr[i];
            j++;
        }

        // printing the array ele
        for (int i=0; i<size; i++){
            System.out.print(tempArr[i] + " ");
        }
    }

    public static void main(String[] args){

        int[] arr = { 2, 3, 9, 14, 7, 8, 6};
        int dist = 3;
        int size = 7;

        System.out.print("Rotated array - ");
        
        // method invocation
        Rotate(arr, dist, size);
    }
}