# ifndef STACK_H
# define STACK_H

#include <sting>

using std::string

namespace Consolexcel {
class Stack {
    struct Node {
        Node* prev;
        string s;

        Node(Node* prev, string s): prev(prev), s(s) {}
    };

    Node* current;
    Node start;

  public:
    Stack();
    
    // add new element to the top
    void push(string s);

    // return and remove the top element
    string pop();

    // return the top element (not remove)
    string peek();

    // return T/F if the stack is empty
    bool is_empty();

    ~Stack();
};
}

#endif
