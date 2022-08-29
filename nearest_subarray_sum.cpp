#include<bits/stdc++.h>
#define nl endl
using namespace std;

vector<int> solve(int ara[],int n,int dif){
	int l,r,min;
	vector < int > v;
	l = 0 ;
	r = n - 1 ;
	min= INT_MAX;
	
	while(l<r){
		int sum = ara[l] + ara[r];
		if(abs(sum - dif) < min){
			if(v.empty()){
				v.push_back(l);
				v.push_back(r);
				min = abs(sum - dif);
			}
			else{
				v.clear();
				v.push_back(l);
				v.push_back(r);
				min = abs(sum - dif);
			}
		}
		if(sum > dif) r--;
		else l++;
	}
	return v ;
}

int main(){
         int n,dif;
         cin >> n ;

	vector<int> v;

	int ara[n+1];

	for(int i=0 ; i< n; i ++){
	        cin>> ara[i];
	}

	sort(ara,ara+n);

	for(int i=0 ; i< n; i ++){
	        cout<< ara[i]<<" ";
	}

	cout<<nl;
	cin >> dif ;

	v = solve(ara,n,dif);
	for(int i=0 ; i< v.size(); i ++){
	        cout<<ara[v[i]]<<" ";
	}
	
         return 0;
}
