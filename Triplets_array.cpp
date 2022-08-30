#include<bits/stdc++.h>
#define nl endl
using namespace std;

void triplets(int ar[] , int n){
        for(int i=0;i<n;i++){
                unordered_set<int> s ;
                for(int j=i+1;j<n;j++){
                        int sum;
                        sum = -(ar[i]+ar[j]);
                        if(s.find(sum) != s.end()){
                                cout<< ar[i]<<"  "<<ar[j]<<" "<< sum<<nl;
                        }else{
                                s.insert(ar[j]);
                        }
                }
        }
}
int main(){
        int n;
        vector<int>v;
        cin >> n ;

        int ara[n+1];
        for(int i=0 ; i< n; i ++){
                cin>> ara[i];
        }
        
        triplets(ara,n);

        return 0;
}
