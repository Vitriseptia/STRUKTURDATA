#include<iostream>
using namespace std;
class bilangan
{
	friend ostream& operator<<(ostream&, const bilangan&);
	friend istream& operator>>(ostream&, bilangan&);
	
	public:
		bilangan(int a0=0, float b0=0.0) : a(a0),b(b0){}

		void banding_int(const bilangan&, const bilangan&);
		bilangan& operator=(const bilangan&);
		bilangan  operator+(const bilangan&);
		bilangan  operator-()const;	
		int a;
		float b;
		
	private:
		
			
};

ostream& operator<<(ostream& out, const bilangan& x)
{
	out<<"Bagian Integer : "<<x.a<<endl;
	out<<"Bagian Float   : "<<x.b<<endl;
	return out;
}

void bilangan::banding_int(const bilangan& x, const bilangan& y)
{
	if(x.a>y.a) cout<<x.a<<"::x Lebih Besar Dari "<<y.a<<"::y";
}

bilangan& bilangan::operator=(const bilangan& x)
{
	a=x.a;
	b=x.b;
	return*this;
}

istream& operator>>(istream& in, bilangan& x)
{
	cout<<"Masukkan Bagian Integer : ";in>>x.a;
	cout<<"Masukkan Bagian Float   : ";in>>x.b;
	return in;
}

bilangan bilangan::operator+(const bilangan& x)


{
	bilangan cc;
	cc.a=a+x.a;
	cc.b=b+x.b;
	return cc;
}

bilangan bilangan::operator-()const
{
	bilangan x;
	x.a=-a;
	x.b=-b;
	return x;
}

int main()
{
	bilangan s,t(-2,3.14),d;
	cout<<"Nilai Awal S\n"<<s;
	cout<<endl;
	cout<<"Nilai Awal T Dari Deklarasi\n"<<t;
	s=t;
	cout<<"Setelah S Di-Assign T\n";
	cout<<"Masukkan Nilai-Nilai Objek D ";cin>>d;
	cout<<"Setelah D + T =>\n"<<d+t;
	cout<<"Nilai D Dinegatifkan\n"<<-d;
}