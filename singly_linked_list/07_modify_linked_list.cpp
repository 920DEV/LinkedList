#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
// ! Creatin function for insertion of element in linked list.
void insertion(Node* &header,int data){
    Node* temp= new Node(data);
    temp->next=header;
    header=temp;
    
}


// Linear search modification.
Node LinearSearch(Node* &header, int key){
    Node* q=NULL;

    Node *temp=header;
    while(temp!=NULL){
        if(temp->data == key){
            cout<<"The element we were searching were found:"<<endl;

            q->next=temp->next;

            temp->next=header;

            header=temp;
            
        }
        q=temp;
        temp=temp->next;
    }
}




void display(Node* &temp){

Node*header=temp;
    while (header!=NULL)
    {
        cout<<header->data<<" ";
        header=header->next;
    }
    
}



int main(){
Node* header= new Node(10);
Node*first= header;
insertion(first,20);
insertion(first,30);
insertion(first,40);
insertion(first,50);
display(first);

LinearSearch(first,30);
cout<<"Linked list after the searching of element:"<<endl;

display(first);
return 0;
}      