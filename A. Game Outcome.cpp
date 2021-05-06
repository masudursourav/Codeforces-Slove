#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[100][100];
  long int sumr[100],sumc[100];
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
      sumr[i]+=a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      sumc[i]+=a[j][i];
    }
  }
  int c=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(sumc[j]>sumr[i]){
      ++c;
    }
  }
  }
  cout<<c<<"\n";
}
