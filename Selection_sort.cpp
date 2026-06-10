#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Indexes: ";
    cin>> n;
    vector<int> arr(n);
    for(int i= 0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0; i<n;i++){
        int min_index = i;
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    cout<< "Sorted Index: ";
    for (int i= 0 ;i<arr.size();i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}