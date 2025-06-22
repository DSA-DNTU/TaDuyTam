#include <iostream>
using namespace std;

// Hàm chèn phần tử x vào vị trí pos trong mảng tĩnh arr
void insertElement(int arr[], int& length, int capacity, int x, int pos) {
    if (length >= capacity || pos > length || pos < 0) return;

    // Dịch các phần tử sang phải để chừa chỗ
    for (int i = length; i > pos; --i) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    ++length;
}

// Ví dụ sử dụng
int main() {
    const int MAX = 5;
    int arr[MAX] = {1, 2, 3, 0, 0}; // Mảng chứa 3 phần tử, dung lượng 5
    int length = 3;
    insertElement(arr, length, MAX, 4, 1); // chèn 4 vào vị trí 1

    for (int i = 0; i < length; ++i)
        cout << arr[i] << " ";
    return 0;
}
