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

// void inputValue(Node*& head, int value) {
//     Node* newNode = new Node(value);

//     if (head == NULL) {
//         head = newNode;
//         return;
//     } 
//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
// }

// bool listsEqual(Node* head1, Node* head2) {
//     while (head1 != NULL && head2 != NULL) {
//         if (head1->val != head2->val) {
//             return false;
//         }
//         head1 = head1->next;
//         head2 = head2->next;
//     }
//     return (head1 == NULL && head2 == NULL);
// }

// int main() {
//     Node* head1 = NULL;
//     Node* head2 = NULL;
//     int val;

//     while (true) {
//          cin >> val;
//          if (val == -1)
//             break;
//         inputValue(head1, val);
//     }

//     while (true) {
//          cin >> val;
//          if (val == -1)
//             break;
//         inputValue(head2, val);
//     }

//     bool isEqual = listsEqual(head1, head2);

//     if (isEqual) {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

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

// void inputValue(Node*& head, int value) {
//     Node* newNode = new Node(value);

//     if (head == NULL) {
//         head = newNode;
//         return;
//     } 
//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
// }

// void print_recursion(Node *n)
// {
//     // base case
//     if (n == NULL)
//         return;
//     cout << n->val << " ";
//     print_recursion(n->next);
// }
// void print_reverse(Node *n)
// {
//     // base case
//     if (n == NULL)
//         return;

//     print_reverse(n->next);
//     cout << n->val << " ";
// }

// int main() {
//     int val;
//     Node* head = NULL;

//     while (true) {
//         cin >> val;
//          if (val == -1)
//             break;
//         inputValue(head, val);
//     }

//     print_reverse(head);
//     cout << endl;

//     print_recursion(head);

//     return 0;
// }
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

// void insertHead(Node*& head, int value) {
//     Node* newNode = new Node(value);
//     newNode->next = head;
//     head = newNode;
// }

// void insertTail(Node*& head, int value) {
//     Node *newNode = new Node(value);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
// }

// void printHeadTail(Node* head) {
//     if (head != NULL) {
//         cout << head->val << " ";
//         Node* value = head;
//         while (value->next != NULL) {
//             value = value->next;
//         }
//         cout << value->val << endl;
//     }
// }

// int main() {
//     Node* head = NULL;
//     int Q;
//     cin >> Q;

//     for (int i = 0; i < Q; i++) {
//         int pos, V;
//         cin >> pos >> V;

//         if (pos == 0) {
//             insertHead(head, V);
//         } else {
//             insertTail(head, V);
//         }

//         printHeadTail(head);
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

 void insertValue(Node*& head, int value) {
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void printMiddleElements(Node* head) {
     for (Node *i = head; i->next != NULL; i = i->next)
     {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
     }
    vector<int> values;
    Node* curr = head;
    while (curr != NULL) {
        values.push_back(curr->val);
        curr = curr->next;
    }

    int size = values.size();
    int middle = size / 2;
    if (size % 2 == 0) {
        cout << values[middle-1] << " " << values[middle] << endl;
    } else {
        cout << values[middle] << endl;
    }
};



int main() {
    Node* head = NULL;
    int val;
    while (cin >> val && val != -1) {
        insertValue(head, val);
    }
    
    printMiddleElements(head);

    return 0;
}
