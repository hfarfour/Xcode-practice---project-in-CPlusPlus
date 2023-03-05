//
//  main.cpp
//  Binary_Trees
//
//  Created by Hossam Farfour on 01/12/2022.

#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include<queue> // for enqueue and dequeue
using namespace std;


//Binary trees differ from linked lists in that where a node in a linked list may have at most one successor, a node in a binary tree can have up to two successors.

//A binary tree is a collection of nodes in which each node is associated with up to two successor nodes, respectively called the left and right child. Not every node in the binary tree will have two children: One or both nodes may be omitted . A node in a binary tree that has no children is called a leaf node.

//Binary trees and their generalizations are excellent data structures for searching large amounts of information.

// -lickedList is head
// -BinaryTree is root or tree

//=====InOrder traversal=====
//1 .The node's left subtree is traversed.
//2 .The node's data is processed.
//3 .The node's right subtree is traversed .
//====Preorder traversal=====
//1 .The node's data is processed.
//2 .The node's left subtree is traversed.
//3 .The node's right subtree is traversed.
//=====Postorder traversal====
//1 .The node's left subtree is traversed.
//2 .The node's right subtree is traversed.
//3 .The node's data is processed.


class IntBinaryTree {
private:
    struct TreeNode {
        int value; // each node has a value
        TreeNode *left; // keep track of left childern of the node
        TreeNode *right; // keep track of right childern of the node
        TreeNode(int value1, TreeNode *left1 = nullptr, TreeNode *right1 = nullptr ){
        value = value1;
        left = left1;
        right = right1;
    }
  };
    //any binary tree operations have very natural recursive implementations. This is because a binary tree is an inherently recursive data structure: Every nonempty binary tree consists of a root node together with the left and right subtrees,
   
    TreeNode *root; //pointer to the root of the tree.
    //member function
    void Insert(int,TreeNode *&);
    void DestroySubTree(TreeNode *);
    void Remove(int num, TreeNode *&);
    void MakeDeletion(TreeNode *&);
    bool Search(int num, TreeNode *&);
    void DisplayInOrder(TreeNode *) const;       //Traversing the tree
    void DisplayPreOrder(TreeNode *root) const;  //Traversing the tree
    void DisplayPostOrder(TreeNode *root) const; //Traversing the tree
public:
    IntBinaryTree(){
        root = nullptr;
    }
    ~IntBinaryTree(){
        DestroySubTree(root);
    }
    void insert(int num){
        Insert(num, root);
    }
    void remove(int num){
        Remove(num, root);
    }
    bool search(int num) {
        TreeNode *tree = root;
        while (tree) {
            if (tree->value == num) {
                return true;
            } else if (num < tree->value){
                tree = tree->left;
            } else {
                tree = tree->right;
            }
        }
        return false;
    }
    
    void showInOrder(){
        DisplayInOrder(root);
    }
    void showPreOrder() {
        DisplayPreOrder(root);
    }
    void showPostOrder() {
        DisplayPostOrder(root);
    }
};
//recursive implementations
void IntBinaryTree::Insert(int num, TreeNode *&tree){
// If the tree is empty, make a new node and make it the root of the tree
    if (!tree) { //empty
        tree = new TreeNode(num,tree);
        return;
    }
    // if the root is not empty it compare value tree->value in the root node.
    //insert the new node into the left or right subtree.
    if (num < tree->value) {
        Insert(num, tree->left);
    } else {
        Insert(num, tree->right);
    }
    //If num is already in tree: return
    if (tree->value == num) return ;
}
// delet all node in the tree
void IntBinaryTree::DestroySubTree(TreeNode *tree){
    if (!tree) {return;} //empty
    DestroySubTree(tree->left);
    DestroySubTree(tree->right);
    delete tree;
}
void IntBinaryTree::Remove(int num, TreeNode *&tree){
    if (tree == nullptr) {return;} // empty
    if (num < tree->value) {
        Remove(num, tree->left);
    } else if (num > tree->value){
        Remove(num, tree->right);
    } else {
       // we have found the node to delet
        MakeDeletion(tree);
    }
}
//The makeDeletion function is designed to remove the root node of the binary search tree passed to it as an argument, leaving a binary search tree consisting of the remaining nodes.There are a number of cases to consider:
//1-The root of the tree passed to makeDeletion has no children.
//2-The root of the tree has only one child.
//3-Th e tree passed to makeDel ete has two children.
void IntBinaryTree::MakeDeletion(TreeNode *&tree){
    // Used to hold node that will be deleted
    TreeNode *nodeToDelete = tree;
    // Used to locate the point where the left subtree is attached
    TreeNode *attachPoint;
    if (tree->right == nullptr) {
        // Replace tree with its left subtree
        tree = tree->left ;
    } else if (tree->left == nullptr){
        // Replace tree with its right subtree
        tree = tree->right ;
    }
    else {
        //this node has two children
        // more to right subtree
        attachPoint = tree->right;
        // Locate the smallest node in the right subtree by moving as far to the left as possible
        while(attachPoint->left != nullptr)
              attachPoint = attachPoint->left;
        // Attach the left subtree of the orginal tree as the left subtree of the smallest node in the right subtree.
        attachPoint->left = tree->left;
        // replace the orginal tree with its right subtree
        tree = tree->right;
    }
    //delet root of orginal tree
    delete nodeToDelete;
}
void IntBinaryTree::DisplayInOrder(TreeNode *tree) const {
    if (tree) {
        DisplayInOrder(tree->left);
        cout<<tree->value<<" ";
        DisplayInOrder(tree->right);
    }
}
void IntBinaryTree::DisplayPreOrder(TreeNode *tree) const {
    if (tree) {
        cout<<tree->value<<" ";
        DisplayPreOrder(tree->left);
        DisplayPreOrder(tree->right);
    }
}
void IntBinaryTree::DisplayPostOrder(TreeNode *tree) const {
    if (tree) {
        DisplayPostOrder(tree->left);
        DisplayPostOrder(tree->right);
        cout<<tree->value<<" ";
    }
}

int main() {
    IntBinaryTree tree;
    cout<<"inserting numbers into tree"<<endl;
    tree.insert(5);
    tree.insert(8);
    tree.insert(3);
    tree.insert(12);
    tree.insert(9);
    cout<<"InOrder traversal....."<<endl;
    tree.showInOrder();
    cout<<endl;
    cout<<"PreOrder traversal....."<<endl;
    tree.showPreOrder();
    cout<<endl;
    cout<<"PostOrder traversal....."<<endl;
    tree.showPostOrder();
    cout<<endl;
    if (tree.search(5)) {
        cout<<"this numbner is found into tree"<<endl;
    } else {
        cout<<"this numbner is NOT found into tree"<<endl;
    }
    cout<<"deleting an elemnt....."<<endl;
    tree.remove(5);
    tree.remove(9);
    cout<<"Now My tree in InOrder traversal....."<<endl;
    tree.showInOrder();
    cout<<endl;
    
    return 0;
}



//======================
/*
 template<class T>
 class Node {
 public:
     T data;
     Node *left;
     Node *right;
     Node(T d) {
         data = d;
         left = NULL;
         right = NULL;
     }
 };

 template<class T>
 class BST {
 private:
     Node<T> *root;
     void Insert(T data , Node<T> *aNode);
     Node<T>*Search(T data , Node<T> *aNode);
     void inOrder(Node<T> *aNode);
     void preOrder(Node<T> *aNode);
     void postOrder(Node<T> *aNode);
 public:
     BST<T>();
     void insert(T data);
     Node <T> *Search(T data);
     void inorder();
     void preorder();
     void postorder();
 };

 template<class T>
 BST<T>::BST(){
 root = NULL;
 }

 template<class T>
 void BST<T>::insert(T data) {
    if (root != NULL){
     Insert(data , root);
     } else {
     root = new Node<T>(data);
     root->left = NULL;
     root->right = NULL;
     }
 }

 template<class T>
 Node<T> *BST<T>::Search(T data) {
     return Search(data,root);
 }

 template<class T>
 void BST<T>::inorder() {
     inOrder(root);
 }

 template<class T>
 void BST<T>::preorder(){
     preOrder(root);
 }

 template<class T>
 void BST<T>::postorder(){
     postOrder(root);
 }

 ////====================================
 template<class T>
 void BST<T>::Insert(T data , Node<T> *aNode)
 {
     if (data < aNode-> data)
     {
         if (aNode->left != NULL) {
             Insert(data , aNode->left);
         }
         else {
             aNode->left = new Node<T>(data);
             aNode->left->left = NULL;
             aNode->left->right = NULL;
         }
     }
     else if (data >= aNode-> data)
     {
         if (aNode->right != NULL) {
             Insert(data , aNode->right);
         }
         else {
             aNode->right = new Node<T>(data);
             aNode->right->left = NULL;
             aNode->right->right = NULL;
         }
     }
 }

 template<class T>
 Node<T> *BST<T>::Search(T data , Node<T> *raNode)
 {
     cout<<"node "<<raNode->data<<" "<<endl;
     if(raNode != NULL)
     {
         if(data == raNode->data) {
             return raNode;                // found
         }
         if(data < raNode->data)
         {
             return Search(data, raNode->left);       //Go left
         }else {
             return Search(data,raNode->right);       //Go right
         }
         
     }else {
         return NULL ;                  // Not found
     }
 }


 template<class T>
 void BST<T>::inOrder(Node<T> *aNode)
 {
     if(aNode != NULL)
     {
         inOrder(aNode ->left);  //Go left    start from left
         cout<<aNode->data<<" ";// print data  than root
         inOrder(aNode->right);  // Go rigth   than right
     }
     
 }


 template<class T>
 void BST<T>::preOrder(Node<T> *aNode)
 {
     if(aNode != NULL)
     {
         cout<<aNode->data<<" ";// print data   start from root
         preOrder(aNode ->left);//Go left        than left
         preOrder(aNode->right);// Go rigth      than right
     }
 }


 template<class T>
 void BST<T>::postOrder(Node<T> *aNode)
 {
     if(aNode != NULL)
     {
         postOrder(aNode ->left);//Go left   start from left
         postOrder(aNode->right);// Go rigth   than right
         cout<<aNode->data<<" ";// print data    last root
         
     }
 }

 template<class T>
 void BST::deleteNodeS(Node *&base ,int data)
 {
     if (base == nullptr) return;
     if(data < base-> data) deleteNodeS(base->left,data);
     else if (data> base->data) deleteNodeS(base->right,data);
     else
     {
         //case 1 : node with no childern
         if(base->left==nullptr && base->right==nullptr)
         {
             delete base;
             base=nullptr;
         }
         //case 2: node has two  childern
         else if (base->left && base->right)
         {
             Node *successor = successorNode(base->right);
             base->data=successor->data;
             deleteNodeS(base->right,successor->data);
         }
         else
         //case 2: node has only one  childern
         {
             Node* child=(base->left) ? base->left : base->right;
             Node* curr=base;
             base=child;
             delete curr;
         }
     }
 }

 //================================
 int main()
 {
     BST <int> *btree = new BST<int>;
     btree->Insert(5);
     btree->Insert(3);
     btree->Insert(7);
     btree->Insert(2);
     btree->Insert(4);
     btree->Insert(6);
     btree->Insert(9);
     cout<<"printing item in prder ";
     btree->inOrder();
     cout<<endl;
     cout<<"printing item in preprder ";
     btree->preOrder();
     cout<<endl;
     cout<<"printing item in postprder ";
     btree->postOrder();
     cout<<endl;
     
     cout<<"the node are :"<<endl;
     Node<int> *SearchItem=btree->Search(2);
     if(SearchItem)
     {
         cout<<"the item is found = "<<SearchItem->data<<endl;
     }
    else
        cout<<" the item is not found "<<endl;
     return 0;
     
 }
*/
