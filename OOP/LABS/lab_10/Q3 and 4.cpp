//#include <iostream>
//using namespace std;
//
//// Definition for a binary tree node.
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(int value) {
//        val = value;
//        left = nullptr;
//        right = nullptr;
//    }
//};
//
//// Function to insert a node into the BST using recursion
//TreeNode* insertIntoBST(TreeNode* root, int val) {
//    if (root == nullptr) {
//        return new TreeNode(val);
//    }
//
//    if (val > root->val) {
//        root->right = insertIntoBST(root->right, val);
//    }
//    else  if (val < root->val) {
//        root->left = insertIntoBST(root->left, val);
//    }
//    return root;
//
//
//}
//
//// Function to search for a value in BST using recursion
//bool searchInBST(TreeNode* root, int val) {
//    if (root == nullptr) return false;
//
//    if (root->val == val) return true;
//
//    if (val > root->val) {
//        return searchInBST(root->right, val);
//    }
//    else if (val < root->val) {
//        return searchInBST(root->left, val);
//    }
//    return false;
//
//}
//
//// In-order traversal for displaying the tree
//void inOrderTraversal(TreeNode* root) {
//    if (root == nullptr) return;
//    inOrderTraversal(root->left);
//    cout << root->val << " ";
//    inOrderTraversal(root->right);
//}
//
//// Example usage
//int main() {
//    TreeNode* root = nullptr;
//
//    // Insert values into the BST
//    int values[] = { 10, 5, 15, 3, 7, 12, 18 };
//    for (int val : values) {
//        root = insertIntoBST(root, val);
//    }
//
//    cout << "In-order Traversal of BST: ";
//    inOrderTraversal(root);
//    cout << endl;
//
//    // Search for a value
//    int target = 15;
//    if (searchInBST(root, target)) {
//        cout << target << " found in BST." << endl;
//    }
//    else {
//        cout << target << " not found in BST." << endl;
//    }
//
//    return 0;
//}
