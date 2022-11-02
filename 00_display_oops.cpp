#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;                 // self referencing Node;
    Node (int data){
        this->data=data;
        this->next=NULL;
    }
};

// Insertion in linked list.
void insertat_head(Node* head, int d){
    // creating new node;
    Node* temp = new Node(d);
    head -> next = temp;
    head=head->next;
}

// For displaying in linked list
void display(Node* &head){
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//insertion at the end of the linkedlist:
 



int main(){
    Node* pointer=new Node(10);
    display(pointer);
    // cout<<pointer->data<<endl;
    // cout<<pointer->next<<endl;

    // head node pointed to node;
    // Node *head =pointer;
 insertat_head(pointer,14);     // function calling for insertion of element at head in linked list.

display(pointer);
 insertat_head(pointer,15);     // function calling for insertion of element at head in linked list.

display(pointer);
 insertat_head(pointer,16);     // function calling for insertion of element at head in linked list.

display(pointer);
return 0;  


}
