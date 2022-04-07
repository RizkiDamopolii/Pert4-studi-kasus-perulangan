using namespace std;
class Proses{
public:
  void Hitung(){
    ambil_data.open("api_data.txt");
    cout<<" Masukan Jarak ongkir (KM) : ";cin>>j;
    if(j < 3){
      ho = 15000;
    }else{
       ho = 25000;
    }
    if(tot_semua > 25000 && tot_semua < 50000){
       ho = ho - 3000;  
    }else if(tot_semua > 50000 && tot_semua < 150000){
      ho = ho - 5000;
    }else if(tot_semua > 150000){
      ho = ho - 8000;
    }
    if(tot_semua > 50000 && tot_semua < 150000){
			tot_bayar = tot_semua - (tot_semua * 0.15) + ho; 
		}else if(tot_semua > 150000){
			tot_bayar = tot_semua - (tot_semua * 0.35) + ho;
		}
    ambil_data.close();
  }
  void cetak(){
    cout<<" Total Harga Dari Semua Pesanan adalah Rp."<<tot_bayar<<endl<<endl;
		cout<<"============================================================\n"<<endl;
  }
  void getFile(){
    ambil_data.open("api_data.txt");
    ambil_data>>tot_semua;
    ambil_data.close();
  }
  void toFile(){
    tulis_data.open("api_data.txt");
    tulis_data<<tot_semua<<endl;
    tulis_data<<ho<<endl;
    tulis_data<<tot_bayar;
    tulis_data.close();
  }
  
private:
  ifstream ambil_data;
  ofstream tulis_data;
  int j, ho;
  double tot_bayar, tot_semua;
};