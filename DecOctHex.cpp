#include <iostream>
using namespace std;

int decimalToOctal(int n){
	int x=1;
	int res=0;

	while(x*8<n)
		x*=8;
	
	while(n!=0){
		res = res*10 + n/x;
		n = n%x;
		x /=8;
	}
	return res;

}
string decimalToHex(int n){
	int x=1;
	string res;

	while(x*16 < n)
		x*=16;
	
	while(n!=0){
		int div=n/x;
		if(div<8)
			res+=to_string(div);
		else{
			char hexchar = 'A'-10+div;
			res+= hexchar;
		}
		n = n%x;
		x/=16;
	}
	return res;
}

int main() {
	int n = 100;
	cout<<n<<endl;
	cout<<"In Octal: "<<decimalToOctal(n)<<endl;
	cout<<"In Octal: "<<decimalToHex(n)<<endl;
	return 0;
}