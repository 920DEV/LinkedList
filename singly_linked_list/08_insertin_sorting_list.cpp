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

void Insert_node(Node* &header,int data){
    Node* temp= new Node(data);
    if(header==NULL){
        header=temp;
    }
    else{
        header->next=temp;
        header=temp;
    }
}
void Sorted_list_insert(Node*&header,int data){
    Node*temp= new Node(data);
    if(header==NULL){
        header=temp;
    }
    else{
        // creating a new Node pointing to header.
        Node* insert_node=header;
        while (header&& header->data<data)
        {
            header=header->next;
        }
        if(insert_node==header){
            temp->next=header;
            header=temp;
        }
        else{
            temp->next=header->next;
            header->next=temp;
        }
    }
}
void display_list(Node* &header){
    Node* temp=header;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<" "<<endl;
}

int main(){

    Node*first= new Node(10);
    Node*tail=first;
        // Node*tail=NULL;
    Insert_node(tail,20);
    Insert_node(tail,30);
    Insert_node(tail,50);
    display_list(first);
    Sorted_list_insert(first,40);
    display_list(tail);
    return 0;
}
