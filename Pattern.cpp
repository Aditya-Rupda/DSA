#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,z;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            cout<<"  ";
        }
        for(k=0;k<=i-1;k++){
            cout<<" *";
        }
        for(z=0;z<=i;z++){
            cout<<" *";
        }
        cout<<endl;
    }
}