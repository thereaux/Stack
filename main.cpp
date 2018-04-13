#include "Node.h"
#include "Stack.h"
#include <iostream>
using namespace std;

int main(){
    Node* node = new Node("node1", nullptr);
    Node* node2 = new Node("node2", nullptr);
    node->set_Node(node2);
    cout << node->get_Node()->get_data() << endl;
    cout << node->get_data() << endl;
    cout << node->get_Node()->get_Node() << endl; //should return NULL
    node->set_data("bye");
    cout << node->get_data() << endl;

//test _STACK
  Stack* s = new Stack(node);
  cout << s->is_empty()<< endl;
  cout << "\nis Empty: should be 0 ^ " << endl;
  cout << s->size()<< endl;
  cout << "\nsize: should be 1 " << endl;

  s->push("lizard");

  cout << "added lizard to the stack" << endl;
  cout << s->size()<< endl;
  cout << "size: should be 2 " << endl;

  cout << s->pop()<< endl;
  cout << "pop: should return lizard" << endl;
  cout << s->peek()<< endl;
  cout << "\npeek: should be bye " << endl;
    return 0;
}
