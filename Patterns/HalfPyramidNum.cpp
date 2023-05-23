// n=5

// 1
// 22
// 333
// 4444
// 55555


#include <iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter num: ";cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}