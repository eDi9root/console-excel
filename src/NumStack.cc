#include "NumStack.h"


namespace Consolexcel {

NumStack::NumStack() : start(NULL, 0) { current = &start; }

void NumStack::push(double s) {
    Node *n = new Node(current, s);
    current = n;
}

double NumStack::pop() {
    if (current == &start) {
        return 0;
    }
    double s = current->s;
    Node* prev = current;
    current = current->prev;

    // Delete popped node
    delete prev;
    return s;
}

double NumStack::peek() {
    return current->s;
}

bool NumStack::is_empty() {
    if (current == &start) {
        return true;
    }
    return false;
}

NumStack::~NumStack() {
    while (current != &start) {
        Node* prev = current;
        current = current->prev;
        delete prev;
    }
}
}
