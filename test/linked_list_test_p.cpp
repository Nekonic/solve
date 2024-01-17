#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
class linked_list{
private:
    node *head, *tail;
public:
    linked_list(){
        head = NULL;
        tail = NULL;
    }
    void add_node(int n){
        node *t = new node;
        t->data = n;
        t->next = NULL;
        if(head==NULL){
            head=t;
            tail=t;
        }else {
            tail->next = tmp;
            tail = tail->next;
        }
    }
};
int main(){
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    
}