#include<bits/stdc++.h>
#define nl endl
using namespace std;

vector<int> x_search(int ar[],int br[],int a,  int b,int item){
        int l,r,sum,mini;
        vector < int > v;
        l=0;
        r=b-1;
        mini = INT_MAX;
        while(l<a && r>=0){
                sum = ar[l]+br[r];
                if(abs(sum-item) < mini){
                        if(v.empty()){
                                v.push_back(l);
                                v.push_back(r);
                                mini = abs(sum-item);
                        }else{
                                v.clear();
                                v.push_back(l);
                                v.push_back(r);
                                mini = abs(sum-item);
                        }
                }
                else if(sum > item) r--;
                else l++;
        }
        return v;
}

int main(){
        int a,b,x;
        vector < int > v;

        cin >> a>> b >> x ;

        int ar[a+1],br[b+1];
        for(int i=0 ; i< a; i ++){
                cin>>ar[i];
        }
        for(int i=0 ; i< b; i ++){
                cin>>br[i];
        }
        sort(ar,ar+a);
        sort(br,br+b);

        v = x_search(ar,br,a,b,x);
        for(int i=0 ; i< a; i ++){
                cout<<ar[i]<<" ";
        }
        cout<<nl;
        for(int i=0 ; i< b; i ++){
                cout<<br[i]<<" ";
        }
        cout<<nl;
        for(int i=0 ; i< v.size(); i ++){
                if(i==0)
                cout<<ar[v[i]]<<" ";
                else 
                cout<<br[v[i]]<<nl;
        }
        

        return 0;
}
