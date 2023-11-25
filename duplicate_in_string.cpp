#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s="rajarm";
    for(int i=0;s[i]!='\0';i++){
        int c=0;
        for(int j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j]){
                c++;
                s[j]=0;
        }
        
    }
    cout<<s[i]<<" "<<c<<endl;
}
}