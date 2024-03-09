#include<iostream>
using namespace std;
class LLNode{
    public:
    int data;
    LLNode*next;
    LLNode*random;
    LLNode(){
        data=0;
        next=NULL;
    }
};
LLNode*copyofLL(LLNode*head){
    LLNode*temp=head;
    while (temp !=NULL){
        LLNode*temp2=new LLNode;
        temp2->data=temp->data;
        temp2->next=temp->next;
        temp->next=temp2;
        temp=temp->next->next;
    }
    temp=head;
    while(temp!=NULL){
        temp->next->random=temp->random->next;
    }

    LLNode*head2=head->next;
    temp=head;
    LLNode*temp2=head2;
    while (temp!=NULL){
        temp=temp->next->next;
        if (temp2->next!=NULL){
            temp2->next=temp2->next->next;
        }
            
        temp=temp->next;
        temp2=temp2->next;
    }

    return head2;
}
int main(){
   
    return 0;
}