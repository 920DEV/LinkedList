#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"the element delted in this list is: "<<this->data<<endl;
    }
};

void insertion_node(Node *&header, int data)
{
    Node*main=header;
    Node *temp = new Node(data);
    if (header == NULL)
    {
        header=temp;
        temp->next=temp;
    }
    else
    {
        temp->next=header->next;
        header->next=temp;
    }
}
// ! insertion between the circular linked list
void insert_btw(Node* &header, int position, int data){
    Node*previous=NULL;
       if(header==NULL){
        Node* new_node= new Node(data);
        header=new_node;
        new_node->next = new_node;
    }
    else{
        Node*new_node=header;
        Node*temp=new Node(data);
        int count=1;
        while(count<position){

            new_node=new_node->next;
            count++;


        }
        temp->next=new_node->next;
        new_node->next=temp;
    }

}

// functin for delting node in circular linkeed list.
void delte_node(Node*&header,int element){
    if(header==NULL){
        return ;
    }
    else{
        // ~ creating a new node;
        Node*current=header;
        Node*temp=current->next;
        while(temp!=header){
            if(temp->data==element){
                current->next=temp->next;
                temp->next=NULL;
                delete temp;
                temp=current->next;
            }
            current=temp;
            temp=temp->next;

        }
    }
}
// creating function for displaying circular linked list.
void display_list(Node *&header)
{
    Node *temp = header;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (header!=temp);
    cout<<" "<<endl;
}

int main()
{
    // creating a node and allocating to the heap
    Node *header = new Node;
header=NULL;
    Node*first=header;
   
    insertion_node(first, 10);
    insertion_node(first, 20);
    insertion_node(first, 40);
    insertion_node(first, 30);
    insertion_node(first, 40);
    display_list(first);
    insert_btw(first,2,50);
    display_list(first);
    delte_node(first,10);
    delte_node(first,40);
    display_list(first);
    return 0;
}