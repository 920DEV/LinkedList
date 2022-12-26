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
    insert_node(header,80);
    insert_node(header,60);
    display(first);
    cout<<check_sort(first);

}