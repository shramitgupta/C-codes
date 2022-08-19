#include<bits/stdc++.h>
using namespace std;
void count_of_node(struct node *head);
void print_of_node(struct node *head);
struct node{
    int data;
    struct node *next;
};
int main(){
 struct node *head=(struct node*)malloc(sizeof(struct node));
 head->data=12;
 head->next=NULL;

 struct node *current=(struct node*)malloc(sizeof(struct node));
 current->data=24;
 current->next=NULL;
 head->next=current;

 struct node *current1=(struct node*)malloc(sizeof(struct node));
 current1->data=36;
 current1->next=NULL;
 current->next=current1;
 count_of_node(head);
print_of_node(head);
}
void count_of_node(struct node *head){
    int count=0;
    struct node *ptr=NULL;
    ptr=head;
    if(head==NULL)
    cout<<"THE NODE IS EMPTY";
    while (ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    cout<<count<<endl;
}
void print_of_node(struct node *head){
     struct node *ptr=NULL;
     ptr=head;
    if(head==NULL)
    cout<<"the node is empty";
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL";
}