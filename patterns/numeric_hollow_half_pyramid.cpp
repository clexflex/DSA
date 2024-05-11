#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of triangle "<<endl;
    cin>>n;
    n++;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(j==0 || j==i-1 || i==n-1){
            cout<<j+1<<" ";
            } 
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

    return 0;
    
}
