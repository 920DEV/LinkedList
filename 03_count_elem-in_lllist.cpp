#include<bits/stdc++.h>

using namespace std;

class Node {
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

// * function for insertion in linked list.

void insertin_head(Node* &head,int d){
    
 // creating new node;
    Node* temp = new Node(d);

    temp->next=head;
    head=temp;
}
//~ counting elemtnts in linkd list using iteration method

// int count_elem(Node*head){
//     int count=0;
//     while (head!=NULL)
//     {
//         count++;
//         head=head->next;
//     }
//     return count;
// }

// todo) Counting elements in linked list using recursion.

int count_elem(Node*head){
    int count=0;
    if (head!=0)
    {
        count=count_elem(head->next);
        return count+1;}
        else{
            return count;
        }
    
}
// *function for displaying elements in liked list.

void display1(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main(){
    Node *first = new Node(10);
    Node*header =first;
    display1(header);
    

    insertin_head(header,20);
    insertin_head(header,30);
    insertin_head(header,40);
    insertin_head(header,50);
    insertin_head(header,60);
    insertin_head(header,70);
    display1(header);
    cout<<" "<<endl;
    cout<<"The number of elements in the given linked list is :"<<count_elem(header)<<endl;
return 0;
}