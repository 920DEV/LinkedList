#include<bits/stdc++.h>

using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node (){
    };
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertion_node(Node* &header,int data){
    Node* temp= new Node(data);
    // inserting at tail;

    header->next=temp;
    header=temp;
}
void insertion_at_head(Node*&header,int data){
    Node*temp = new Node(data);
    temp->next=header;
    header=temp;
}
void concat_list(Node* &head,Node* &tail){

    // ~ creating a temporary Node.
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=tail; 
    
}
void display_list(Node* header){
    // creating new NOde;
    Node*temp=header;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<" "<<endl;
}


int main(){

    // creating first NOde 

    Node *first= new Node(30);
    Node* head= new Node(1);        // ~ different Node which sould be concatinate in the liked list.
    Node*tail=first;
    Node*tail2=head;

    insertion_node(tail,40);
    insertion_node(tail,50);
    insertion_node(tail,60);

    display_list(first);

  insertion_node(tail2,10);
  insertion_node(tail2,20);
  display_list(head);

  concat_list(head,first);
  cout<<"The linked list after concatination is :"<<endl;
  display_list(head);
  

  return 0;
}