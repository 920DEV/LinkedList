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
    Node* temp = new Node(d);

    temp->next=head;
    head=temp;
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

// sum of all elements of the data;

void sum_elements_list(Node* &header){
    Node*temp=header;
    int sum=0;
    while (temp!=NULL)
    {
        sum=sum+temp->data;
        temp=temp->next;
    }
    cout<<"The sum of all the element's in a linked list is:"<<sum;
}



int main(){
    Node *first= new Node(12);
    Node *header=first;

    insertt_element(header,13);
    insertt_element(header,4);
    insertt_element(header,5);
    insertt_element(header,3);
    display_list(header);

    cout<<" "<<endl;
    sum_elements_list(header);
   return 0;

}