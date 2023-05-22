#include <iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter num: ";cin>>row;
    for(row;row>0;row--){
        for(col=row;col>0;col--){
            cout<<"*";
        }
        cout<<endl;
    }
}