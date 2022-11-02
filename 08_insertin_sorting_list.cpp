#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    // ! constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertat_tail(Node* &tail, int d){
    
    // creating new node;
    Node* temp = new Node(d);
    tail->next=temp;
    tail=tail->next;
}

void insertin_sortinglist(Node* header,int data){

    Node*temp=new Node(data);
    

if( header==NULL || header->data>=data){
    temp->next=header;
    header=temp;    
}
else{
Node*q=header;
    while(q->next!=NULL && q->next->data<data)
    {
        cout<<q->next->data<<endl;
        q=q->next;
    }
   temp->next=q->next;
   q->next=temp;

 
}
}

void display(Node* &header){
    Node*temp=header;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main(){
     
     Node *first =new Node(2);
    Node *header=first;
     insertat_tail(header,3);
     insertat_tail(header,4);
     insertat_tail(header,6);
     insertat_tail(header,7);
    //  display(header);
     insertin_sortinglist(first,5);
     display(first);

     return 0;

}
