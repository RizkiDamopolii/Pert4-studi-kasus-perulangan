using namespace std;
class Output{
public:
  void cetak(){
    cout<<"============================================"<<endl;
  	cout<<"|               STRUK PESANAN              |"<<endl;
  	cout<<"============================================"<<endl;
  	cout<<" Total Bayar   = "<<data_file[0]<<endl;
  	cout<<" Diskon = ";
  	if(data_file[0] > 50000 && data_file[0] < 150000){
  		cout<<"15%  = "<<data_file[0] - (data_file[0] * 0.15);
  	}else if(data_file[0] > 150000){
  		cout<<"35%  = "<<data_file[0] - (data_file[0] * 0.35);
  	}
  	cout<<"\n";
  	cout<<" Ongkir        = "<<data_file[1];
  	cout<<endl;
  	cout<<"|==========================================|"<<endl;
  	cout<<"|Total Harga Semua Pesanan : Rp."<<data_file[2]<<" |"<<endl;
  	cout<<"|==========================================|"<<endl;
  	cout<<"|TERIMAKASIH TELAH BERKUNJUNG KE RUMAH MAKAN KAMI |"<<endl;
  	cout<<"============================================"<<endl;
  }
  void struk(){
  	tulis_data.open("Struk.txt", ios::trunc);
  	tulis_data<<"============================================"<<endl;
  	tulis_data<<"|               STRUK PESANAN              |"<<endl;
  	tulis_data<<"============================================"<<endl;
  	tulis_data<<" Total Bayar  = "<<data_file[0]<<endl;
  	tulis_data<<" Diskon = ";
  	if(data_file[0] > 50000 && data_file[0] < 150000){
  	tulis_data<<"15% = "<<data_file[0] - (data_file[0] * 0.15);
  	}else if(data_file[0] > 150000){
  		tulis_data<<"35% = "<<data_file[0] - (data_file[0] * 0.35);
  	}
  	tulis_data<<"\n";
  	tulis_data<<" Ongkir       = "<<data_file[1];
  	tulis_data<<endl;
  	tulis_data<<"|==========================================|"<<endl;
  	tulis_data<<"|Total Harga Semua Pesanan : Rp."<<data_file[2]<<" |"<<endl;
  	tulis_data<<"|==========================================|"<<endl;
  	tulis_data<<"|TERIMAKASIH TELAH BERKUNJUNG KE RUMAH MAKAN KAMI |"<<endl;
  	tulis_data<<"============================================"<<endl;
  }

  void getData(){
  	ambil_data.open("api_data.txt");
  	while(!ambil_data.eof()){
    	ambil_data >> data_file[index];
    	index += 1;
  	}
  	ambil_data.close();
  }

private:
  int data_file[30];
  int index = 0; 
  ifstream ambil_data;
  ofstream tulis_data;
};