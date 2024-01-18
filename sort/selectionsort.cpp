/*
    Selection sort

    Time Complexity     : O(N^2)
    Space Complexity    : O(1)

    ref: https://jimmyswebnote.com/bubble-sort/
*/
#include<iostream>
#include<vector>
#include"com.h"

using namespace std;

void Selectionsort(vector<int>& v){
    int index = v.size();
    while(index--){
        // find max
        int _max = v[index];
        int _max_index = index;
        for(int i=0;i<=index;i++){
            if(v[i]>_max){
                _max = v[i];
                _max_index = i;
            }
        }
        swap(v[index], v[_max_index]);
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
    Selectionsort(v);
    cout<<"After sorting: ";    print_v(v);

    return 0;
}