 #include<bits/stdc++.h>
 #define nl endl
 using namespace std;
 vector<int> call(int ara[],int n,int sum){
    int i = 0;
    int j = n -1;
    vector<int>v;
    while(i<j){
        int b = ara[i]+ara[j];
        if(b == sum ){
            v.push_back(i);
            v.push_back(j);
            return v;
        }
        else if(b> sum) j--;
        else i++;
    }
    return v;
 }
 int main(){
         int n,item_sum;
         cin >> n ;

        int ara[n+1];
        for(int i=0 ; i< n; i ++){
                cin >> ara[i] ;
        }
        cin >> item_sum ;
        vector<int>v;
        v=call(ara,n,item_sum);
       
        if (v.size() != 0) cout << "True line !!"<<nl<<v[0]<<" "<<v[1]<<nl;
        else cout<<"False line !!"<<nl;
         return 0;
 }
