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

int main(){
    return 0;
}
