#include<iostream>
using namespace std;

void tampil(int n){
	static int i=0;
	if(n<=0) return;
	cout<<"pemanggilan ke : "<<++i<<endl;
	tampil(n-1);
}
int main(int argc, char*argv[]){
	int n=3;
	tampil(n);
	system("pause");
	return EXIT_SUCCESS;
}