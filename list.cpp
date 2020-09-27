include <iostream>

using namespace std;
struct list{
    int data;
    list* next;
};

list* foo(){
    list* node = new list;
    node->data = 5;
    node->next = nullptr;
    return node;
}

int main(){

    
    list* head = foo();

    list* node = new list;
    node->data = 6;
    node->next = head;
    head = node;

    cout << head->data << " " << head->next->data << endl;

    return -1;
}
