#pragma once
#include <string>
#include <iostream>
using namespace std;

struct dataType {
	char type;
  string lname;
	string fname;
	int age;
};

struct Node {
	dataType data;
	Node* nextPtr;
};

class Linked {
  protected:
  	Node* headPtr;
    Node* tailPtr;
  public:
  	Linked();
  	~Linked();
  	void addNode(dataType d);
  	void delNode(string name);
  	void printList();
};
