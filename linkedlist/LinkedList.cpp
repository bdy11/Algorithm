#include <iostream>
#include "LinkedList.h"
using namespace std;

void linked_list::push_back(int node_data)
{
   Node *newNode = new Node;
   newNode->data = node_data;
   newNode->next = NULL;
   if (head == NULL)
   {
      head = newNode;
      tail = newNode;
   }
   else
   {
      tail->next = newNode;
      tail = newNode;
   }
}

void linked_list::push_front(int node_data)
{
   Node *newNode = new Node;
   newNode->data = node_data;
   newNode->next = head;
   head = newNode;
}

Node *linked_list::get_head()
{
   return head;
}

Node *linked_list::get_tail()
{
   return tail;
}

void linked_list::del(Node *before_del)
{
   Node *temp;
   temp = before_del->next;
   before_del->next = temp->next;
   delete temp;
}

void linked_list::insertAfter(Node *prev_node, int node_data)
{
   if (prev_node == NULL)
   {
      cout << "the given previous node is required,cannot be NULL";
      return;
   }

   Node *newNode = new Node;

   newNode->data = node_data;

   newNode->next = prev_node->next;
   prev_node->next = newNode;
}

Node* linked_list::reverselinkedList(Node *node)
{
   Node *pre = NULL;
   Node *next = NULL;
   while (head != NULL)
   {

      next = head->next;
      head->next = pre;
      pre = head;
      head = next;
   }
   return pre;
}

// display linked list contents
void linked_list::displayList(struct Node *node)
{
   // traverse the list to display each node
   while (node != NULL)
   {
      cout << node->data << "-->";
      node = node->next;
   }

   if (node == NULL)
      cout << "null";
}
