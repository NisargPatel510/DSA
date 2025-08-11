#include<queue>
#include<iostream>
#include<string.h>
const int S = 100; 
using namespace std();
class Person{
    public :
    String name;
    String num;
};
class Queue{
    public :
Person queue[S];
int front=0 , rear=-1;


void enqueue(Person p){
    if(rear==99)
        cout<<"Queue is FuLL!";
        return ;
    queue[++rear]=p;
}
void dequeue() {
        if (front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Served: " << q[front].name << ", " << q[front].phone << endl;
        front++;
    }
    void display() {
        if (front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Current Queue:\n";
        for (int i = front; i <= rear; ++i) {
            cout << q[i].name << " - " << q[i].phone << endl;
        }
    }
};
int main(){
        Queue callQueue;
    
    Person p1 = {"Alice", "9876543210"};
    Person p2 = {"Bob", "9123456789"};

    callQueue.enqueue(p1);
    callQueue.enqueue(p2);

    callQueue.display();
    
    callQueue.dequeue();
    callQueue.display();

    return 0;
}
