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
        *x = S->Item[S->Count];
    }
}

void push(tipeItem x, Stack *S){
    if (penuh(S)) {
        cout << "Stack penuh!" << endl;
    } else {
        S->Item[S->Count] = x;
        ++(S->Count);
    }
}

int main(){
    Stack S;
    awal(&S);
    return 0;
}
