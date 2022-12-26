#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node*previous;

    Node(int data){
            this->data=data;
            this->next=NULL;
            this->previous=NULL;
    }
    ~Node(){
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};

// ~ function of inserting at head;
void insert_at_head(Node* &tail,Node* &head,int data){
    if(head==NULL){
        Node*temp=new Node(data);
        head=temp;
    }
    else{
        Node*temp=new Node(data);
        temp->next=head;
        head->previous=temp;
        head=temp;
        tail=temp;
    }
}

// ! function for inserting Node at tail
void insert_tail(Node* &tail,Node* &head,int data){
    if(tail==NULL){
        Node*temp=tail;
        tail=temp;
        head=temp;

    }
    else{
        Node*temp=new Node(data);
        tail->next=temp;
        temp->previous=tail;
        tail=temp;
    }
}
// creating a function of inserting Node in any position in a linked list.

void insert_position(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insert_at_head(tail,head, d);
        return;
    }

   else{
     Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insert_tail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> previous = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> previous = temp;
   }
}

void delte_nodes(Node* &header,int position){
    if(position==1){
        Node*temp=header;
        header->next->previous=NULL;
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
        temp->previous=NULL;

        delete temp;
    }


}

void display_list(Node* &header){
    Node*temp= header;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<" "<<endl;
}

int main(){
    Node*tail=NULL;
    Node*head=NULL;
insert_at_head(tail,head,11);
insert_at_head(tail,head,12);
insert_at_head(tail,head,13);
insert_at_head(tail,head,14);
display_list(head);
insert_position(tail,head,4,20);

display_list(head);

delte_nodes(head,2);
delte_nodes(head,1);
display_list(head);
}