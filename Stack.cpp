#include "Stack.h"
#include "Node.h"

Stack::Stack(){
  top = NULL;
}

Stack::Stack(Node* n){
  top = n;
  length = 1;
}

bool Stack::is_empty() const {
  return length == 0;
}

int Stack::size() const {
  return length;
}

void Stack::push(std::string item){
  length++;
  Node* newTop = new Node(item, top);
  top = newTop;
}

std::string Stack::pop(){
  if(length == 0){
      return NULL;
  } else {
      length--;
      Node* oldTop = top;
      top = oldTop->get_Node();
      return oldTop->get_data();
    }
}
std::string Stack::peek() const {
  if(length == 0){
      return NULL;
  } else {
    return top->get_data();
  }
}

Stack::~Stack(){
  delete top;
}
