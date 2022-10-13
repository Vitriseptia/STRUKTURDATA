#include<iostream>
#define maks 5
using namespace std;

class array1d{
	friend ostream& operator<<(ostream&, const array1d&);
	friend istream& operator>>(istream&, array1d&);
	public:
		array1d();
		void cetak();
		void geser_kiri();
		void geser_kanan();
	private :
		char a[maks];
};

array1d::array1d(){
	for(int i=0; i<maks; i++){
		a[i]='0';
	}
}
void array1d::cetak(){
	for(int i=0; i<maks; i++){
		cout<<a[i]<<" ";
	}
}
ostream& operator<<(ostream& out, const array1d& x){
	for(int i=0; i<maks; i++){
		cout<<x.a[i]<<" ";
	}
	cout<<endl;
	return out;
}
istream& operator>>(istream& in, array1d& x){
	int posisi;
	cout<<"mengisi array pada posisi ke : ";
	cin>>posisi;
	cout<<"berapa angka yang mau anda isikan : ";
	in>>x.a[posisi-1];
}

void array1d::geser_kanan(){
	int n=maks;
	int temp=a[n-1];
	for(int i=n-1; i>=0; i--)
	a[i+1]=a[i];
	a[0]=temp;
}
void array1d::geser_kiri(){
	int n=maks;
	int temp=a[0];
	for(int i=0; i<n; i++)
	a[i]=a[i+1];
	a[n-1]=temp;
}
main(){
	array1d x;
	cout<<"array masih kosong : "<<x;
	cin>>x;
	cout<<"isi array saat ini : "<<x;
	x.geser_kiri();
	cout<<"isi array setelah digeser ke kiri : "<<x;
	x.geser_kanan();
	cout<<"isi array setelah digeser ke kanan : "<<x;
	return 0;
}