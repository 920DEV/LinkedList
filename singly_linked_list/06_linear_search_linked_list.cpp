#include<bits/stdc++.h>

using namespace std;


class Node{
    public: 
    int data;
    Node* next;
    Node(){
        this->data=data;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void inserting_athead(Node* &header, int d){

    // creating a new Node.

    Node* temp=new Node(d);
    temp->next=header;
    header=temp;;

}


Node* linear_search(Node* &header,int key){
    // ? creating a new node pointing to the first address of the element in the linked list. 

    Node* temp=header;


    while (temp!=NULL)
    {

        if(temp->data==key){
            cout<<"The data is present in the given linked list "<<temp->data<<endl;
            return temp;
        }
        temp=temp->next;
    }
    


}

Node* linearSearch_recursion(Node* &header, int key){

     Node *temp=header;
     if(temp!=NULL){
        return NULL;
     }
 
    else if(temp->data==key)
   {
     cout<<"The data is present in the given linked list"<<temp->data;
    return temp;
   }
  return linearSearch_recursion(header->next,key);
   
}

void display(Node* &header){
    Node*temp=header;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<" "<<endl;
}

int main(){
Node* first= new Node(1);

Node*header=first;
inserting_athead(header,2);
inserting_athead(header,3);
inserting_athead(header,4);
inserting_athead(header,5);
display(header);
linear_search(header,2);
linearSearch_recursion(header,3);
display(header);

return 0;
}
