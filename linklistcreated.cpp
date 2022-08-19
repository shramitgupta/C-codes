#include<bits/stdc++.h>
using namespace std;
struct Node 
{
    int data;
    struct Node *next;
};
struct Node *newnode(int data){
    Node *head=new Node();
    head->data=data;
    head->next=NULL;
    return head;
}
void instnewnode(Node **temp,int data){
    Node* head =newnode(data);
    Node* ptr;
    if(*temp==NULL){
        *temp=head;
    }
    else{
        ptr=*temp;
        while(ptr->next !=NULL){
            ptr=ptr->next;
        }
        ptr->next=head;
    }
}
void print(Node* temp){
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
Node *crtlinklist(int arr[],int n){
    Node* temp=NULL;
    for (int i = 0; i < n; i++)
    {
        instnewnode(&temp,arr[i]);
    }
    return temp;
}
int main(){
    int n;
    cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   Node* temp=crtlinklist(arr,n);
   print(temp);
}