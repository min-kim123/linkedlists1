#include "node.h"

Node::Node() {
    pNext = NULL;
}

Node::~Node() {
    delete &value;
    pNext = NULL;
}

void Node::setValue(int newvalue) {
    value = newvalue;
}

int Node::getValue() {
    return value;
}

void Node::setNext(Node *newnext) {
    pNext = newnext;
}

Node* Node::getNext() {
    return pNext;
}