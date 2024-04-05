#include "LinkedList.h"

template<typename T>
void LinkedList<T>::push(const T& item) {
  //Create a new node (set data & pointer values, update num_items)
  node<T>* newNode = new node<T>(item);
  //Check if list is empty
  if (head->next == nullptr)
    head = newNode;
  else 
    tail->next = newNode;
  //Set tail as new node
  tail = newNode;
  return;
}

template<typename T>
node<T>* LinkedList<T>::pop() {
  //Create temp node to hold head
  node<T>* temp = head;
  //Set head to next node, and delete temp
  head = head->next;
  temp->next = nullptr;
  //Return old head
  return temp;
}

template<typename T>
node<T>* LinkedList<T>::front() {
  return head->data;
}

template<typename T>
bool LinkedList<T>::empty() {
  //Check if list is empty
  if (head->next == nullptr)
    return true;
  return false;
}

template<typename T>
void LinkedList<T>::move_to_rear(LinkedList<T> &myList) {
  //Create temp node to hold old head
  node<T>* temp = myList.pop();
  //Push temp node to end of list
  myList.push(temp);
}

template<typename T>
void insertion_sort(LinkedList<T> &myList) {
  int i, j, key;
  bool insertionNeeded = false;
  for (iterator<T>::iterator iter = myList.begin(); iter != myList.end(); ++iter) {
    key = iter->data;
    insertionNeeded = false;
    if (iter != myList.begin()) {
      for (i = j - 1; i >= 0; i--){
        if (key < myList[i]) {
          myList[i + 1] = myList[i]; // larger values move right
          insertionNeeded = true;
        }
        else
          break;
      }
    }
    if (insertionNeeded)
      myList[i + 1] = key; //Put key into its proper location
  }
}
