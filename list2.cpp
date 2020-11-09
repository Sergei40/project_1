#include <iostream>
using namespace std;

struct node{
    int number;
    node* next;
};

int main(){
    node* end = new node;
    node* tmp = end;
    tmp->next = NULL;
    int num;
    while(!cin.eof()){
        cin >> num;
        if (!cin.eof()){
            if(!tmp->next){
                tmp->number = num;
            }
            node* newNode = new node;
            newNode->number = num;
            newNode->next = tmp;
            tmp = newNode;
        }
    }
    while(tmp != end){
        cout << tmp->number << " ";
        tmp=tmp->next;
    }

    return 0;

}