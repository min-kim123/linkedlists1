#include <iostream>
#include "student.h"
#include "node.h"
using namespace std;
/*
Author: Min Kim
Program Description: This is a sample program to show that my node.h and node.cpp work.
Date: 1/14/23
*/


int main(){
    //create new Students, put the ID in, then add Student to Node
    Student* student1 = new Student();
    student1->id = 123;
    Node* node1 = new Node(student1);

    Student* student2 = new Student();
    student2->id = 900;
    Node* node2 = new Node(student2);

    Student* student3 = new Student();
    student3->id = 456;
    Node* node3 = new Node(student3);

    //connect nodes
    node1->setNext(node2);
    node2->setNext(node3);
    node3->setNext(NULL);

    //print nodes starting from node1
    cout << node1->getStudent()->id << " ";
    cout << node1->getNext()->getStudent()->id << " ";
    cout << node1->getNext()->getNext()->getStudent()->id;
    /*
    h->setNext()
    cout << "IDs: ";
    while (h != NULL) {
        cout << h->getStudent()->id << " ";
        h = h->next;
    */
    

    
    /*
    char input[10];
    while (cont == true) {
        cout << "Add, print, or quit? (add/print/quit): ";
        cin.getline(input, 10);
        if (strcmp(input, "add") == 0) {//user inputs "add"
            add();
        }
        else if (strcmp(input, "print") == 0) {//user inputs "print"
            print(Node* head);
        }
        else if (strcmp(input, "quit") == 0) {//user inputs "quit"
            cont = false;
        }
        else {//something else
            cout << "Invalid input." << endl;
        }
    }  */
  return 0;
}