#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*previous;
    // constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->previous=NULL;

    }
    // ~ Destructor.
    ~Node(){
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};

// ! Note : In circlular linked list we can only insert element in the end of the list.s
// inserting a node in circular linked list, 1st when the list is empty, and when it isn't.

void insert_node(Node* &header,int element, int data){
    // if the list is emptly.
    if(header==NULL){
        Node* new_node= new Node(data);
        header=new_node;
        new_node->next = new_node;
    }
    else{
        // if the list is non-emptly list
        Node*temp=header;

        while (temp->data != element)
        {
            temp=temp->next;
        }
        Node*new_node= new Node(data);
        new_node->next = temp->next;
        temp->next = new_node;

        
    }
}
void insert_at_tail(Node* &header,int data){
    // creating a new Node 
    Node *new_node= new Node(data);
       if(header==NULL){
        
        header=new_node;
        new_node->next = new_node;
    }
    else{
        new_node->next=header;
        header->next=new_node;
    }


}
// delting Nodes in a circular linked list.

void delte_node(Node* &header, int value){

        if(header==NULL){
            cout<<" list is empty, please check again"<<endl;
            return;
        }
       else{
         Node*temp=header;
        Node*current=temp->next;

        while(current->data!=value){
                temp=current;

                current=current->next;
        }
        temp->next= current->next;
        // if there is one and only one node in the list.
        if(current==temp){
            header=NULL;
        }
        if(header==current){
            header=temp;
        }  
        current->next=NULL;
        delete current;
       }
}



// To traverse in circular linked list , the condition should be the the traversing should be stoped
void display_list(Node*&tail){
    // creating a new Node.
    Node* temp= tail;

    if(tail==NULL){
        cout<<"list is empty "<<endl;
        return ;
    }
    // todo) using " do while" loops as it atleast run one time, so in case if there is only single node then, it will run and print the data. 
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (tail!=temp);
    cout<<" "<<endl;
}

int main(){

    // Node*header = new Node(20);
    Node*header=NULL;

    insert_node(header,2,20);       // as out list is empty at first , this element provided would be pass randomly just vo validate condition.
    insert_node(header,20,30);
    insert_node(header,30,40);
    insert_node(header,40,50);

    insert_node(header,50,60);
    insert_node(header,60,70);
    
    display_list(header);

   delte_node(header,20);
   display_list(header);
    delte_node(header,30);
    display_list(header);
    delte_node(header,40);
    display_list(header);
    delte_node(header,70);
    display_list(header);
    return 0;
}