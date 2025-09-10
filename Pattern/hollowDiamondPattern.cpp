#include<iostream>
using namespace std;
int main(){
    int n = 10;
    // top part print code 
    for(int i=0; i<n; i++){
        if(i==0){
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        else{
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=0; j<=2*i-2; j++){
                cout<<" ";
            }
            cout<<"*";
        }



        cout<<endl;
    }

    // bottom part print code
    for(int i=n-1; i>0; i--){
        if(i!=1){
            for(int j=0; j<n-i; j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=0; j<=2*i-4; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        else{
            for(int j=0; j<n-i; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}