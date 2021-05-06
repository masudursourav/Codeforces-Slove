#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a[1000],p=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
            ++p;
        }
    }
    vector<int>s1,s2,s3;
    if(p==0){
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(a[i]<0 && c1==0){
                s1.push_back(a[i]);
                ++c1;
            }
            else if(a[i]<0 && c2<2){
                s2.push_back(a[i]);
                ++c2;
            }
            else{
            s3.push_back(a[i]);
            }
        }
    }
    else{
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(a[i]<0 && c1==0){
                s1.push_back(a[i]);
                ++c1;
            }
            else if(a[i]>0 && c2==0){
                s2.push_back(a[i]);
                ++c2;
            }
            else{
            s3.push_back(a[i]);
            }
        }
    }
    cout<<s1.size();
    for(auto a:s1){
        cout<<" "<<a;
    }
    cout<<"\n";
    cout<<s2.size();
    for(auto a:s2){
        cout<<" "<<a;
    }
    cout<<"\n";
    cout<<s3.size();
    for(auto a:s3){
        cout<<" "<<a;
    }
    cout<<"\n";
}
