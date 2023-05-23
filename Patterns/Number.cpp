// n=5
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5


#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter num: ";cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}