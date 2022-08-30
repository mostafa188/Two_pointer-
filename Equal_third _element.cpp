 #include<bits/stdc++.h>
#define nl endl
using namespace std;
int x,l,r,sum;
void goto_fnc(int v[],int n){
          for(int i = n-1;i>=0;i--){
                    x=v[i];
                    l = 0;
                    r = i - 1 ;
                    while(l < r){
                              sum = v[l]+v[r];
                              if(sum == x){
                                        cout<< sum<<" " << v[l]<<" " <<v[r]<<nl;
                                        return;
                              }
                              if(sum > x) r--;
                              else l++;
                    }
                    
          }
          cout<<"No such that triplets exist here!!"<<nl;
}
int main(){
        int n;

        cin >> n ;

        int ara[n];

       for(int i=0 ; i< n; i ++){
               cin>> ara[i];
       }
        
        goto_fnc(ara,n);

        return 0;
}
