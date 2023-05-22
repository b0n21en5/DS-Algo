#include <iostream>
using namespace std;

int main(){
    int num, i, j;
    cout<<"Enter num: ";cin>>num;
    for (i=1;i<=num;i++){
        for(j=1;j<=num;j++){
            if (j<=num-i) cout<<" ";
            else cout<< "*";
        }
        cout<<endl;
    }
}