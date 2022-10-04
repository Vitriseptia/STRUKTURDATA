#include<iostream>
using namespace std;
void cari(int x, int n){
	static int i;
	if(n==0) cout<<"bilangan tidak ditemukan\n";
	else if(x==n)cout<<"bilangan ditemukan setelah perulangan ke \n"<<i;
	else{
		i++;
		cari(x,n-1);
	}
}
int main(int argc, char*argv[]){
	cari(14,9);
	system("pause");
	return EXIT_SUCCESS;
}