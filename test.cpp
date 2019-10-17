#include <bits/stdc++.h>
using namespace std;

#define int long

signed main() {
	int t0;
	cin>>t0;
	while(t0--){
	    int n;
	    long val;
	    cin>>n;
	    vector<long>arr(n);
	    long table[1000000]={0};
	    for(int i=0;i<n;i++){
	        cin>>val;
	        arr[i]=val;
	        table[val*val]=1;
	    }
	    int flag=0;
	    for(int i=0;i<n-1;i++){
	        flag=0;
	        for(int j=i+1;j<n;j++){
	            if(table[arr[i]*arr[i]+arr[j]*arr[j]]==1){
	                cout<<"Yes"<<endl;
	                flag=1;
	            }
	        }
	        if(flag)
	            break;
	    }
	    if(!flag)
	        cout<<"No"<<endl;
	    
	}
	return 0;
}
