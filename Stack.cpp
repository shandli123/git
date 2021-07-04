#include <iostream>

#include <string>

using namespace std;

#define SIZE 5

template <class T>
class Stack
{
private:
    int top;
    T st[SIZE];

public:
    Stack();
    void push();
      void display();   
    T pop();

    T peek();
    bool isFull();

    bool isEmpty();
};

template <class T>
Stack<T>::Stack()
{
    top = -1;
}

template <class T>
void Stack<T>::push()
{

    if (isFull())
    {

        cout << "Stack is full\n";
        return;
    }
    cout<<"enter an element"<<endl;
    T k;
    cin>>k;

    cout << "Inserted element " << k << endl;

    top = top + 1;

    st[top] = k;
}
template <class T>
void Stack<T>::display()
{
      if(isEmpty())
      {
          cout<<"the stack is empty\n";
          return ;
      }
      
      for(int i=0;i<=top;i++)
      cout<<st[i]<<" ";

      cout<<"\n";
}

    template <class T>
    bool Stack<T>::isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    template <class T>
    bool Stack<T>::isFull()
    {

        if (top == (SIZE - 1))
            return 1;
        else

            return 0;
    }

    template <class T>
    T Stack<T>::pop()
    {
        if (isEmpty())
        {
            cout << "The Stack Empty" << endl;
        }
        T popped_element = st[top];

        top--;

        cout << "the popped element is " << popped_element << endl;
        return popped_element;
    }

    template <class T>
    T Stack<T>::peek()
    {

        T top_element = st[top];
        cout<<"the top element is :"<<top_element;
        return top_element;
    }

    int main()
    {

        Stack<int> integer_stack;
        Stack<string> string_stack;
        int choice = 2;
        while (1)
        {
            cout << "1.PUSH IN INTEGER STACK \n2.PUSH IN STRING STACK \n3.POP IN INTEGER STACK \n4.PEEK INTO INTEGER STACK\n5.DISPLAY INTEGER STACK\n6.POP IN STRING_STACK\n7.PEEK INTO STRING_STACK\n8.DISPLAY STRING STACK\n9.EXIT" << endl;
            cout << "Enter choice";
            cin >> choice;
            switch (choice)
            {
            case 1:
                integer_stack.push();
                break;
            case 2:
                string_stack.push();
                break;
            case 3:
                integer_stack.pop();
                break;
            case 4:
                integer_stack.peek();
                break;
            case 5:integer_stack.display();
                   break;    
            case 6:
                string_stack.pop();
                break;
            case 7:
                string_stack.peek();
                break;
            case 8:string_stack.display();
                  break;    
            case 9:
                exit(0);
            default:
                cout << "Please enter again with valid option" << endl;
            }
        }

        return 0;
    }