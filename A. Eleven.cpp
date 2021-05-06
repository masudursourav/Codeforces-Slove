#include <bits/stdc++.h>
using namespace std;
int a[1000];
void fib(){
  a[0]=1;
  a[1]=1;
  for(int i=2;i<=1000;i++){
    a[i]=a[i-2]+a[i-1];
  }
}
int main(){
fib();
int n;
cin>>n;
for(int i=1;i<=n;i++){
  for(int j=0;j<=i;j++){
    if(a[j]==i){
      cout<<"O";
      break;
    }
    if(a[j]>i){
      cout<<"o";
      break;
    }
  }
}
cout<<"\n";
return 0;
}
