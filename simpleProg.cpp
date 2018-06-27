#include <bits/stdc++.h>
using namespace std;


int main(){
	int t, n; 
	cin>>t;
	while(t--){
		cin>>n;
		int x;
		int sum = 0;
		for(int i = 0; i < n; i++){
			cin>>x;
			sum = sum + x;
		}
		cout<<sum<<endl;
	}
	return 0;
}
