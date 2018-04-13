#include "Node.h"

Node::Node(std::string data, Node* n){
  this->data = data;
  node = n;
}

std::string Node::get_data() const{return data;}
void Node::set_data(std::string d){
  data = d;
}

Node* Node::get_Node() const{return node;}

void Node::set_Node(Node* n){node = n;}

Node::~Node(){
    delete node;
}
