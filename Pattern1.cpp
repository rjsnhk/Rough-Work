#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a num";
    cin>>n;
    for(int r=1;r<=n;r++){
        for(int sp=1;sp<=n-r;sp++){
            cout<<' ';
        }
        for(int st=1;st<=2*r-1;st++){
            if(r==1 || r==n ||st==1 || st==2*r-1)
                cout<<r;
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
