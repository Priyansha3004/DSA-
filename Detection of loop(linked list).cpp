 #include<iostream>
 using namespace std;

 //detecting a loop in a linked list 
 
class Node
{
    public:
    int data;
    Node* next;
};
Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->next = NULL;
    return (node);
}
bool detectLoop(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = head;
    if (detectLoop(head))
    {
        cout << "Loop found";
    }
    else
    {
        cout << "No Loop found";
    }
    return 0;
}