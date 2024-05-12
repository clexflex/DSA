#include<iostream>
#include <thread>
#include <chrono>
using namespace std;

void full_pyramid(int n){
   for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void inverted_full_pyramid(int n){
   for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the size of pyramid "<<endl;
    cin>>n;

    full_pyramid(n);
    inverted_full_pyramid(n);
    return 0;
}