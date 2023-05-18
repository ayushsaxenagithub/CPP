#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node
{
    public:
    int value;
    Node * next = NULL;
};

int main(){
    Node *head = NULL;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;
    one = new Node();
    two = new Node();
    three = new Node();
    one -> value = 0;
    two -> value = 1;
    three -> value = 2;
    one -> next = two;
    two -> next = three;
    head = one;
    while (head!= NULL) {
        cout<<"Working "<< endl;
        cout<<head->value<<endl;
        head= head->next;
    }
}
