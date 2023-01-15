#include <iostream>
#include "node.h"
using namespace std;


void add(int newvalue, Node*& pHead) {
    Node* current = pHead;
    if (current == NULL) {
        pHead = new Node();
        pHead->setValue(newvalue);
    }
    else {
        while (current->getNext() != NULL) {
            current = current->getNext();
        }
        current->setNext(new Node());
        current->getNext()->setValue(newvalue);
    }

}

void print(Node* pHead) {
    if (pHead == NULL) {
        cout << "list: ";
    }
    if (pHead != NULL) {
        cout << pHead->getValue() << " ";
        print(pHead->getNext());
    }
}
int main() {
    Node* pHead = NULL;
    add(5, pHead);
    print(pHead);
    add(7, pHead);
    print(pHead);
    add(2, pHead);
    print(pHead);
}