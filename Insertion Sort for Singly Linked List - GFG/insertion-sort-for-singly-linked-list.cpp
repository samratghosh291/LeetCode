//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head)
    {
        //code here
        
        if (!head || !head->next) {
            return head; // Empty list or list with only one node is already sorted
        }
        
        Node* dummy=new  Node(INT_MAX) ; // Create a dummy node to simplify insertion
        Node* current = head; // Pointer to traverse the original list
        
        while (current) {
            Node* prev = dummy; // Pointer to traverse the sorted list
            Node* nextNode = current->next; // Store the next node before modifying links
            
            // Find the correct position to insert the current node
            while (prev->next && prev->next->data < current->data) {
                prev = prev->next;
            }
            
            // Insert the current node after the 'prev' node
            current->next = prev->next;
            prev->next = current;
            
            // Move to the next node in the original list
            current = nextNode;
        }
        
        return dummy->next; // Return the sorted list
        
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends