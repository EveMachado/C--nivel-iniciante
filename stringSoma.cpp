#include <iostream> 
#include <sstream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stringstream ss;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
				ss<<s[i];
			}
			else{
				ss<<' ';
			}
		}
		int a,b,c;
		ss>>a>>b>>c;
		cout<<a+b+c<<endl;
	}
	return 0;
}
