//1
//2 3
//4 5 6
//7 8 9 10
#include<iostream>
using namespace std;
int main(){
    int count=1;
    int row=1;
    int n;
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}