

#include <iostream>
#include <queue>
#include <stack>

void AddCustomer(std::queue<int> &Queue, int ID)
{
    Queue.push(ID);
}
void ServeCustomer(std::queue<int> &Queue)
{
    if(Queue.empty() == true)
    {
        return;
    }
    Queue.pop();
}
int Nextcustomer(std::queue<int> &Queue)
{
    if(Queue.empty() == true)
    {
        return 0;
    }
    return Queue.front();
}
bool IsEmpty(std::queue<int> &Queue)
{
   return Queue.empty();
}


int main()
{

    std::queue<int> myQueue;

AddCustomer(myQueue, 1515);
AddCustomer(myQueue, 1516);
AddCustomer(myQueue, 1517);

ServeCustomer(myQueue);
ServeCustomer(myQueue);

std::cout << Nextcustomer(myQueue) << std::endl;

std::cout << IsEmpty(myQueue) << std::endl;
ServeCustomer(myQueue);
std::cout << IsEmpty(myQueue) << std::endl;

    return 0;
}