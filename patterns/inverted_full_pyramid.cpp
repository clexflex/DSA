#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of pyramid "<<endl;
    cin>>n;
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
    return 0;
}