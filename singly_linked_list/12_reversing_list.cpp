// reversing the links of the linked list.


#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(){

    };
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};


int insert_node(Node* &header, int data){
    Node*temp= new Node(data);

    header->next=temp;
    header=temp;
}
int check_sort(Node*&header){
    Node*temp=header;
    int x=-65536;               // taking the lowest value of integer.
    while(temp!=NULL){
        
        if(temp->data<x){
                cout<<"The linked is not sorted"<<endl;
                return 0;
        }
        else{
            cout<<"the list is sorted"<<endl;
        }

        x=temp->data;
        temp=temp->next;
    }
}
//!removing duplicates form sorted linked list.

void remove_node(Node*header){
Node*temp=header;
Node*check=temp->next;

while(check!=NULL){
    if(temp->data!=check->data){
        temp=check;
        check=check->next;
    }
    else{
        temp->next=check->next;
        delete check;
        check=temp->next;
    }
}
}


// ~ Reversing the links of the linked list.
void reverse_links(Node* &header){
    Node*current=NULL;
    Node*prev=NULL;
    
    while(header!=NULL){

        prev=current;
        current=header;
        header=header->next;

        current->next=prev;

    }
    header=current;

}

   void reverse(Node* &head,Node* &temp)
    {
      if(head!=NULL){
        reverse(head->next,head);
        head->next=temp;
      }
      else{
        head=temp;
      }

    }
// displaing element of linked list

void display(Node* &header){
    Node*temp=header;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<""<<endl;
    
}


int main(){
    Node *first = new Node(20);
    Node*header=first;
    insert_node(header,25);
    insert_node(header,30);
    insert_node(header,40);
    insert_node(header,50);
    insert_node(header,50);
    insert_node(header,60);
    // displaying all the elements in the linked list.

    display(first);
    // cout<<check_sort(first);
    
    // displaying after removing duplicates nodes.
    Node*temp= new Node();
    temp=NULL;
    remove_node(first);
    display(first);
    reverse_links(first);
    display(first);
    reverse(header,temp);
    display(first);

return 0;

}
