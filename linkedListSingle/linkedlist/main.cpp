

#include <iostream>

class node{
    public:
    int value;
    node *next;
};


node *CreateNode(int value)
{
    node *NewNode = new node;
    NewNode->value = value;
    NewNode->next = NULL;
    return NewNode;
}

void PushNode(node **head, node* New_Node)
{
    New_Node->next = *head;
    *head = New_Node;
}

void printNodeList(node *head)
{
    node *temporary = head;
    while(temporary != NULL)
    {
        std::cout << temporary->value << " - ";
        temporary = temporary->next;
    }
    std::cout << std::endl;
}

void insertNodeEnd(node *&head, int number)
{
    node *temporary = head;
    node *New_Node = new node;
    New_Node->value = number;
    New_Node->next = NULL;
    if(temporary == NULL) // No next node
    {
       // New_Node->next = head; // aqui es ya es un null de por si
        head = New_Node;
        return;
    }
    while(temporary != NULL)
    {

        if(temporary->next == NULL)
        {
            temporary->next = New_Node; //  sets temporary->next to the position of new Node
            //New_Node->next = NULL; // sets new node ->next to null as the end, ya lo hice no hace falta ya puse a next
            return;
        }
        temporary = temporary->next;
    }

}

void InsertBeforeValue(node *&head, int index, int ValueToInsert) // aqui podrias usar **head, y apuntar directo al primer nodo pero tendria que usar &head en la declaracion de la funcionn
{
    node *temporary = head;

    if(head == NULL)
    {
        return;
    }
    if(head->value == index)//es el primer nodo
    {
        node *New_Node = new node;
        New_Node->value = ValueToInsert;
        New_Node->next = head; //here i grab the old value, which is head
        head = New_Node; // then i move the head back
        return; // termina la funcion
    }

    while(temporary != NULL)
    {
            if(temporary->next != nullptr && temporary->next->value == index)
            {
                node *New_Node = new node;
                New_Node->value = ValueToInsert;
                New_Node->next = temporary->next; //here i grab the next value of temporary
                temporary->next = New_Node;      
                return;  
            }
            temporary = temporary->next;
    }

}

void Deletenode(int Index, node *&head)
{

    node *temp = NULL;
    node *temporary = head;
if(head == NULL)
{
    return;
}
if(head->value == Index)
{
    node* temp = head;
    head = head->next;
    delete temp;
    return;
}

while(temporary != NULL)
{
    if(temporary->next != NULL && temporary->next->value == Index )
    {
        temp = temporary->next;
        temporary->next = temporary->next->next; //este es el que apunta al final
        delete temp;
        return;
    }
temporary = temporary->next;
}
}


void reverseLinkedList(node **head)
{
node *prev = NULL;
node *next = NULL;
node *current = *head; // no modifico head, copio la direccion head, y luego me permito modificar todo.

if(*head == NULL)
{
    return;
}
while(current != NULL)
{

    next = current->next;
    current->next = prev;
    prev = current;
    current = next;

}

*head = prev;// modifico head directamente, la direccion a donde head esta apuntado. (modifico la llamada head = first node ahora head -> prev)
}

void DestroyList(node **head)
{

    node *next = NULL;
    node *temporary = *head;
    while(temporary != NULL)
    {
        next = temporary->next;
        delete temporary;
        temporary = next;
    }
    *head = NULL; //asi el head original queda apuntando a null, igual que si fuera sin existir
}

int ListLenght(node *head)
{
    int counter = 0;

    while(head != NULL)
    {
        counter++;
        head=head->next;
    }

return counter;

}

node *findNodebyIndex(int index, node *head)
{

if(head == NULL)
{
    return head;
}
while(head != NULL)
{
    if(head->value == index)
    {
        return head;
    }

head = head->next;
}
return nullptr;
}

int main()
{

    node *head = NULL;
    node *tmp = NULL;
    
    for(int i = 0; i<5; i++)
    {
       tmp = CreateNode(i);
       PushNode(&head,tmp);
    }
printNodeList(head);
insertNodeEnd(head,70);
printNodeList(head);

int count = ListLenght(head);
std::cout << count  << " that is my counter " << std::endl;
Deletenode(2,head);
count = ListLenght(head);
std::cout << count  << " that is my counter " << std::endl;



DestroyList(&head);

    return 0;
}