#include <iostream>

using namespace std;

void mergeSort(int[], int, int);
int main()
{
    int a[100];
    int length;
    cout<<"Input the length of array: ";
    cin>>length;
    
    for(int i = 0; i<length; i++){
        cout<<"Input the "<<i+1<<"th number: ";
        cin>>a[i];
    }
    
    mergeSort(a, 0, length-1);
    
    cout<<"The array is sorted as: ";
    for(int i = 0; i<length; i++){
        cout<<a[i]<<" " ;
    }
    return 0;
}
void merge(int arr[], int l, int m, int r) {
  
  // Create L ← A[l..m] and R ← A[m+1..r]
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = l;
// Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[l..r]
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }
// When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}



void mergeSort(int arr[], int left, int right){
    if (left >= right) return;
    
    int mid = left + (right -left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    
    merge(arr, left, mid, right);
}