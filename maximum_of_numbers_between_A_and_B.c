#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a,b;
    cin>>a>>b;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=a && arr[i]<=b){
            max=max>arr[i]?max:arr[i];
        }
    }
    if(max!=0)
    cout<<max<<"
";
    else
    cout<<"-1"<<"
";
}