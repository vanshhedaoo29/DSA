#include <iostream>
using namespace std;

#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1, rear = -1;

int main()
{
    int choice, item;
    cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";

    while (1){
        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1:
            if(rear == MAX_SIZE - 1){
                cout << "Overflow & Exit !!.\n";
            }
            else{
                cout << "Enter the element : ";
                cin >> item;
                if(front == -1){
                    front = rear = 0;
                }
                else{
                    rear++;
                }
                queue[rear] = item;
                cout << "Item Inserted : \n";
            }
            break;

            

        }


    }
}