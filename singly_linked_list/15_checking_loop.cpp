#include<bits/stdc++.h>


using namespace std;

class Node{
    public:
    int data;
    Node* next;


    // constructor.
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};


void insert_node(Node*&header, int data){
    Node*temp= new Node(data);
    // in case of header is NULL;

    if(header==NULL){
        header=temp;
    }
    else{

        // ! inserting at the tail of the linked list.
      temp->next=header;
      header=temp;
    }

}

// checing any loop is present in the linked list.
int check_list(Node*&header){
    // creating two node for traversign the linked list.
    Node*front=header;
    Node*back=header;
    do{
        front=front->next;
        back=back->next;
        if(front!=NULL){
            front=front->next;
            
        }
        else{
            front=NULL;
        }
    }while(front&&back);

    if(front==back){
        return true;
        cout<<"true"<<endl;
    }
    else{
        return false;
        cout<<"false"<<endl;
    }
}
void print_list(Node*&header){
    
    while(header!=NULL){
        cout<<header->data<<" ";
        header=header->next;
    }
    cout<<""<<endl;

}


int main(){

    Node*first=new Node(1);
    Node*header=first;

    insert_node(header,20);
    insert_node(header,30);
    insert_node(header,40);
    insert_node(header,50);
    insert_node(header,60);

    print_list(header);
    int a= check_list(header);
    cout<<a<<endl;

   return 0;
}
