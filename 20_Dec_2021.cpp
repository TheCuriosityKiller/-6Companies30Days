#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
	
	
	int t;
	cin>>t;
	while(t--){
		ll a,s;
		cin>>a>>s;
		string aa,ss,b;
		aa=to_string(a);
		ss=to_string(s);
		int la,ls,flag=0;
		la=aa.length();
		ls=ss.length();
		int i=ls-1,j=la-1;
		
		
		while(i>=0 && j>=0){
			if(ss[i]>=aa[j]){
				
				b = to_string(ss[i]-aa[j]) + b;
				//cout<<b;
				i--;
				j--;
			}
			else{
				b = to_string( ss[i]-aa[j] + 10 ) + b;
				//cout<<ss[i-1];
				if(i-1<0 || ss[i-1]!='1')
				{
					flag=1;
					break;
				}
				else{
					i=i-2;
					j--;
					
				}
				
				
			}
			
			
		}
		
		 if(flag)
			cout<<-1<<endl;
		else{
			if(j>=0) //a not over
				cout<<-1<<endl;
			
			else{//
				if(i>=0)
					{
						while(i>=0){
							b=ss[i]+b;
							i--;
						}
						cout<<b<<endl;
					}
				else{
					
						cout<<stoi(b)<<endl;
				}
					
			}//
			
		}
		
		
		
		
	}
	return 0;
}
