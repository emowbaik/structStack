#include <iostream>
#include <string>
using namespace std;
#define MAXSTACK 10

typedef int tipeItem;
typedef struct {
    tipeItem Item[MAXSTACK];
    int Count;
} Stack;

void inisialisasi(Stack *S) {
    S->Count = 0;
}


int main(){
    return 0;
}
