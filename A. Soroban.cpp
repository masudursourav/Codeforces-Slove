#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  if(n==0){
    cout<<"O-|-OOOO"<<"\n";
    return 0;
  }
  while(n>0){
    int r=n%10;
    if(r>=5){
      cout<<"-O";
      r=r-5;
    }
    else{
      cout<<"O-";
    }
    cout<<"|";
    if(r==1){
      cout<<"O-OOO"<<"\n";
    }
    else if(r==2){
      cout<<"OO-OO"<<"\n";
    }
    else if(r==3){
      cout<<"OOO-O"<<"\n";
    }
    else if(r==3){
      cout<<"OOO-O"<<"\n";
    }
    else if(r==4){
      cout<<"OOOO-"<<"\n";
    }
    else if(r==0){
      cout<<"-OOOO"<<"\n";
    }
    n=n/10;
  }
  return 0;
}
