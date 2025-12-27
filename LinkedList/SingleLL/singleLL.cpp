#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    Node* head = new Node(10, nullptr);
    head->next = new Node(20, nullptr);
    head->next->next = new Node(30, nullptr);

    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free allocated memory
    temp = head;
    while(temp != nullptr){
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}