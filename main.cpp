#include <iostream>
#include "student.h"
#include "node.h"


void add() {
    
}
void print() {

}

int main(){
    char input[10];
    while (cont == true) {
        cout << "Add, print, or quit? (add/print/quit): ";
        cin.getline(input, 10);

        if (strcmp(input, "add") == 0) {
            add();
        }
        else if (strcmp(input, "print") == 0) {
            print();
        }
        else if (strcmp(input, "quit") == 0) {
            cont = false;
        }
        else {
            cout << "Invalid input." << endl;
        }
    }
    
    

  Node* node1;
  Student* student1;
  student1 = new Student();
  node1 = new Node(student1);
  
  Node* node2;
  Student* student2;
  student2 = node1->getStudent();

  Node* node3;
  node1->setNext(node1);
  node3 = node1->getNext();
  
  return 0;
}