#include "LinkedList.h"
#include "Functions.h""

int main() {
  // Instantiate the queue with integers and push 10 values into the queue
  LinkedList<int> myList;
  for (int i = 1; i <= 10; ++i) {
      myList.push(i);
  }
  
  // Display all the elements in the queue
  node<int>* current = myList.front();
  while (current->next != nullptr) {
    cout << current->data;
    current = current->next;
  }

  
  return 0;
}
