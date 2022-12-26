#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*previous;

    // constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->previous=NULL;
    }
};

// Insertion in head of the linked list:
void insert_at_head(Node* &header,int data){
    // creatin a new Node
    Node*temp=new Node(data);

    temp->next=header;
    header->previous=temp;
    header=temp;
}
// displaying linked list: 
void display(Node* &header){
    Node*temp =header;

    while(temp!=NULL){
        
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<" "<<endl;

}

// length of the linked list:
int list_length(Node* &header){
    Node*temp =header;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    
    return len;

}
int main(){

    // creating a node
    Node*first= new Node(10);
    Node*head=first;
    insert_at_head(head,20);
    insert_at_head(head,30);
    insert_at_head(head,40);
    display(head);
    cout<<list_length(head);

}