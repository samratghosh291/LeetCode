//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
 Node *reverseList(Node *head){

    Node *prev=nullptr;
    Node *curr=head;
    Node *nxt=head;

    while(curr!=nullptr){
        nxt=nxt->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}   
    
    
    
   bool isPalindrome(Node *head)
{
    // write your code here
    if(head==nullptr or head->next==nullptr){
        return true;
    }

    //find the middle of the list
    Node *fast=head;
    Node *slow=head;
    while(fast->next!=nullptr and fast->next->next!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
    }

    //reverse the list
    slow->next=reverseList(slow->next);

    //compare the list
    slow=slow->next;
    while(slow!=nullptr){
        if(head->data!=slow->data){
            return false;
        }
        head=head->next;
        slow=slow->next;
    }

    return true;

}

};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends