#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*previous;

    // Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->previous=NULL;
    }
    ~Node(){

    }
};


// Insertion in head of the linked list:
void insert_at_head(Node* &header,Node* &tail,int data){
    // creatin a new Node
    if(header==NULL){       // in case of the header is the first Node.
        Node*temp=new Node(data);
        header=temp;
        tail=temp;
    }
    Node*temp=new Node(data);

    temp->next=header;
    header->previous=temp;
    header=temp;
}

// insert at tail.
void insertat_tail(Node* &header,Node* &tail, int data){
        if(header==NULL){       // in case of the header is the first Node.
        Node*temp=new Node(data);
        header=temp;
        tail=temp;
    }
    Node*temp= new Node(data);
    header->next=temp;
    temp->previous=header;
    header=temp;


}
void insert_at_position(Node* &header,Node* &tail, int data,int position){
    Node*temp=header;
    if(position==1){
        insert_at_head(header,tail,data);
        return ;
    }
    else{
        int count=1;
        while (count<position-1)
        {
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL){
            insertat_tail(tail,header,data);
            return ;
        }
        else{
        // creating a new Node for storing the data;
        Node* insert_node=new Node(data);

        insert_node->next=temp->next;
        temp->next->previous=insert_node;
        temp->next=insert_node;
        insert_node->previous=temp;


        }

    }
}
void display_list(Node* &header){
    Node* temp=header;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<""<<endl;
}

int main(){
    // Node *first=new Node(10);
    // Node*header=first;
    Node*tail=NULL;
    Node*header=NULL;
    insert_at_head(tail,header,10);

    insertat_tail(header,tail,20);

    insertat_tail(header,tail,30);

    insertat_tail(header,tail,40);

    insertat_tail(header,tail,50);
    insert_at_position(tail,header,2,6);     // function calling for inserting node any where between the linked list.
    insert_at_position(tail,header,12,1);     // function calling for inserting node any where between the linked list.

    display_list(tail);

}
