#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "student.h"

class Node {
    public:
    Node();
    ~Node();
    void setValue(int newvalue);
    int getValue();
    void setNext(Node* newnext);
    Node* getNext();
    private:
    int value;
    Node* pNext;
};
#endif