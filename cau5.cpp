#include <iostream>
using namespace std;

struct CNode {
    int data;
    CNode* next;
    CNode(int val) : data(val), next(nullptr) {}
};

// Hàm duyệt danh sách liên kết vòng, in một lần qua mỗi node
void traverseCircularList(CNode* head) {
    if (!head) return;
    CNode* curr = head;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr && curr != head);
}

int main() {
    // Tạo danh sách 1 -> 2 -> 3 -> 1 (vòng)
    CNode* n1 = new CNode(1);
    CNode* n2 = new CNode(2);
    CNode* n3 = new CNode(3);
    n1->next = n2;
    n2->next = n3;
    n3->next = n1;

    traverseCircularList(n1); // In ra: 1 2 3
    return 0;
}
