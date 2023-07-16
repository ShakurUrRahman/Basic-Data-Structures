// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class Stack {
//     Node* top;

// public:
//     // Stack() : top(NULL) {}

//     Stack(int n) : top(NULL) {
//         for (int i = 0; i < n; i++) {
//             int value;
//             cin >> value;
//             push(value);
//         }
//     }

//     void push(int value) {
//         Node* new_node = new Node(value);
//         new_node->next = top;
//         top = new_node;
//     }

//     int pop() {
//         if (top == NULL)
//             return -1;

//         Node* temp = top;
//         int data = top->val;
//         top = top->next;
//         delete temp;
//         return data;
//     }

//     Node* getTop() {
//         return top;
//     }
// };

// class Queue {
//     Node* front;
//     Node* rear;

// public:
//     Queue() : front(NULL), rear(NULL) {}

//     Queue(int m) : front(NULL), rear(NULL) {
//         for (int i = 0; i < m; i++) {
//             int value;
//             cin >> value;
//             enqueue(value);
//         }
//     }

//     void enqueue(int value) {
//         Node* new_node = new Node(value);
//         if (rear == NULL) {
//             front = rear = new_node;
//         } else {
//             rear->next = new_node;
//             rear = new_node;
//         }
//     }

//     int dequeue() {
//         if (front == NULL)
//             return -1; 

//         Node* temp = front;
//         int data = front->val;
//         front = front->next;
//         if (front == NULL)
//             rear = NULL;
//         delete temp;
//         return data;
//     }

//     Node* getFront() {
//         return front;
//     }
// };

// bool compareLists(Stack& stack, Queue& queue) {
//     Node* stack_top = stack.getTop();
//     Node* queue_front = queue.getFront();

//     while (stack_top != NULL && queue_front != NULL) {
//         if (stack_top->val != queue_front->val)
//             return false;

//         stack_top = stack_top->next;
//         queue_front = queue_front->next;
//     }

//     return stack_top == NULL && queue_front == NULL;
// }

// int main() {
//     int N, M;
//     std::cin >> N >> M;

//     Stack stack(N);
//     Queue queue(M);

//     bool sameLists = compareLists(stack, queue);

//     if (sameLists)
//         std::cout << "YES" << std::endl;
//     else
//         std::cout << "NO" << std::endl;

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

bool compareLists(const vector<int> A, const vector<int> B) {
    if (A.size() != B.size()) {
        return false;
    }

    stack<int> stackA;
    queue<int> queueB;

    for (int num : A) {
        stackA.push(num);
    }

    for (int num : B) {
        queueB.push(num);
    }

    while (!stackA.empty() && !queueB.empty()) {
        int topA = stackA.top();
        int frontB = queueB.front();

        if (topA != frontB) {
            return false;
        }

        stackA.pop();
        queueB.pop();
    }

    return stackA.empty() && queueB.empty();
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    bool sameLists = compareLists(A, B);

    if (sameLists) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
