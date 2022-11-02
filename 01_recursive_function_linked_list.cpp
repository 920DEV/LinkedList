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


// ~ Insertion in linked list.

// !Insertion at head.
void insertat_head(Node* &head, int d){
    
    // creating new node;
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

// ~Insertin at tail

void insertat_tail(Node* &tail, int d){
    
    // creating new node;
    Node* temp = new Node(d);
    temp->next=NULL;

    tail->next=temp;
    tail=temp;
}

// Insertion between the linked list.
void insertion(Node* & head,int position, int d){
    Node*temp=head; 
    int count=1;

     //creating a node for data;
    Node* insert_node=new Node(d);

    if(position<=1){            // adding element to the head of the linked list.
        // creating new node
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
    }

   else{
         // trversing the linked list using while loop. so we can reach the position where we can insert the data.
    while (count<position-1)
    {
        temp=temp->next;
        count++;
    }
   
    
    insert_node->next=temp->next;           // reffering the next address of temp to the "insert_node".
    temp->next=insert_node;                    // now pointing the address of "insert_node" to the temp next.
}
   }



// ? displaying linked list using recursion.

// void display_recursive(Node* &head){
//     Node*temp=head;
//    if(temp!=NULL){
//     cout<<temp->data<<" ";
//     display_recursive(temp->next);
//    }
       
    
// }


// ! displaying using iteration method in linked list.

void display_recursive(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main(){
    Node* first = new Node(10);
    Node*header = first;
    Node*Tail = first;
// cout<<first<<endl;

// cout<<Tail<<endl;
// cout<<header<<endl;

// insertat_head(header,15);

// insertat_head(header,16);

// insertat_head(header,17);

// insertat_head(header,18);

// insertat_head(header,19);

// display_recursive(header); 
// cout<<" "<<endl;
// insertion(header,7,200);         // Parameters calling in this functino: 1) header->
// cout<<"Insertion between the linked list: "<<endl;
// display_recursive(header);
// displaying insertion at the endl or to say tail.




cout<<" "<<endl;
cout<<"Insertion at the tail of linked list"<<endl;
insertat_tail(Tail,12);
// display_recursive(header);
insertat_tail(Tail,23);
// display_recursive(header);
insertat_tail(Tail,45);
display_recursive(header);

return 0;
}