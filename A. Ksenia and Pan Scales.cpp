//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,q,fi,se;
    cin>>s;
    cin>>q;
    int mid;
    for(int i=0;i<s.size();i++){
      if(s[i]=='|'){
        mid=i;
        break;
      }
    }
    int l1=0,l2=0;
    for(int i=0;i<mid;i++){
      ++l1;
      fi+=s[i];
    }
    for(int i=mid+1;i<s.size();i++){
      ++l2;
      se+=s[i];
    }
    if(l1+q.size()==l2){
      cout<<q+s<<"\n";
    }
    else if(l2+q.size()==l1){
      cout<<s+q<<"\n";
    }
    else if(l1==l2 && (q.size()%2==0)){
       for(int i=0;i<q.size();i++){
         if(i%2==0){
           fi+=q[i];
         }
         else{
           se+=q[i];
         }
       }
       cout<<fi<<"|"<<se<<"\n";
    }
    else if((l1+l2+q.size())%2==0){
      for(int i=0;i<q.size();i++){
        if(l1<l2){
          fi+=q[i];
          ++l1;
        }
        else if(l2<l1){
          ++l2;
          se+=q[i];
        }
        else if(l1==l2){
          fi+=q[i];
          se+=q[i+1];
          i=i+1;
          ++l1;
          ++l2;
        }
      }
      if(l1==l2)
      cout<<fi<<"|"<<se<<"\n";
      else
        cout<<"Impossible"<<"\n";
    }
    else{
      cout<<"Impossible"<<"\n";
    }

    return 0;
}
