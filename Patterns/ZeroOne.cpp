// num=5
// 1
// 01
// 101
// 0101
// 10101

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Num: ";cin>>num;

    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<"1 ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}