#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<int,string> lookup;
    lookup.insert(make_pair(30,"Mike"));
    lookup.insert(make_pair(10,"John"));
    lookup.insert(make_pair(30,"Bob"));
    lookup.insert(make_pair(20,"Raj"));
    lookup.insert(make_pair(30,"Rajafvd"));
    for(multimap<int,string>::iterator it=lookup.begin();it!=lookup.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
    cout<<"\nOutput 2:\n";
    for(multimap<int,string>::iterator it=lookup.find(10);it!=lookup.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
    cout<<"\nOutput 3:\n";
    pair<multimap<int,string>::iterator,multimap<int,string>::iterator> its = lookup.equal_range(30);
    for(multimap<int,string>::iterator it=its.first;it!=its.second;it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
    return 0;
}