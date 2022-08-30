#include<bits/stdc++.h>
using namespace std ;
#define nl '\n'

void solve(int ara[], int n,int item){
	bool cnt = true;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int l,r,sum;
			l = j+1;
			r = n-1;
			while(l<r){
				sum = ara[i]+ara[j]+ara[l]+ara[r];

				if(sum == item){
					#include<bits/stdc++.h>
using namespace std ;
#define nl '\n'

void solve(int ara[], int n,int item){
	bool cnt = true;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int l,r,sum;
			l = j+1;
			r = n-1;
			while(l<r){
				sum = ara[i]+ara[j]+ara[l]+ara[r];

				if(sum == item){
					cout<<'('<<ara[i]<<','<<ara[j]<<' '<<ara[l]<<','<<ara[r]<<')'<<nl;
					cnt = false;
				}
				if(sum > item ) r --;
				else l++;
			}
		}
	}
	if(cnt) cout<<"\nTheir is no pair !!"<<nl;
}
int main(){
   	int  n,item;

   	cin >> n>> item;

   	int ara[n];
   	for(int i = 0; i< n ;i++){
   		cin >> ara[i];
   	}

	
   	solve(ara,n,item);
   	return 0 ;
}
					cnt = false;
				}
				if(sum > item ) r --;
				else l++;
			}
		}
	}
	if(cnt) cout<<"\nTheir is no pair !!"<<nl;
}
int main(){
   	int  n,item;

   	cin >> n>> item;

   	int ara[n];
   	for(int i = 0; i< n ;i++){
   		cin >> ara[i];
   	}

	
   	solve(ara,n,item);
   	return 0 ;
}
