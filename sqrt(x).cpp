#include<iostream>
using namespace std;
int search(int number){
long long left = 1;
long long right = number;
while(left <= right){
     long long mid = left + (right - left) /2;
     long long mul = mid * mid;
    if(mul <= number){
       left = mid +1;
      }
    else{
          right = mid - 1;
      }
    }
    return right;
};

int main(){
int number;
cout<<"Enter the number : ";
cin>>number;
long long answer = search(number);
cout<<answer;

}