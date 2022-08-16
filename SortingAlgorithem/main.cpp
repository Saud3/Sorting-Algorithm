#include<iostream>
#include"Sort.h"
#include "Sort.cpp"

using namespace std;

int main(){
    Sort sort;
    srand((unsigned)time(0));
    int sizeofArray = 10;
    int arr[sizeofArray];
     int n = sizeof(arr) / sizeof(arr[0]);
     cout << "############## Bubble Sort############## " << endl;
    sort.randArray(arr,sizeofArray);
    sort.bubbleSort(arr, n);
    //end = clock();
    //printf("%Lf", (long double)(end - start) / CLOCKS_PER_SEC);
   // printf("\nTime elapsed: %.2f\n", 1.0 * (end - start) / CLOCKS_PER_SEC);
    cout << "\nSorted array: " << endl;
    sort.printArray(arr, n);

    cout << "############## Merge Sort############## " << endl;
 
    sort.randArray(arr,sizeofArray);
    sort.mergeSort(arr, 0, n - 1);
    printf("\nSorted array is \n");
    sort.printArray(arr, n);

    cout << "############## Quick Sort############## " << endl;
    sort.randArray(arr,sizeofArray);
   
    sort.quickSort(arr, 0, n - 1);
	printf("\nSorted array: \n");
	sort.printArray(arr, n);







    return 0;
}