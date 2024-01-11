#include "com.h"

void print_v(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

template<typename T>void SWAP(T& a, T& b){
    T t = a;
    a = b;
    b = t;
}