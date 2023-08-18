//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    
    public:
    
    Node* reverse(Node* head){
        
        Node* prev=nullptr;
        Node* curr=head;
        Node* nxt=head;
        
        while(curr){
            nxt=nxt->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        
        return prev;
        
    }
    
    Node *compute(Node *head)
    {
        // your code goes here
        if(!head or !head->next){
            return head;
        }
        
        //reverse the given list
        head=reverse(head);
        Node* prev=head;
        Node* temp=head->next;
        int mx=head->data;
         while(temp){
             
             
             //when current data is smaller than mx
             if(temp->data<mx){
                 prev->next=temp->next;
                 temp=prev->next;
             }
             else{
                 mx=temp->data;
                 prev=temp;
                 temp=temp->next;
             }
             
         }
         
         //reverse the updated list
         head=reverse(head);
         return head;
        
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends