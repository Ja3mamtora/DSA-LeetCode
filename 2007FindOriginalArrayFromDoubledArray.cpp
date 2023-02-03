
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int k=0;k<n;k++){
    	int t;
    	cin>>t;
    	string s;
    	cin>>s;
    	int i=0,j=t-1;
    	int c=0;
    	while(i<j){
    		if(s[i]!=s[j]){
    			c=c+2;
    			i++;
    			j--;
    		}
    		else
    		break;
    	}
    	cout<<t-c<<endl;
    }
    
}