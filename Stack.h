#ifndef _STACK_H
#define _STACK_H
#include <string>
#include "Node.h"

class Stack{
  public:
    Stack();
    Stack(Node* n);
    bool is_empty() const;
    int size() const;
    void push(std::string item);
    std::string pop();
    std::string peek() const;
    ~Stack();
  private:
    Node* top;
    int length;
};
#endif
