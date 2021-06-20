
// A simple C++ program for traversal of a linked list

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next; // next node ko point kr raha h isliye node* also known as self referencing pointer.

};


// This function prints contents of linked list
// starting from the given node
void printlist(node* n){
    while (n != NULL)
    {
        cout<<n ->data << " ";
        n = n-> next; 
    }
}

int main()
{
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;

    //allocate 3 nodes in the heap

    head = new node();
    second = new node();
    third = new node();

    head -> data = 1; //assign data in first node
    head -> next = second; //link first node with second

    second -> data = 2; //assign data in first node
    second -> next = third; //link first node with second

    third -> data = 3; //assign data in first node
    third -> next = NULL; //link first node with second

    printlist(head);


    return 0;
}



