#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Hàm thêm node vào cuối danh sách
void addTail(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* curr = head;
    while (curr->next)
        curr = curr->next;
    curr->next = newNode;
}

// Hàm in danh sách
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = nullptr;
    addTail(head, 1);
    addTail(head, 2);
    addTail(head, 3);
    printList(head);
    return 0;
}
