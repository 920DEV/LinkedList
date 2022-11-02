#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // ~ constructor

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    // ! Destructor
    ~Node()  {
            int value=this->data;
            // free memory
            if(this->next!=NULL){
                    delete next;
                    this->next=NULL;
            }
            cout<<"memory is free for node with data: "<<value<<endl;
    }
};


// todo) for our convience we are inserting nodes at the tail of the linked list.

void Insertion(Node* &header, int data){
    Node* temp=new Node(data);
    header->next=temp;
    header=temp;
}


 // deleting nodes in linked list by using the position of the nodes.
void delete_node(Node* &header,int position){

    // For delting header Node we have to use the below code
    if(position==1){
        // creating a new Node for pointing to the header:
        Node*temp= header;
        header=header->next;
        temp->next=NULL;
        delete temp;

    }
    // ~ for deleting the node in middle and form the end we should follow the below code:
    else{
            Node* current=header;
            Node*previous=NULL;

            int count= 1;
            while (count<position)
            {
                previous=current;
                current=current->next;
                count++;
            }
            previous->next=current->next;
            current->next=NULL;
            delete current;
            
    }
}
void display(Node* &header){
    Node* temp=header;

    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}


int main(){
    Node*first= new Node(20);
    // creating a new node

    Node*header=first;

    Insertion(header,30);
    Insertion(header,40);
    Insertion(header,50);
    Insertion(header,60);
display(first);
    delete_node(first,1);
display(first);
    return 0;

}