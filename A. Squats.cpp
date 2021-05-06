#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   string s;
   cin>>n;
   cin>>s;
   n=n/2;
   int numx=0,numX=0;
   for(int i=0;i<s.size();i++){
       if(s[i]=='x'){
           ++numx;
       }
       else{
           ++numX;
       }
   }
   if(numX==n && numx==n){
       cout<<"0"<<"\n";
       cout<<s<<"\n";
       return 0;
   }
   else if(numX<n){
       cout<<n-numX<<"\n";
       int c=0;
       for(int i=0;i<s.size();i++){
           if(s[i]=='x'){
               s[i]='X';
               ++c;
           }
           if(c==(n-numX)){
               break;
           }
       }
       cout<<s<<"\n";
   }
   else if(numx<n){
       cout<<n-numx<<"\n";
       int c=0;
       for(int i=0;i<s.size();i++){
           if(s[i]=='X'){
               s[i]='x';
               ++c;
           }
           if(c==(n-numx)){
               break;
           }
       }
       cout<<s<<"\n";
   }
  return 0;
}
