#include <iostream>
using namespace std;

class Faktorial{
    public:
    int angka; int hasilAngka;
    
    void petunjukPenggunaan(){
        cout << "Ketikkan ''Start Aplikasi'' Untuk Memulai" << endl;
    }

    void startApp(){
        
        cout << "\n <<=== MATH BY DAVISAPP ===>>" << endl;
        cout << "Angka Yang Dipilih: "; cin >> angka; cout << endl;
        cout << angka << "!= "; hasilAngka = angka;
    }
    
    void mulaiFaktorial(){
        for (int a=0;a<angka;a++){
            angka = angka -1;
            hasilAngka *= angka;
        }
        
        cout << hasilAngka << endl << "\n";
    } 

};

void mulaiUlang(){
    Faktorial done;
    done.startApp(); done.mulaiFaktorial();
}

int main(){
    Faktorial done;
    string startAplikasi; string startApp = "Start Aplikasi";
    string lanjutkan;
    
    done.petunjukPenggunaan();
    getline(cin, startAplikasi); cout << endl;
    
    if(startAplikasi == startApp){
    done.startApp();
    done.mulaiFaktorial();
    }
    
    else{
        cout << "Ketikkan ''Start Aplikasi'' Untuk Memulai" << endl;
    }
    
    
    cout << "Lanjutkan? (Ya/Tidak) --> "; cin >> lanjutkan; cout << endl;
    
    do{
    if(lanjutkan == "Ya"){
        mulaiUlang();
        cout << "Lanjutkan? (Ya/Tidak) --> "; cin >> lanjutkan; cout << endl;
    }
    
    else{
        cout << "Terimakasih, Salam Hormat" << endl << "Davis App,";
    }
  }while(lanjutkan=="Ya");
}
