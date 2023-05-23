// n=5

// *****
// *   *
// *   *
// *   *
// *****


#include <iostream>
using namespace std;

int main(){
    int row, col, r, c;
    cout<<"Enter row: ";cin>>row;
    cout<<"Enter column: ";cin>>col;
    for(r=1;r<=row;r++){
        for(c=1;c<=col;c++){
            if(r==1 || r==row || c==1 || c==col){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}