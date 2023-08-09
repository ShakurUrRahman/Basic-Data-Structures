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
void insert_at_tail(Node * &head, int v){
    Node * newNode = new Node(v);

    if(head==NULL){
        head = newNode;
        cout<<endl<<"Inserted at head."<<endl<<endl;
        return;
    }

    Node * tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;

    }
    tmp->next = newNode;
    cout<<endl<<"Inserted at tail."<<endl<<endl;
}
void print_linkedin_list(Node * head){
    cout<<endl;
    cout<<"Your linked list: "<<endl;

    Node * tmp = head;
    while (tmp != NULL)
    {
       cout<<tmp->val<<" ";
       tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_any_position(Node * head, int pos, int v){
    Node * newNode = new Node(v);
    Node * tmp = head;
    for (int i = 1; i <= pos -1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Inserted at "<<pos<<" number position."<<endl<<endl;
}
void insert_at_head(Node*&head, int val){
    
    Node * newNode = new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<endl<<endl<<"Inserted at head"<<endl<<endl;
}
int main()
{
    Node * head = NULL;
    while (true){
     cout<<"Option 1: Insert at tail"<<endl;
     cout<<"Option 2: Insert at any position"<<endl;
     cout<<"Option 3: Print linkedin list"<<endl;
     cout<<"Option 4: Insert at head"<<endl;
     cout<<"Option 5: Termination"<<endl;
     int op;
     cin>>op;
     if(op==1){
        cout<<"Please enter value: "<<endl;
        int v;
        cin>>v;
        insert_at_tail(head, v);
    }
    else if(op==2){
        int pos, v;
        cout<<"Enter Position: "<<endl;
        cin>>pos;
        cout<<"Enter value: "<<endl;
        cin>>v; 
        if(pos==0){
            insert_at_head(head, v);
        }
        else{
            insert_at_any_position(head, pos, v);
        }
    }
     else if(op==3){
        print_linkedin_list(head);
     }
     else if(op==4){
        cout<<endl<<endl<<"Enter the value: "<<endl;
        int v;
        cin>>v;
        insert_at_head(head,v);
     }
     else if(op==5){
        break;;
     }
   }
   
    return 0;
}