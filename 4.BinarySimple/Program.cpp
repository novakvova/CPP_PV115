#include<iostream>
using namespace std;
#include<Windows.h>

//Бінарне дерево

class BST {
    int data;
    BST* left, * right;
public:
    // Default constructor.
    BST();
    // Parameterized constructor.
    BST(int);
    int GetData()
    {
        return data;
    }
    // Insert function.
    BST* Insert(BST*, int);
	/* Given a non-empty binary search tree, return the node
with minimum key value found in that tree. Note that the
entire tree does not need to be searched. */
	BST* minValueNode(class BST* node)
	{
		struct BST* current = node;

		/* loop down to find the leftmost leaf */
		while (current && current->left != NULL)
			current = current->left;

		return current;
	}

    /* Given a binary search tree and a key, this function
deletes the key and returns the new root */
    BST* deleteNode(class BST* root, int key)
    {
        // base case
        if (root == NULL)
            return root;

        // If the key to be deleted is
        // smaller than the root's
        // key, then it lies in left subtree
        if (key < root->data)
            root->left = deleteNode(root->left, key);

        // If the key to be deleted is
        // greater than the root's
        // key, then it lies in right subtree
        else if (key > root->data)
            root->right = deleteNode(root->right, key);

        // if key is same as root's key, then This is the node
        // to be deleted
        else {
            // node has no child
            if (root->left == NULL and root->right == NULL)
                return NULL;

            // node with only one child or no child
            else if (root->left == NULL) {
                BST* temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == NULL) {
                BST* temp = root->left;
                delete root;
                return temp;
            }

            // node with two children: Get the inorder successor
            // (smallest in the right subtree)
            BST* temp = minValueNode(root->right);

            // Copy the inorder successor's content to this node
            root->data = temp->data;

            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }


    // Inorder traversal.
    void Inorder(BST*);
};
// Default Constructor definition.
BST::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}
// Parameterized Constructor definition.
BST::BST(int value) //вершина дерева
{
    data = value;
    left = right = NULL;
}
// Insert function definition.
BST* BST::Insert(BST* root, int value)
{
    if (!root) { //Створили корінь дерева
        // Insert the first node, if root is NULL.
        return new BST(value);
    }

    // Insert data.
    if (value > root->data) {
        // Insert right node data, if the 'value'
        // to be inserted is greater than 'root' node data.

        // Process right nodes.
        root->right = Insert(root->right, value);
    }
    else {
        // Insert left node data, if the 'value'
        // to be inserted is greater than 'root' node data.

        // Process left nodes.
        root->left = Insert(root->left, value);
    }

    // Return 'root' node, after insertion.
    return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST::Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

int main() 
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

    BST b, * root = NULL;
    root = b.Insert(root, 50); //робимо стовбук
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);

    /*BST* min = b.minValueNode(root);
    cout << "Min value = " << min->GetData() << "\n";*/

    b.Inorder(root);

    cout << "\nDelete 40\n";
    b.deleteNode(root,40);
    //виводимо на екран усе дререво
    b.Inorder(root);
	return 0;
}