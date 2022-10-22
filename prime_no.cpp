#include <iostream>
using namespace std;

int main(){
	int i,n;
	int flag=1;
	
	cout<<"Enter a positive integer: ";
	cin>>n;
	
	if (n == 0 || n == 1) {
		flag=0;
	}
	for (i = 2; i <= n/2; ++i) {
		if (n % i == 0) {
	    flag=0;
	    break;
	    }
	}
	
	if (flag==1)
	    cout <<n<<" is a prime number"<<endl;
	else
	    cout <<n<<" is not a prime number"<<endl;
	
	return 0;
}
