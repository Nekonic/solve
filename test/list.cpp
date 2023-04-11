#include <iostream>
#include <vector>
using namespace std;
struct Node{
    Node* next;
    int n;
    Node(int n_ = 0) : next(NULL), n(n_){}
};
Node* nil;
void init(){
    nil = new Node();
    nil->next = nil;
}
void insert(Node* v, Node* p = nil){
    v->next = p->next;
    p->next = v;
}
void printList(){
    Node* cur = nil->next;
    for(; cur!=nil; cur = cur->next){
        cout << cur->n << " -> ";
    }cout << '\n';
}
int main(){
    init();
    vector<int> a = {
        0,1,2,3,4,5,6,7,8,9,10
    };
    for(int i=0; i<a.size(); i++){
        Node* node = new Node(a[i]);
        insert(node);
        cout << "step " << i << ": ";
        printList();
    }
}