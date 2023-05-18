#include<bits/stdc++.h>
using namespace std;


void merge(int array[], int const left, int const mid, int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;
  

    int *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
    for (int i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (int j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
  
    int indexOfSubArrayOne = 0, 
        indexOfSubArrayTwo = 0; 
    int indexOfMergedArray = left; 
  
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
  

void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; 
  
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        mergeSort(a, 0, n - 1);
        for(int i=0;i<n;i++){
            b[i] = a[n-i-1];
        }
        int count = n/2;
        for(int i=n/2;i<n;i++){
            if(b[i] == b[count-1]){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
        t--;
    }
}