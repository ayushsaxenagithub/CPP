#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long int k;
	   long long int n;
	    cin>>n>>k;
	   long long int arr[n];
	    int max=INT_MIN;
	    for(long long int i=0;i<n;i++)
	    {
	      cin>>arr[i];     
	       
	       if (arr[i] > max)
            max = arr[i];
	    }
	    
	    long long int ans=0;
	    for(long long int i=k-1;i<n;i++)
	    {
	        if(arr[i]==max)
	        {
	            
	            ans=ans+(n-i);
	        }
	    }
	    
	    cout<<ans<<endl;
	}
	
	
	return 0;
}