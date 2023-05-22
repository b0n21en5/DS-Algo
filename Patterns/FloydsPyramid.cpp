#include <iostream>
using namespace std;

int main(){
    int num, i, j, count=1;
    cout<<"Enter num: ";cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}