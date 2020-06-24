// Leetcode 707. Design Linked List
// https://leetcode.com/problems/design-linked-list/

#include<bits/stdc++.h>
using namespace std;

static int __=[](){cin.tie(0);std::ios::sync_with_stdio(false);return 0;}();

class listNode{
    public:
        int val;
        listNode *next;
        listNode(){
            this->val = -1;
            this->next = NULL;
        }

        listNode(int val){
            this->val = val;
            this->next = NULL;
        }
};

class MyLinkedList {
public:
    /** Initialize your data structure here. */
    listNode *head;
    listNode *tail;
    int size;

    MyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index >= this->size || index < 0){
            return -1;
        }

        listNode *temp = this->head;
        for(int i=0; i<index; i++){
            temp = temp->next;
        }

        return temp->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        listNode *newNode = new listNode(val);
        newNode->next = this->head;
        this->head = newNode;
        if(this->tail == NULL){
            this->tail = newNode;
        }
        this->size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        listNode *newNode = new listNode(val);
        if(this->tail == NULL){
            this->head = this->tail = newNode;
        }else{
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index == 0){
            addAtHead(val);
        }else if(index == this->size){
            addAtTail(val);
        }else{
            listNode *newNode = new listNode(val);
            listNode *temp = head;
            for(int i=1; i<index; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            this->size++;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index < 0 || index >= this->size){
            return;
        }

        listNode *rNode = NULL;

        if(index == 0){
            rNode = this->head;
            this->head = rNode->next;
        }else{
            listNode *temp = NULL;
            rNode = head;
            for(int i=0; i<index; i++){
                temp = rNode;
                rNode = rNode->next;
            } 
            if(index == this->size-1){
                this->tail = temp;
            }
            temp->next = rNode->next;
            rNode->next = NULL;
        }

        delete rNode;
        this->size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */