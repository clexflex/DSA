#include<iostream>
using namespace std;

int main(){

    int row;
    int col;
    cout<<"enter the height of rectangle "<<endl;
    cin>>row;

    cout<<"enter the width of rectangle "<<endl;
    cin>>col;

    for(int i = 0; i<row; i++){
        for (int j = 0; j < col; j++)
        {
            if(i ==0 || i==row-1){
                cout<<"* ";
            }
            else{
                if(j==0|| j==col-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }


    return 0;
}