
#include "Solution.h"


void Hanota::hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
    int n = A.size();
    if (n>0){
        move(n,A,B,C);
    }
}

void Hanota::move(int n,vector<int>& A,vector<int>& B,vector<int>& C){
    if (n==1){
        C.push_back(A.back());
        A.pop_back();
        return;
    }
    move(n-1,A,C,B);
    C.push_back(A.back());
    A.pop_back();
    move(n-1,B,A,C);
}

int Fibo::f2(int n){
    if(n<1){
        return 0;
    }
    else if (n==1 || n==2){
        return 1;
    }
    return f2(n-1)+f2(n-2);
}
