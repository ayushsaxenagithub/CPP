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
        int n,c;
        cin >> n >> c;
        if(n%2==0){
            int d=n/2;
            int count=0;
            int z=0;
            int a[d],b[d];
            mergeSort(a, 0, d-1);
            mergeSort(b, 0, d-1);
            for(int i = 0; i <d; i++){
                z+=b[i];
                count+=z*a[i];
            }
            for(int i = 0; i <d; i++){
                cout<<a[d-1-i]<<" "<<b[d-1-i]<<" ";
            }
            cout<<"\n"<<count<<endl;
        }
        if(n%2==1){
            int d=n/2;
            int count=0;
            int z=0;
            int a[d+1],b[d];
            mergeSort(a, 0, d);
            mergeSort(b, 0, d-1);
            for(int i = 0; i <d; i++){
                z+=b[i];
                count+=z*a[i+1];
            }
            for(int i = 0; i <d; i++){
                cout<<a[d-i]<<" "<<b[d-1-i]<<" ";
            }
            cout<<a[0];
            cout<<"\n"<<count<<endl;
        }
        
        t--;
    }
}