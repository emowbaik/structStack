#include <iostream>
#include <string>
using namespace std;
#define MAXTUMPUKAN 10

typedef int tipeItem;
typedef struct {
    tipeItem Item[MAXTUMPUKAN];
    int Count;
} Stack;

void awal(Stack *S) {
    S->Count = 0;
}

int penuh(Stack *S){
    return (S->Count == MAXTUMPUKAN);
}

int kosong(Stack *S){
    return (S->Count == 0);
}

void pop(Stack *S, tipeItem *x) {
    if (kosong(S)) {
        cout << "Stack kosong!" << endl;
    } else {
        --(S->Count);
        cout << "Kick: " << S->Item[S->Count] << endl;
        *x = S->Item[S->Count];
    }
}

void push(tipeItem x, Stack *S){
    if (penuh(S)) {
        cout << "Stack penuh!" << endl;
    } else {
        S->Item[S->Count] = x;
        cout << "Add: " << S->Item[S->Count] << endl;
        ++(S->Count);
    }
}

int main(){
    Stack alam;
    awal(&alam);

    tipeItem *qwe = alam.Item;
    pop(&alam, qwe);
    push(99, &alam);
    push(73, &alam);
    push(23, &alam);
    push(88, &alam);
    pop(&alam, qwe);
    pop(&alam, qwe);
    push(12, &alam);
    push(65, &alam);
    push(53, &alam);
    push(45, &alam);
    pop(&alam, qwe);
    push(34, &alam);
    push(78, &alam);
    push(90, &alam);
    pop(&alam, qwe);
    pop(&alam, qwe);
    pop(&alam, qwe);
    pop(&alam, qwe);
    pop(&alam, qwe);
    push(100, &alam);
    push(101, &alam);
    push(2, &alam);
    push(123, &alam);
    push(435, &alam);
    push(457, &alam);
    push(4354, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    push(9834, &alam);
    return 0;
}
