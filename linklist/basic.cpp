#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long

class Node
{
    public:
        int head;
        Node *next;

        Node(int value)
        {
            this->head = value;
            this->next = NULL;
        }
};

void insert_At_Tail(Node *&tail, int value)
{
    Node *temp = new Node(value);
    tail->next = temp;
    tail = temp;
}

void insert_At_Head(Node *&head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}

void print_list(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->head << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insert_At_Head(head, 11);
    insert_At_Head(head, 12);
    insert_At_Head(head, 13);
    print_list(head);

    insert_At_Tail(tail, 11);
    insert_At_Tail(tail, 12);
    insert_At_Tail(tail, 13);
    print_list(head);

    return 0;
}
