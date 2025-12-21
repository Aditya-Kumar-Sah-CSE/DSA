#include<iostream>
using namespace std;

class Node{
public:

int data ;
Node *next;
// constructor 
Node(int val){
  data = val;
  next=Null;

}
}

class List {
Node *head;
Node *tail;

public:
List(){
head = tail = NULL;
}

void push_front(int val){
  Node* newNode = new Node(val);
 // Node newNode(val);

  if(head == NULL){
head = tail = newNode;
    return;
  }else{
  newNode->new=head;
    head = newNode;
  }

}


};

int main(){


}
