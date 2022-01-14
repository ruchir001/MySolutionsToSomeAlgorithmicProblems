#include<stdlib.h>
#include<stdio.h>
struct bin_tree {
int data;
struct bin_tree * right, * left;
};
typedef struct bin_tree Node;
int c=0;
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}

void print_inorder(Node * tree)
{
    if (tree)
    {
        print_inorder(tree->left);
        printf("%d\n",tree->data);
        print_inorder(tree->right);
    }
}

Node* search(Node ** tree, int val)
{
    if(!(*tree))
    {
        return NULL;
    }

    if(val < (*tree)->data)
    {
        search(&((*tree)->left), val);
    }
    else if(val > (*tree)->data)
    {
        search(&((*tree)->right), val);
    }
    else if(val == (*tree)->data)
    {
        return *tree;
    }
}
int getLevel(Node *root, Node *node, int level)
{
    // base cases
    if (root == NULL)
        return 0;
    if (root == node)
        return level;
 
    // If node is present in left subtree
    int downlevel = getLevel(root->left, node, level+1);
    if (downlevel != 0)
        return downlevel;
 
    // If node is not present in left subtree
    return getLevel(root->right, node, level+1);
}
 
void printGivenLevel(Node* root,Node *node,int level)
{
    if (root == NULL)
        return;
    if (level == 1)
    {
	if(root->data!=node->data)
		
        {printf("%d ", root->data);c=1;}
    }
	else if (level > 1)
    {
        printGivenLevel(root->left,node,level-1);
        printGivenLevel(root->right,node,level-1);
    }
}
// This function prints cousins of a given node
void printCousins(Node *root, Node *node)
{
    // Get level of given node
    int level = getLevel(root, node, 1);
    // Print nodes of given level.
    printGivenLevel(root,node,level);
    if(c==0)
    printf("\nThere are no cousins or siblings of the given node\n");
}


int printPath(Node* root, int v)
   {
       if(root == NULL) return 0;
       if(root->data == v) 
       {
           printf("%d<-", root->data);
           return 1;
       }
       if( printPath(root->left,v) || printPath(root->right, v))
       {
            printf("%d<-", root->data);
            return 1;
       }
       else
       {
           return 0;
        }
    }
    
void main()
{
    Node *root;
    Node *tmp;
    int i,ch;
	root = NULL;
	/* Inserting nodes into tree */
   	
	insert(&root,8);
   	insert(&root,3);
   	insert(&root,10);
   	insert(&root,1);
   	insert(&root,6);
   	insert(&root,14);
   	insert(&root,4);
   	insert(&root,7);
   	insert(&root,13);
	do
	{
    printf("\n1. Insert in the binary search tree\n2. Inorder display of the tree\n3. Display all the siblings and cousins of given node\n4. Display path of a node\n5. Exit\nEnter your choice  ");
    scanf("%d",&ch);

    switch(ch)
    {
    	case 1: printf("\nEnter the number to insert   ");
    			scanf("%d",&i);
				insert(&root, i);
				break ;
		case 2: printf("\nIn Order Display\n");
    			print_inorder(root);
				break ;
		case 3: printf("\nEnter the value of node whose siblings to display   ");
				scanf("%d",&i);
				printCousins(root,search(&root,i));
				break;
		case 4: printf("\nEnter the value of node whose path from root to display   ");
				scanf("%d",&i);
				printPath(root,i);
				break;
		case 5: break;
		default: printf("\nWrong choice!!");
}
}while(ch!=5) ;
}
