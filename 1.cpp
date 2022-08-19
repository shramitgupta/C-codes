#include<iostream>
using namespace std;
void prit(struct Node *str);
struct Node{
    int data;
    struct  Node *next;
};
void prit(struct Node *str){
while(str!=NULL){
    cout<<str->data<<"->";
    str=str->next;
}
}
int main(){
    struct Node *head = new Node(); 
    struct Node *second = new Node();
    struct Node *third = new Node();

    head->data=7;
    head->next=second;
    second->data=22;
    second->next=third;

    third->data=17;
    third->next=NULL;
    prit(head);
}