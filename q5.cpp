//123
//456
//789
#include<iostream>
using namespace std;
int main(){
    int count=1;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}