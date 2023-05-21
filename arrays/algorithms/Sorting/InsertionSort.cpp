#include <iostream>
using namespace std;

// Time Complexity for Insertion Sort is O(n^2)
// Space Complexity for Insertion Sort is O(1)


void iterativeApproach(int arr[], int size){
    int key, i, j;

    for (i=1; i<size; i++){

        j = i-1;
        key = arr[i];

        while(j>=0 && arr[j]>key){
            if(arr[j+1]<arr[j]){
                arr[j+1] = arr[j];
            }
            j--;
        }
        arr[j+1] = key;
    }
}


void printArray(int arr[], int n){
    int i;
    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {5, 3, 9, 7, 8, 1};
    int size = 6;

    iterativeApproach(arr, size);
    printArray(arr, size);
}