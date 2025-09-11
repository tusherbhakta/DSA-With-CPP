#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int sum= 0;
    while(n>0){
        int digit = n%10;
        n = n/10;
        sum+= digit;
    }
    return sum;
}

int main(){

    int x= 1234;
    cout<<sumOfDigits(x)<<endl;
    return 0;
}