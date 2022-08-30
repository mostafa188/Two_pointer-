#include<bits/stdc++.h>
#define nl endl
using namespace std;

void solve(int ara[],int n ,int item){
        for(int i=0;i<n;i++){
                int l , r ;
                l = 0 ;
                r = n - 1; 
                while(l<r){
                        int sum = ara[i]+ara[l]+ara[r];
                        if(sum == item) cout<< ara[i]<<" "<< ara[l] <<" "<<ara[r]<<nl;
                        if(sum > item ) r--;
                        else l ++;
                }
        }
}
int main(){
        int n,item;
        cin >> n>> item ;

        int ara[n+1];

        for(int i=0;i<n;i++) cin >> ara[i] ;

        solve(ara,n,item);
        return 0;
}
