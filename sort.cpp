#include <stdio.h>
void swap(int *a, int *b) {
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
int Partition(int a[], int low, int high) {
   int pivot, index, i;
   index = low;
   pivot = high;
   for(i=low; i < high; i++) {
      if(a[i] < a[pivot]) {
         swap(&a[i], &a[index]);
         index++;
      }
   }
   swap(&a[pivot], &a[index]);
   return index;
}
int RandomPivotPartition(int a[], int low, int high) {
   int pvt, n, temp;
   n = rand();
   pvt = low + n%(high-low+1);
   swap(&a[high], &a[pvt]);
   return Partition(a, low, high);
}
int QuickSort(int a[], int low, int high) {
   return 0;
}
int main() {
   int n, i;
   n=7;
   int arr[]={7,4,2,6,3,1,5};
   int high = n-1;
   int low = 0 ;
   int pindex;
   if(low < high) {
      pindex = RandomPivotPartition(arr, low, high);
      QuickSort(arr, low, pindex-1);
      QuickSort(arr, pindex+1, high);
   }
   for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
   return 0;
}
