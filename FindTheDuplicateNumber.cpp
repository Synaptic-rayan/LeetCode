#include<iostream>
using namespace std;
int duplicate_number(int *arr, int n){
    int hare = arr[0];
    int tortoies = arr[0];
    do{
          hare = arr[hare];
          tortoies= arr[arr[tortoies]];
         }
    while(hare!=tortoies);
       hare=arr[0];
     while(hare!=tortoies){
       hare=arr[hare];
       tortoies=arr[tortoies]; 
     }
return hare;
};
int main(){
int arr[]={1,3,4,2,2};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<duplicate_number(arr,n);
return 0;
}