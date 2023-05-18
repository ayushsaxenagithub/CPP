#include<iostream> 
using std::cout;
using std::cin;
int main(){
    int n;
    cout<<"Please Enter no of Elements : ";
    cin>>n;
    int arr[n];
    cout<<"Please Enter all Elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int start_point = 0,end_point = 0,sum=0,current_sum=0,new_point=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(current_sum<sum){
            current_sum=sum;
            start_point = new_point;
            end_point=i;
        }
        if(sum<0){
            sum=0;
            new_point =i+1;
        }
    }
    cout<<"\nThe maximum sum is : "<<current_sum<<std::endl;
    cout<<"And the elements are : ";
    for(int i=start_point;i<end_point+1;i++){
        cout<<arr[i]<<" ";
    }
}