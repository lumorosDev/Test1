

#include <iostream>

class node{
public:
    int value;
    node *next;
    node *prev;
};

struct linkedlist{

    public:
    node *head;
    node *tail;

};

void InitializeList(linkedlist &list)
{

    list.head = nullptr;
    list.tail = nullptr;

}

node *CreateNode(int value_to_Insert)
{
    node *New_Node = new node;
    New_Node->value = value_to_Insert;
    New_Node->next = nullptr;
    New_Node->prev = nullptr;
    return New_Node;
}

void PushFront(node **head, node *New_node)
{
    if (*head != nullptr)
    {
    (*head)->prev = New_node; //con esto actualizo la dirrecion de del item que esta adelante para que apunte hacia el nuevo item de atras. 
    }

    New_node->next = *head; //ahora me muevo hacia adelante
    *head = New_node; // ahora head apunta a New_node
    New_node->prev = nullptr; //apunta a la cola, que siempre es null

}


void PushBack(node *&head, node *New_node)
{

node *temporary = head;
if(head == nullptr)
{
    New_node->next = head; //ahora me muevo hacia adelante
    head = New_node; // ahora head apunta a New_node
    New_node->prev = nullptr; //apunta a la cola, que siempre es null
    return;
}
while(temporary != nullptr)
{
    if(temporary->next == nullptr) //im istting on the end
    {
        New_node->next = nullptr; // nuevo end
        temporary->next = New_node;
        New_node->prev = temporary;
        return;
    }

temporary = temporary->next;
}
}

void PushFrontDouble(linkedlist *list, node *New_node)
{
    New_node->next = list->head; //ahora me muevo hacia adelante
    New_node->prev = nullptr; //apunta a la cola, que siempre es null

    if (list->head != nullptr)
    {
    (list->head)->prev = New_node; // New_Node <- A .. Actualiza la direccion de mi nodo que antes era el primero ( la prev de el) para el nuevo nodo de atras.
    }

    if(list->tail == nullptr)//lista vacia
    {
        (list->tail) = New_node; // apunta al primer nodo
    }

    list->head = New_node; // ahora head apunta a New_node

}


void pushBackDouble(linkedlist *list, node *New_NODE)
{

//primero deberia ver si la lista esta vacia
if(list->tail == nullptr)// la lista esta vacia osea este seria el primer nodo
{
/*
list->tail = New_NODE; //aqui ambos tendrian que apuntar al mismo nodo

New_NODE->next = list->head;
New_NODE->prev = nullptr;

list->head = New_NODE;
return;
*/
pushBackDouble(list,New_NODE); // si esta vacia hago un push normal y me salto implementar todo de nuevo.
return;
}
New_NODE->prev = list->tail; // apunto el nuevo nodo hacia 
New_NODE->next = nullptr;

(list->tail)->next = New_NODE; //apunto el nodo anterior hacia el nuevo
list->tail = New_NODE;

}

void printBackwards(linkedlist *list)
{

    node *temporary = list->tail;

while(temporary != nullptr)
{
    std::cout << temporary->value << " - ";
    temporary = temporary->prev;
}

std::cout << std::endl;

}

void printforward(linkedlist *list)
{
    node *temp = list->head;

    while(temp != nullptr)
    {
    std::cout << temp->value << " - ";
    temp = temp->next;
    }
    std::cout << std::endl;
}

void InsertAfterValue(linkedlist *list, int index, node *New_node)
{

    if(list->head == nullptr)//asumo que si head esta en null esta vacia la lista
    {
        return;
    }

    node *temp = list->head;
    while(temp != nullptr)
    {
        if(temp->value == index)
        {
            //lo primero temp esta sentado en index, por lo que tengo que (temp->next)->prev = New_NODE;
            if(temp == list->tail)//Ultimo de la lista
            {
                New_node->next = nullptr;
                list->tail = New_node;
                New_node->prev = temp;
                temp->next = New_node;
                return;
            }
            (temp->next)->prev = New_node;
            New_node->next = (temp->next);
            New_node->prev = temp;
            temp->next = New_node;
            return;
        }
        temp = temp->next;
    }
}



int main(){






    return 0;
}

