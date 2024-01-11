/*
    Bubble sort

    Steps:
        1. Traverse from left and compare adjacent elements and the higher one is placed at right side. 
            ( In this way, the largest element is moved to the rightmost end at first. )
        2. This process is then continued to find the second largest and place it and so on until the data is sorted.

    Time Complexity     : O(N^2)
    Space Complexity    : O(1)

    ref: https://jimmyswebnote.com/bubble-sort/
*/
#include<iostream>
#include<vector>
#include"com.h"

using namespace std;

int BubbleSort(vector<int>& v){
    int n = v.size();
    int index = n-1;
    for(int i=0;i<n;i++){

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
    BubbleSort(v);
    cout<<"After sorting: ";    print_v(v);

    return 0;
}