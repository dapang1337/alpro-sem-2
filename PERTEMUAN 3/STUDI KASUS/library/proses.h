using namespace std;

class Proses {
	public :
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("api_data.txt");
			bool ayam_geprek = true;
      bool ayam_goreng = true;
      bool udang_goreng = true;
      bool cumi_goreng = true;
      bool ayam_bakar = true;
			while(!ambil_data.eof()){
				if (ayam_geprek){
					ambil_data >> bnyk_aymGpr;
					ayam_geprek = false;
				}
				else if(ayam_goreng){
					ambil_data >> bnyk_aymGr;
          ayam_goreng = false;
				}
        else if(udang_goreng){
          ambil_data >> bnyk_udgGr;
          udang_goreng = false;
        }
        else if(cumi_goreng){
          ambil_data >> bnyk_cmiGr;
          cumi_goreng = false;
        }
        else {
          ambil_data >> bnyk_aymBk;
          ayam_bakar = false;
        }
			}
			ambil_data.close();
		}

		void toFile(){
			int total = (hrg_aymGpr * bnyk_aymGpr) + (hrg_aymGr * bnyk_aymGr) + (hrg_udgGr * bnyk_udgGr) + (hrg_cmiGr * bnyk_cmiGr) + (bnyk_aymBk * hrg_aymBk);
			float batas = 25000;
			float t2 = float(total);
			float diskon = t2 * 0.15;
      int diskonOngkir;

      if(jrkRumah <=3){
        ongkir = 15000;
      }
      if(jrkRumah >= 3){
        ongkir = 25000;
      }

			if (batas <= total <= 50000){
        diskonOngkir = ongkir - 3000;
				t2 = t2 - diskon + diskonOngkir;
        }
      else if(150000 >= total >= 50000){
        diskonOngkir = ongkir - 5000;
        t2 = t2 - diskon+ diskonOngkir;
      }
      else if (total >= 150000){
        diskonOngkir = ongkir - 8000;
        t2 = t2 - diskon + diskonOngkir;
      }

      // if(jrkRumah <=3){
      //   ongkir = 15000;
      // }
      // if(jrkRumah >= 3){
      //   ongkir = 25000;
      // }
      

			tulis_data.open("api_data.txt");
			// tulis_data << total << endl;
			// tulis_data << diskon << endl;
			// tulis_data << t2 << endl;
			tulis_data << bnyk_aymGpr <<endl;
			tulis_data << bnyk_aymGr <<endl;
			tulis_data << bnyk_udgGr <<endl;
			tulis_data << bnyk_cmiGr <<endl;
			tulis_data << bnyk_aymBk <<endl;
      tulis_data << total << endl;
      tulis_data << ongkir << endl;
      tulis_data << diskon << endl;
      tulis_data << diskonOngkir <<endl;
      tulis_data << t2;
      
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_aymGpr;
		int bnyk_aymGr;
		int bnyk_udgGr;
		int bnyk_cmiGr;
		int bnyk_aymBk;
    int jrkRumah;
    int ongkir;
		int hrg_aymGr = 17000;
		int hrg_aymBk = 25000;
		int hrg_aymGpr = 21000;
		int hrg_cmiGr = 20000;
		int hrg_udgGr = 19000;
};
