// n=3

// *    *
// **  **
// ******
// ******
// **  **
// *    *



#include <iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter num: ";cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=2*num-2*i;k++){
            cout<<" ";
        }
        for(int m=1;m<=i;m++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    for(int i=num;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=2*num-2*i;k++){
            cout<<" ";
        }
        for(int m=1;m<=i;m++){
            cout<<"*";
        }
        cout<<endl;
    }
}