#include <iostream>
#include <string>

using namespace std;

int N;
string command[10000];
int A[10000];

class Node {
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int num) : data(num), prev(nullptr), next(nullptr) {}

};

class DLL {
    public:
        Node* head;
        Node* tail;
        int node_count;

        DLL() : head(nullptr), tail(nullptr), node_count(0) {}

        void push_front(int num) {
            Node* new_node = new Node(num);
            if (head == nullptr) {
                head = tail = new_node;
            } else {
                new_node->next = head;
                head->prev = new_node;
                head = new_node;
            }
            node_count++;
        }

        void push_back(int num) {
            Node* new_node = new Node(num);
            if (tail == nullptr) {
                head = tail = new_node;
            } else {
                new_node->prev = tail;
                tail->next = new_node;
                tail = new_node;
            }
            node_count++;
        }

        int pop_front() {
            int result = head->data;

            if (head == tail) {
                head = tail = nullptr;
                node_count--;
                return result;
            }

            head->next->prev = nullptr;
            head = head->next;

            node_count--;

            return result;
        }

        int pop_back() {
            int result = tail->data;

            if (head == tail) {
                head = tail = nullptr;
                node_count--;
                return result;
            }

            tail->prev->next = nullptr;
            tail = tail->prev;

            node_count--;

            return result;
        }

        int size() {
            return node_count;
        }

        int empty() {
            if(node_count > 0) return 0;
            else return 1;
        }

        int front() {
            return head->data;
        }

        int back() {
            return tail->data;
        }
};

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
    }

    // Write your code here!
    DLL* dll = new DLL();

    for (int i = 0; i < N; i++) {
        if (command[i] == "push_front") {
            dll->push_front(A[i]);
        } else if(command[i] == "push_back") {
            dll->push_back(A[i]);
        } else if(command[i] == "pop_front") {
            cout << dll->pop_front() << endl;
        } else if(command[i] == "pop_back") {
            cout << dll->pop_back() << endl;
        } else if(command[i] == "size") {
            cout << dll->size() << endl;
        } else if(command[i] == "empty") {
            cout << dll->empty() << endl;
        } else if(command[i] == "front") {
            cout << dll->front() << endl;
        } else {
            cout << dll->back() << endl;
        }
    }

    return 0;
}
