#include<iostream>
using namespace std;
int main(){

    int marks[5] ={11, 12, 34, 69, 70};
    int size = 5;
    int smallest = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(marks[i]<smallest){
            smallest= marks[i];
        }

    }
    cout<<"smallest ="<<smallest<<endl;

    return 0;
}