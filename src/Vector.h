#ifndef VECTOR_H
#define VECTOR_H

#include <string>
using std::string

namespace Consolexcel {
class Vector {
    string* data;
    int capacity;
    int length;

  public:
    // Constructor
    Vector(int n = 1); 

    // add new element to at the back
    void push_back(string s);

    // Access an element at an arbitrary position
    string operator[] (int i); 

    // remove x index
    void remove(int x);

    // Find size of vector
    int size();

    ~Vector();
};
}

#endif
