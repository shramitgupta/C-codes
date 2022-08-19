#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int val;
        node* nxt;
};
node*createll(int *arr , int size){
    node* head = new node;
    node* temp = head;
    temp->nxt = NULL;
    temp->val = arr[0];
    for(int i=1 ; i<size  ; i++){
        node* newnode = new node;
        temp->nxt = newnode;
        newnode->nxt = NULL;
        newnode->val = arr[i];
        temp = temp->nxt;
    }
    return head;
}


void display_linkedlist(node* h1){
    node* temp = h1;
    while(temp->nxt){
        cout<<temp->val<<"->"<<" ";
        temp = temp->nxt;
    }
}

int main(){
    int size;
    int arr[size];
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];    
    }
    node* ll1 = createll(arr , size);
    cout<<"The Linked list is :";display_linkedlist(ll1);cout<<"NULL"<<endl;
   
} 