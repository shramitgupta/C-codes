#include <bits/stdc++.h>
using namespace std;
// void count_of_node(struct node *head);
void print_data(struct node *head);
// void add_at_end(struct node *head,int data);
struct node* add_at_beg(struct node *head,int data);
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=72;
    head->next=NULL;
    
    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=12;
    current->next=NULL;
    head->next=current;
     
    struct node *current1=(struct node*)malloc(sizeof(struct node));
    current1->data=24;
    current1->next=NULL;
    current->next=current1;
    // count_of_node(head);
    // print_data(head);
    // add_at_end(head,48);
    // print_data(head);
    add_at_beg(head,6);
    print_data(head);
    // count_of_node(head);
} 
// void count_of_node(struct node *head){
//     int count=0;
//     if(head==NULL)
//     cout<<"linked list is empty";
//     struct node *ptr = NULL;
//     ptr=head;
//     while(ptr != NULL)
//     {
//         count++;
//         ptr=ptr->next;
//     }
//     cout<<count<<endl;
// }
void print_data(struct node *head){
    if(head==NULL)
    cout<<"linked list";
    struct node *ptr = NULL;
    ptr=head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}
// void add_at_end(struct node *head,int data){
//     struct node *ptr=head;
//     struct node *temp=(struct node*)malloc(sizeof(struct node));
//     temp->data=data;
//     temp->next=NULL;
    
//     while(ptr->next != NULL)
//     {
//         ptr=ptr->next;
//     }
//     ptr->next=temp;
// }
struct node* add_at_beg(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    
    ptr->next=head;
    head=ptr;
    return head;
}

