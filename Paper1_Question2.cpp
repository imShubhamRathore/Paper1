#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)cin>>arr[i];
    int tem[n];
    tem[0]=arr[0];
    int t = 1;
    cout<<tem[0]<<" ";
    while(t<n){
        int i = t;
        tem[i]=arr[i];
        while(tem[i-1]>tem[i]&&i>0){
            swap(tem[i-1],tem[i]);
            i--;
        }
        if(t%2){
            cout<<((float)tem[t/2]+(float)tem[t/2+1])/2<<" ";
        }
        else cout<<tem[t/2]<<" ";
        t++;
    }
}
