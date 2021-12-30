#include <iostream>
using namespace std;

void addOne(int *ptrNum);

void addOne(int *ptrNum){
    (*ptrNum)++;
}

int main() {
    int tmp = 10;
    int *tmpPtr = &tmp;

    addOne(tmpPtr);

    cout<<tmp;
}

