#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int capacity;
    int len;

    // Tăng gấp đôi dung lượng khi đầy
    void resize() {
        int* newData = new int[capacity * 2];
        for (int i = 0; i < len; ++i)
            newData[i] = data[i];
        delete[] data;
        data = newData;
        capacity *= 2;
    }

public:
    DynamicArray(int initCapacity = 2) {
        data = new int[initCapacity];
        capacity = initCapacity;
        len = 0;
    }

    void add(int value) {
        if (len == capacity)
            resize();
        data[len++] = value;
    }

    int get(int index) const {
        return (index >= 0 && index < len) ? data[index] : -1;
    }

    int size() const {
        return len;
    }

    ~DynamicArray() {
        delete[] data;
    }
};

int main() {
    DynamicArray arr;
    arr.add(1);
    arr.add(2);
    arr.add(3);
    arr.add(4);

    for (int i = 0; i < arr.size(); ++i)
        cout << arr.get(i) << " ";
    return 0;
}
