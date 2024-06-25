// Reverse a Linked List - Challenge 1
// Nate Gibson
// 6/25/24

// INCOMPLETE CURRENTLY

// Struct for a linked list node
typedef struct node
{
	int data;
	struct node *next;
}node;

// Allocate memory for and return a linked list node
node *generateNode(int data)
{
	node *newNode = malloc(sizeof(node));
	newNode->data = data;
	newNode->next = NULL;
}

// When passed the head of a singlely linked list, reverses and returns the list
node *reverseSinglelyList(node *head)
{
	// If passed NULL, return nothing, if only one node, technically already reversed
	if (head == NULL)
	{
		return NULL;
	}
	else if (head->next == NULL)
	{
		return head;
	}
	
	head = reverseList(head->next);

	return head;
}

// Execute the reverse function
int main(void)
{
	node *list = malloc(sizeof(node) * 5);

	return 0;
}