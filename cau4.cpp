#include <iostream>
using namespace std;

struct DNode {
    int data;
    DNode* prev;
    DNode* next;
    DNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Hàm chèn node sau node_p
void insertAfter(DNode* node_p, int value) {
    if (!node_p) return;
    DNode* newNode = new DNode(value);
    newNode->next = node_p->next;
    newNode->prev = node_p;
    if (node_p->next)
        node_p->next->prev = newNode;
    node_p->next = newNode;
}

// Hàm in danh sách từ đầu
void printList(DNode* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    DNode* n1 = new DNode(1);
    DNode* n2 = new DNode(2);
    DNode* n4 = new DNode(4);
    n1->next = n2;
    n2->prev = n1;
    n2->next = n4;
    n4->prev = n2;

    insertAfter(n2, 3);
    printList(n1); // Kết quả: 1 2 3 4
    return 0;
}
