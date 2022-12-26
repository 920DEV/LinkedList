#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};
// insert at the end
void insertat_tail(Node* &tail, int d){
    
    // creating new node;
    Node* temp = new Node(d);
    tail->next=temp;
    tail=tail->next;
}




// Insert elements (data) between the linked list.

void insertion(Node* & head,int position, int d){
    Node*temp=head; 
    int count=1;
        

        // trversing the linked list using while loop. so we can reach the position where we can insert the data.
    while (count<position-1)
    {
        temp=temp->next;
        count++;
    }
    //creating a node for data;
    Node* insert_node=new Node(d);
    insert_node->next=temp->next;           // reffering the next address of temp to the "insert_node".
    temp->next=insert_node;                    // now adding the address of "insert_node" to the temp next.
}

// function for display
void display(Node* &head){
    Node*temp=head;
    if (temp!=NULL)
    {
        cout<<temp->data<<" ";
        display(temp->next);
    }   
    // cout<<" "<<endl;
}

int main(){
Node* node1=new Node(20);
 Node*header=node1;

display(node1);
// displaying insertion at the end or to say tail.
insertat_tail(header,23);
display(header);

insertat_tail(header,24);
display(header);

insertat_tail(header,25);
display(header);

insertat_tail(header,26);
display(header);


insertion(header,3,100);
display(header);

return 0;
}   