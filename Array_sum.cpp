#include<bits/stdc++.h>
 #define nl endl
 using namespace std;
 bool call(int ara[],int n,int sum){
    int i = 0;
    int j = n -1;

    while(i<j){
        int b = ara[i]+ara[j];
        if(b == sum ) return true ;
        else if(b> sum) j--;
        else i++;
    }
    return false;
 }
 int main(){
         int n,item_sum;
         cin >> n ;

        int ara[n+1];
        for(int i=0 ; i< n; i ++){
                cin >> ara[i] ;
        }

        cin >> item_sum ;
        if (call(ara,n,item_sum)) cout << "True line !!"<<nl;
        else cout<<"False line !!"<<nl;
         return 0;
 }
