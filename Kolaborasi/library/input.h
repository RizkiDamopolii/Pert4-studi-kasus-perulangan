using namespace std;

class Input {
public:
void cetak (){
  cout<<"\t\tRumah Makan Sabar Indah\n"<<endl;
	cout<<" Menu yang tersedia : \n";
	cout<<" 1. Ayam geprek		: Rp.21000\n";
	cout<<" 2. Ayam goreng		: Rp.17000\n";
	cout<<" 3. Udang goreng	: Rp.19000\n";
	cout<<" 4. Cumi goreng		: Rp.20000\n";
	cout<<" 5. Ayam bakar		: Rp.25000\n\n";
}

void perulangan(){
  x[0]=ak;
	x[1]=ag;
	x[2]=ug;
	x[3]=cg;
	x[4]=ar;
  cout<<" Masukkan Jumlah Jenis Pesanan Yang Dibeli! : ";
	cin>>a;
	for (int i=1; i<=a; i++){
		cout<<"============================================="<<endl;
		cout<<" Pesanan ke-"<<i<<endl;
		cout<<" Masukkan Nomor Pesanan (Lihat Menu) : ";
		cin>>g;
		h = g-1;
		x[h];
		cout<<" Masukkan Jumlah Pesanan yang dibeli : ";
		cin>>y[i];
    tot[i] = y[i] * x[h];
		cout<<" Harga Total Pesanan : Rp."<<tot[i]<<endl;
		tot_semua += tot [i];
	}
  cout<<"============================================="<<endl;
  cout<<" Harga Total Semua Pesanan = "<<tot_semua<<endl;
}

void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << tot_semua << endl;
			tulis_data.close();
}

private:
ofstream tulis_data;
int y[100], x[5], a, i, g, h, j, ho; 
float tot[100];
double tot_semua;
int ak = 21000, ag = 17000, ug = 19000, cg = 20000, ar = 25000;
};