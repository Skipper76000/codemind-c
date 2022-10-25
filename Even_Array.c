#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],cnt=0,c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            cnt++;
        }
        c++;
    }
    if(cnt==c){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}