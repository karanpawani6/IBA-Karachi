//#include <iostream>
//using namespace std;
//
//// Definition for singly-linked list.
//struct ListNode {
//    int val;
//    ListNode* next;
//
//    ListNode(int x) : val(x), next(nullptr) {}
//};
//
//// remove the element if there is any list right side of it having greater value than it.
//ListNode* remove(ListNode* head) {
//    if (head == nullptr || head->next == nullptr) return head;
//
//    head->next = remove(head->next);
//
//    if (head->val < head->next->val) {
//        ListNode* temp = head->next;
//        delete head;
//        return temp;
//    }
//
//    return head;
//}
//
//// Function to insert node at the end
//void insertAtEnd(ListNode*& head, int value) {
//    if (head == nullptr) {
//        head = new ListNode(value);
//        return;
//    }
//
//    ListNode* temp = head;
//    while (temp->next != nullptr) {
//        temp = temp->next;
//    }
//
//    temp->next = new ListNode(value);
//}
//
//// Function to print the list
//void printList(ListNode* head) {
//    while (head != nullptr) {
//        cout << head->val;
//        if (head->next != nullptr) cout << " -> ";
//        head = head->next;
//    }
//    cout << endl;
//}
//
//// Main function to test the remove function
//int main() {
//    ListNode* head = nullptr;
//    int values[] = { 5, 2, 13, 3, 8 };
//
//    for (int v : values) {
//        insertAtEnd(head, v);
//    }
//
//    cout << "Original List: ";
//    printList(head);
//
//    head = remove(head);
//    //list haveing no value greater in the front in this case print 13 and 8
//    cout << "Modified List: ";
//    printList(head);
//
//    return 0;
//}
