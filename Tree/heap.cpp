#include <bits/stdc++.h>
#include <queue>
using namespace std;

class minheap {
    vector<int> hp;

public:
    void push(int x) {
        hp.push_back(x);
        int index = hp.size() - 1;
        while (index > 0 && hp[index] < hp[parent(index)]) {
            swap(hp[index], hp[parent(index)]);
            index = parent(index);
        }
    }

    void pop() {
        if (hp.size() == 0)
            return;
        swap(hp[0], hp[hp.size() - 1]);
        hp.pop_back();
        heapify(0);
    }

    void heapify(int i) {
        int l = lchild(i), r = rchild(i);
        int smallest_index = i;

        if (l < hp.size() && hp[l] < hp[smallest_index]) {
            smallest_index = l;
        }
        if (r < hp.size() && hp[r] < hp[smallest_index]) {
            smallest_index = r;
        }

        if (smallest_index != i) {
            swap(hp[i], hp[smallest_index]);
            heapify(smallest_index);
        }
    }

    int top() {
        if (hp.size() > 0) {
            return hp[0];
        }
        return -1; // Return some default value when the heap is empty
    }

    int size() {
        return hp.size();
    }

    int lchild(int i) {
        return 2 * i + 1;
    }

    int rchild(int i) {
        return 2 * i + 2;
    }

    int parent(int i) {
        return (i - 1) / 2;
    }
};

int main() {
    minheap hp;
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        hp.push(x);
    }
    cout << "The top element is: " << hp.top() << endl;
    hp.pop();
    cout << "After pop, the top element is: " << hp.top() << endl;

    return 0;
}