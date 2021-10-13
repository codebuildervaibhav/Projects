#include <iostream>
using namespace std;


int top = -1;
class stack_man {
    int size = 100, stack[100];
public:
    void push(int data) {
        if (top >= size)
        {
            cout << "Stack Overflow...\n";
        }
        top++;
        stack[top] = data;
    }

    int pop() {
        
        return stack[top--];
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty...\n";
        }
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    stack_man obj;
    int choice, data, n;

    while (true) {
        cout << "____________________________________________\n";
        cout << "   STACK IMPLEMENTATION    \n";
        cout << "____________________________________________\n";
        cout << "1. Push\n2. Pop\n3. Size\n4. Display\n5. Exit\n";
        cout << "____________________________________________\n";
        cout << "Enter your choice --> ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter THE NUMBER ELEMENTS YOU WANT TO PUSH --> ";
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                cout << i << ". ";
                cin >> data;
                obj.push(data);
            }
            break;
        case 2:
            if (top == -1)
            {
                cout << "\nStack Underflow...Stack empty...\n\n";
            }
            else
            {
                cout << "\nEnter the nummber of elemenst you want to pop -->";
                cin >> n;
                for (int i = 0; i <= n; i++)
                {
                    data = obj.pop();
                    cout << "\nData --> " << data << "\n";
                }
            }
            break;
        case 3:
            cout << "\nStack size: " << top + 1 << "\n";
            break;
        case 4:
            obj.display();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid choice....please try again...\n";
        }
    }
    return 0;
}


