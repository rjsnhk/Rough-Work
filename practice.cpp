#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum,i;
    sum=0;
    i=0;
    int a[i+1];
    while(cin>>n && n>=0){
        a[i]=n;
        i++;
        sum=sum+n;

    }
    cout<<sum<<" "<<sum/i;
    for(int k=0;k<i;k++){
        cout<<a[k];
    }
}