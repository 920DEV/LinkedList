#include<bits/stdc++.h>

using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node(int data){
        this->next=NULL;
        this->data=data;
    }

};
class linked_list{
    public:
    linked_list*third = NULL;
};

void insert_list(Node* &header,int data){
    Node*temp= new Node(data);
    // inserting at tail of the linked list;
    header->next=temp;
    header=temp;
}
// ~ merging of two linked list.
Node* merging(Node*first, Node*second){
    Node*third=NULL;
    Node*last=NULL;
    if(first->data<second->data){
        third=last=first;
        first=first->next;
        last->next=NULL;
    }
    else{
        third=last=second;
        second=second->next;
        last->next=NULL;
    }
    while(first!=NULL && second !=NULL){
        if(first->data<second->data){
            last->next=first;
            last=first;
            first=first->next;
        }
        else{
            last->next=second;
            last=second;
            second=second->next;
        }
    }
    if(first==NULL){
        last->next=second;

    }
    else{
        last->next=first;
    }
    return third;
}


void display_list(Node* &header){
    Node* temp=header;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<" "<<endl;
}
int main(){
    cout<<"first linked list";
    Node*first=new Node(1);
    Node*header=first;
    insert_list(header,10);
    insert_list(header,20);
    insert_list(header,30);
    insert_list(header,40);
    insert_list(header,50);
    display_list(first);
    cout<<" second linked list"<<endl;


    Node*second=new Node(2);
    Node*head= second;
    insert_list(head,15);
    // insert_list(head,24);
    insert_list(head,37);
    // insert_list(head,41);
    // insert_list(head,48);
    display_list(second);
cout<<"Mergin linked list"<<endl;
// creating new Node
Node*third=merging(first,second);
display_list(third);
    return 0;
}