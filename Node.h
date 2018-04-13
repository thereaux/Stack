#ifndef _NODE_H
#define _NODE_H
#include <string>

class Node{
  public:
    Node(std::string data, Node* n);
    std::string get_data() const;
    Node* get_Node() const;
    void set_data(std::string data);
    void set_Node(Node* n);
    ~Node();
  private:
    std::string data;
    Node* node;
};
#endif
