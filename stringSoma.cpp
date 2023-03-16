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
			else{            //Se o caractere for um número, o programa o adiciona a uma variável "stringstream" chamada "ss". 
		          ss<<' ';       //Se o caractere não for um número, o programa adiciona um espaço em branco à "stringstream".                               
			}
		}
		int a,b,c;
		ss>>a>>b>>c;
		cout<<a+b+c<<endl;
	}
	return 0;
}
