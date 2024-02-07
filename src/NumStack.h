#ifndef NUMSTACK_H
#define NUMSTACK_H

#include <string>
using std::string;

namespace Consolexcel {

class NumStack {
    struct Node {
        Node* prev;
        double s;

        Node(Node* prev, double s) : prev(prev), s(s) {}
    };

    Node* current;
    Node start;

  public:
    NumStack();
    
    void push(double s);

    double pop();

    double peek();

    bool is_empty();

    ~NumStack();
};
}

#endif
