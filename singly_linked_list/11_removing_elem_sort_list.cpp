#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node*next;

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
void check_sort(Node*&header){
    Node*temp=header;
    int x=-65536;               //! taking the lowest value of integer.
    while(temp!=NULL){
        
        if(temp->data<x){
                cout<<"The linked is not sorted"<<endl;
        }
        else{
            cout<<"the list is sorted"<<endl;
        }

        x=temp->data;
        temp=temp->next;
    }
}
// removing duplicates form sorted linked list.

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
    check_sort(first);
    
    // displaying after removing duplicates nodes.
// ! Function calling for deliting duplicates nodes in a linked list.
    remove_node(first);
    display(first);



}