#include<bits/stdc++.h>


using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};



// Todo) Inserting elements in linked list from the ends.

void insertt_element(Node* &head,int d){
    
 // Allocating new node;
    Node    * temp = new Node(d);

    temp->next=head;
    head=temp;
}
// ~ Minimum element in a linked list.
int maximum(Node* &head){

    // ? creating a new node
    Node* temp= head;
    int max = INT64_MIN;            // taking lowest minimum number.
    while (temp!=NULL)
    {
        if(temp->data>max){
            max=temp->data;
           
            
        }
        temp=temp->next;
        
    }
    return max;


}
// ! finidng minimum using recursion
    
    int minimum(Node* &header){

        // ? creatng a new node.
        Node*temp = header;
        int mini=0;


        if(temp==0){
            return  INT64_MAX;          // talking the highest integer value in my architecture.
        }
        mini=minimum(temp->next);

        if(temp->data>mini){
            mini=temp->data;
        }
        else{
            return temp->data;
        }
    }

// displaying elements of the linked list.
void display_list(Node* &head){
    Node* header=head;
    while (header!=NULL)
    {
        cout<<header->data<<" ";
        header=header->next;
    }
    
}



int main(){
    Node *first= new Node(120);
    Node *header=first;

    insertt_element(header,13);
    insertt_element(header,4);
    insertt_element(header,5);
    insertt_element(header,3);
    display_list(header);

    cout<<" "<<endl;
    cout<<"Max element is "<<maximum(header)<<endl;     // ~ It shows the greatest number in any given linked list.
    cout<<"Min element is "<<minimum(header)<<endl;     // todo) it shows the least number present in any given linked list.
   return 0;

}
