#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mid=n/2;
    int fh=0,sh=0;
    for(int i=0;i<n;i++){
        if(i<mid){
            fh+=arr[i];
        }
        else{
            sh+=arr[i];
        }
    }
    cout<<sh-fh<<"
";
}