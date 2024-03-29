/*
    Insertion sort

    Time Complexity     : O(N^2) , or O(NlogN) by using binary search
    Space Complexity    : O(1)

    ref: https://jimmyswebnote.com/bubble-sort/
*/
#include<iostream>
#include<vector>
#include"com.h"

using namespace std;

void Insertionsort(vector<int>& v){
    int n = v.size();
    for(int i=1;i<n;i++){
        int j = i;
        while(v[j]<v[j-1]){
            swap(v[j], v[j-1]);
            j--;
        }
    }
}

int main(){
    /*
        input  : 56, 27, 38, 48, 61, 76, 13, 88, 93, 2
        output : 2, 13, 27, 38, 48, 56, 61, 76, 88, 93
    */
    int arr[] = { 56, 27, 38, 48, 61, 76, 13, 27, 88, 2};
    vector<int> v(arr, arr+10);
    cout<<"Before sorting: ";    print_v(v);
    Insertionsort(v);
    cout<<"After sorting: ";    print_v(v);

    return 0;
}