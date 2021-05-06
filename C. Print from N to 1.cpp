#include <bits/stdc++.h>
using namespace std;
void print(int i){
    if(i==0){
        return;
    }
    cout<<i;
    if(i>1){
        cout<<" ";
    }
    else{
        cout<<"\n";
    }
    print(i-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
}
