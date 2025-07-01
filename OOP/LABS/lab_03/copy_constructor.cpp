#include <iostream>
#include <string>
using namespace std;
//using std::string, std::cout, std::endl;

class LLStack {
private:
    struct Node {
        string data;
        Node* next;
    };

    Node* first = nullptr;
    int N = 0;

public:
    LLStack() = default;
    LLStack(const LLStack& s) {
        if (s.first == nullptr) {
            N = 0;
            first = nullptr;
            return;
        }
        first = new Node{s.first->data ,nullptr};
        Node* temp = s.first->next;
        Node* temp2 = first;
        while (temp) {
            temp2->next = new Node{ temp->data,nullptr };
            temp2 = temp2->next;
            temp = temp->next;
         }
        N = s.N;
    }

    ~LLStack() {
        while (first != nullptr) {
            Node* second = first->next;
            delete first;
            first = second;
        }
    }

    void push(string item) {
        Node* second = first;            // first node will be second node
        first = new Node{ item, second }; // create new first node
        N++;                             // increment size
    }

    string pop() {
        Node* second = first->next; // store pointer to second node
        string d = first->data;     // store data from first node
        delete first;               // delete first node
        first = second;             // second becomes the fist node
        N--;                        // decrement size
        return d;                   // return data
    }

    bool empty() {
        return first == nullptr;
        //return N == 0; // Equivalently
    }

    int size() {
        return N;
    }

};

int main() {
    LLStack s;
    s.push("hello");
    s.push("world");
    s.push("how");
    s.push("are");
    s.push("you");
    LLStack t(s);
    while (!s.empty()) {
        cout << s.pop() << " ";
    }

    cout << endl;
    while (!t.empty()) {
        cout << t.pop() << " ";
    }

}