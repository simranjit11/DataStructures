#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    struct Node* pre;
};
 Node* head=NULL;
 Node* tail=NULL;
void insertNodeAtBeg(int value){
    Node* new_node=new Node;
    new_node->data=value;
    new_node->pre=NULL;
    if(head==NULL){
        head=new_node;
        tail=new_node;
        new_node->next=NULL;
        
    }
    else{
        head->pre=new_node;
        new_node->next=head;
        head=new_node;
    }
    
}

void insertNodeAtEnd(int value){
    Node* new_node=new Node;
    Node* tail=head;
    new_node->data=value;
    new_node->next=NULL;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new_node;
    new_node->pre=tail;

}

void insertAfterNode(struct Node* insert_after, int value){
    Node* new_node=new Node;
    new_node->data=value;
    new_node->next=insert_after->next;
    insert_after->next->pre=new_node;
    insert_after->next=new_node;
    new_node->pre=insert_after;
    
    }

void display(){
    cout<<"Displaying doubly linked list: "<<endl;
    Node* ptr=head;
    cout<<"DATA     ADDRESS         PREVIOUS       NEXT"<<endl;
    while(ptr!=NULL){
        cout<<ptr->data<<"       "<<ptr<<"       "<<ptr->pre<<"      "<<ptr->next<<endl;
        ptr=ptr->next;
    }
}
void displayBackwards(){
    cout<<"Displaying doubly linked list in reverse: "<<endl;
    Node* ptr=tail->next;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->pre;
    }
}




int main(){
    insertNodeAtBeg(10);
      insertNodeAtBeg(20);
        insertNodeAtBeg(30); 
          insertNodeAtBeg(40);
            insertNodeAtEnd(50);
                insertAfterNode(head,60);
                display();
                    cout<<endl;
                displayBackwards();

}
