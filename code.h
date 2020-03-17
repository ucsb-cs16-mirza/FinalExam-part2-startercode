#ifndef CODE_H
#define CODE_H

/* Problem 1: 10 pts
Professor Kharitonova loves to drink different types of tea. 
At home, she has many different tea packets, each with an `rating` and `rarity`. 
This assortment is represented as a linked list of `TeaPacket` objects.

Define the `value` of a packet to be `rarity * rating`. 
Given the head of her linked list of `TeaPacket` objects, 
write a RECURSIVE function to return the `TeaPacket` with the greatest `value`.

*/

struct TeaPacket{
    int rating;
    int rarity;
    TeaPacket *next;
};

// Implement the function below. 
TeaPacket* bestPacket(TeaPacket* head);

/***********************************************/

/* Problem 2: 10 points
Given a single linked list of nodes in ascending order by their `data` values and 
a value `val` to insert, insert a new node with the given value such that the resulting 
linked list remains sorted. Return the head of the modified linked list.
Use the definition of Node provided below:

*/

struct Node{
    int data;
    Node *next;
};
Node* insert(Node* head, int value);


/************************************************/

/* Problem 3: 10 points

Suppose that you are given a string that only contains characters A and B. 
Additionally the string may have all As or all Bs or may be empty. 
Define a string to be **balanced** if the number of A's match the number of B's.
*/

// Given a string s that contains only A's and B's, 
// return true if s is "balanced", otherwise return false.

bool isBalanced(string s);

/***************************************************/

/* Problem 4: 10 points

There is a long line of people waiting their turn for the new and exciting 
"Rise of the Resistance" ride at Disneyland. 
Originally, Disneyland represented these people as an unsorted linked list of `Person` objects. 
However, ride operators recently realized that it was much more efficient to use a linked list sorted by priority.


Each `Person` can either be of `high` priority or `low` priority. 
Given an unsorted linkedlist of Person objects, modify the linked list such that all 
`high` priority people are at the front of the linked list while the `low` priority are at the end. 
Return the head of the modified list. 
Note that the modified list does not have to have a specific order, 
the only requirement is that the high priorty nodes are before the low priority ones. */


struct Person{
    string priority;
    Person* next;
};

Person* priorityLinkedList(Person* head);


#endif
