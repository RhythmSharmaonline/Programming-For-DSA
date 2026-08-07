#include <iostream>
#include <vector>
using namespace std;

// Printing Array
void print_arr(const vector<int>&arr){
    for (int i = 0;i<arr.size();i++){
        cout<<arr[i]; 
    }
    cout <<endl;
}

//Taking Input
void input_arr(const vector<int>&arr){
    vector<int> arr(arr.size());
    for (int i =0; i<arr.size();i++){
        cin >> arr[i];
    }
}

// Code Bubble Sort
void bubble_sort(int arr[],n){
    bool swapped;
    for (int i= 0;i<n-1;i++){
        swapped = false;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped ==false){
            break;
        }
    }
}

// Selection Sorting
void select_sort(vector<int>& arr){
    for(int i=0; i<arr.size();i++){
        int min_index = i;
        for (int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    print_arr(arr);
}

// Main Function
int main(){
    int n ;
    cout <<"Enter how many indexes you want: ";
    cin >> n;
    input_arr(n);

}