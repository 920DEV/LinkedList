#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;               // self referencing Node;

    //~ constructor
    Node (int data){
        this->data=data;
        this->next=NULL;
    }
};

class myclass{
    public:
    int data;
    double data2;
    char size;
};
// ! Inserting in linked list at head.
// Insertion in  last in linked list.    

void insertat_tail(Node* &tail, int d){
    
    // creating new node;
    Node* temp = new Node(d);
    temp->next=NULL;
    
    tail->next=temp;
    tail=tail->next;
}

// ! For displaying in linked list

void display(Node* &first){
    Node *temp=first;
    while (temp!=NULL)
    {
        
        cout<<temp->data<<" ";
         temp=temp->next;
    }
    cout<<endl;
}

//insertion at the end of the linkedlist:
int main(){
    Node* first=new Node(10);

    // create new Node
    Node*head=first;

insertat_tail(head,23);
insertat_tail(head,24);
insertat_tail(head,21);
display(first);
    
    //


    cout<<sizeof(myclass)<<endl;
return 0;  


}
