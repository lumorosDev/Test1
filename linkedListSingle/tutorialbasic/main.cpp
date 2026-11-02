

#include <iostream>

#include <vector>


class node{

    public:
    int number;
    node *next;

};

void printlist(node *head)
{

    node *temporary = head;
    while(temporary != NULL)
    {
        std::cout << temporary->number << " - ";
        temporary = temporary->next;
    }
    std::cout << std::endl;


}

node* CreateNode(int Value)
{
    node* NewNode = new node;
    NewNode->number = Value;
    NewNode->next = NULL;
    return NewNode;
}

node *InsertNode(node *head, node *node_to_insert)
{
node_to_insert->next = head;//first time points to Null
return node_to_insert;
}


int main()
{

node *head = nullptr;
//node *tail = nullptr;
node *tmp = nullptr;


for(int i = 0; i < 10 ; i++)
{
    tmp = CreateNode(i);
    head = InsertNode(head,tmp);
}

    printlist(head);



/*
    node n1;
    node n2;
    node n3;
    node *head;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    n1.number = 10;
    n2.number = 20;
    n3.number = 30;

    printlist(head);

    node n4;
    n3.next = &n4;

    n4.next = NULL;
    n4.number = 40;
*/

    

    return 0;

}