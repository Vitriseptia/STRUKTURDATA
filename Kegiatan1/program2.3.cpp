#include<iostream>
using namespace std;

float pangkat(float x, int n){
	if(n==0)return 1;
	if(n==1)return x;
	if(n%2==1){
		cout<<"masuk bagian ganjil\n";
		return pangkat(x,n-1)*x;
	}
	else{
		cout<<"masuk bagian genap\n";
		return pangkat(x*x,n/2);
	}
}
int main(int argc, char*argv[]){
	pangkat(2,6);
	system("pause");
	return EXIT_SUCCESS;
}