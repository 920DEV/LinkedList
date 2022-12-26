#include<bits/stdc++.h>


using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
            int val=this->data;
            if(next!=NULL){
                delete next;
                next=NULL;
            }
            cout<<"memory free with the data: "<<data<<endl;
    }

};
// inserting elements in doubly linked list.

void insert(Node*&header, int data){
// creating a new node;
Node*temp=new Node(data);



if(header==NULL){

    header=temp;
}
else{
   header->next=temp;

 temp->prev=header;  

    header=temp;
}

}


void delete_node(Node*&header, int position){
        int count=1;
        if(position==1){
            Node*temp=header;
            header->next->prev=NULL;
            header=temp->next;
            temp->next=NULL;
            delete temp;

        }
        
        else{
           Node*current=NULL;
        Node*temp=header;

        int count=1;
        while(count<position){
            current=temp;
            temp=temp->next;
            count++;
        }

        current->next=temp->next;
        temp->next=NULL;
        temp->prev=NULL;

        delete temp;
    }
}
void display(Node*&header){
    Node*temp=header;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<" "<<endl;
    
}

int main(){
    Node*first=new Node(1);
    Node*header=first;

    insert(header,20);
    display(first);
    insert(header,30);
    insert(header,40);
    insert(header,50);
    insert(header,60);
    display(first);
    delete_node(first,3);
    display(first);

return 0;
}
