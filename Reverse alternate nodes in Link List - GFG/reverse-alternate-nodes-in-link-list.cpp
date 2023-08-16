//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:

Node* reverse(struct Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* nxt;

    while (curr) {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }

    return prev;
}

void rearrange(struct Node* head) {
    if (!head || !head->next) {
        return;
    }

    Node* dummy = new Node(-1);
    dummy->next = head;
    Node* curr = dummy;
    Node* st1 = head;
    Node* st2 = head->next;

    while (st2 && st2->next) {
        st1->next = st2->next;
        st1 = st1->next;
        curr->next = st2;
        curr = curr->next;
        st2 = st1->next;
    }

    curr->next = st2;

    // Reverse the extracted list and append it at the end
    st1->next = reverse(dummy->next);

    delete dummy;
}

};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends