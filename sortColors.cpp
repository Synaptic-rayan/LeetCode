#include<iostream>
using namespace std;

void sortColors(int* arr, int n){
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while(mid <= high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++; 
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid], arr[high]);
            high--;
        }
        else{
            mid++;
        }
    }
}

int main(){
    int arr[] ={2,0,2,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortColors(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

