#include<iostream>
using namespace std;
void prit(struct Node *str);
void insert(int a);
struct Node{
    int data;
    struct  Node *next;
};
struct Node *head = new Node();
void prit(struct Node *str){
    str = head;
while(str!=NULL){
    cout<<str->data<<"->";
    str=str->next;
}
}
void insert(int a){
    struct Node *temp= new Node();
    temp->data=a;
    temp->next=NULL;
}
int main(){
    insert(6);
    insert(9);
    prit(head);
}