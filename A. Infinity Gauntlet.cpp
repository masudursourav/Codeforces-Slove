#include <bits/stdc++.h>
using namespace std;
int main()
{
  int v[7]={1,2,3,4,5,6};
  string s;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s=="purple"){
      v[0]=0;
    }
    else if(s=="green"){
      v[1]=0;
    }
    else if(s=="blue"){
      v[2]=0;
    }
    else if(s=="orange"){
      v[3]=0;
    }
    else if(s=="red"){
      v[4]=0;
    }
    else if(s=="yellow"){
      v[5]=0;
    }
  }
  int l=6-n;
  cout<<l<<"\n";
    if(v[0]==1){
      cout<<"Power"<<"\n";
    }
    if(v[1]==2){
      cout<<"Time"<<"\n";
    }
    if(v[2]==3){
      cout<<"Space"<<"\n";
    }
    if(v[3]==4){
      cout<<"Soul"<<"\n";
    }
    if(v[4]==5){
      cout<<"Reality"<<"\n";
    }
    if(v[5]==6){
      cout<<"Mind"<<"\n";
    }
}
