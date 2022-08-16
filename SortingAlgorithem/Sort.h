#ifndef SORT_H_
#define SORT_H_
class Sort
{

public:

void swap(int *xp, int *yp);
void bubbleSort(int arr[], int n);
//
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
int partition(int arr[], int low, int high);
//
void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);
//
void randArray(int array[],int sizofarr);
};
#endif