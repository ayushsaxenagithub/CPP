#include<bits/stdc++.h>
using std::cout;
using std::cin;

long long total_refiels(long long station[], long long distance,long long n) {
    if (station[n-1]<=distance) return 0; 
    long long current_station = station[0],last_station ,count=0,j=1,res;
    while (current_station <station[n-1]){
        last_station = current_station;
        while(station[j]-last_station<=distance&&j<n){
            current_station = station[j];
            j++;
        }
        if(current_station<station[n-1]) count+=1;
        if((last_station==current_station)) return -1;
    }
    return count;
}

int main(){
    long long total_distance, tank_capacity,num;
    cin >> total_distance >> tank_capacity>>num;
    long long station[num+2] ;
    station[0]=0;
    station[num+1]=total_distance;
    for(long long i=1;i<num+1;i++){
        cin >> station[i];
    }
    cout<<total_refiels(station,tank_capacity,num+2);
}