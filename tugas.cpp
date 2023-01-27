#include <iostream>
using namespace std;

struct harga_bbm{
    int pertamax_turbo, pertamax, pertalite, pertamina_dex, dexlite ;
};

void data();

int main(){
        system("cls");
        string user = "1", pass = "1";
    
	string username, password;
    
	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t ||======== Program Aplikasi Pembelian BBM ========||\n\n";
	cout << "\t\t\t\t\t  Username : "; 
    cin>>username;
	cout << "\t\t\t\t\t  Password : "; 
    cin>>password;
    cout<<endl;
        if (username == user && password == pass){
            cout << "\n\n Anda berhasil login. \t" << endl;
            system("pause"); 
            system("cls"); 
            data();
        } else if (username != user && password != pass){
            cout << "\n\n Username dan Password salah. \t";
            system("pause");
            system("cls");
            main();
        } else if (username != user) {
            cout << "\n\n Username Salah. \t";
            system("pause");
            system("cls");
            main();
        } else if (password != pass) {
            cout << "\n\n Password Salah. \t";
            system("pause");
            system("cls");
            main();
        };
    return 0;
};

void data(){
                harga_bbm bbm[4];
                    bbm[0].pertamax_turbo = 15900;
                    bbm[1].pertamax = 14500;
                    bbm[2].pertalite = 10000;
                    bbm[3].pertamina_dex = 17400;
                    bbm[4].dexlite = 17100;

        int pilihan;
        char ulang;
        do
        {
            cout<<"\t||=============== Aplikasi Pembelian BBM ============||"<<endl;
            cout<<"\t||======================== Menu =====================||\n";
            cout<<"\t  1. Pertamax Turbo\t\t: 15.900 per liter\n";
            cout<<"\t  2. Pertamax\t\t\t: 14.500 per liter\n";
            cout<<"\t  3. Pertalite\t\t\t: 10.000 per liter\n";
            cout<<"\t  4. Pertamina Dex\t\t: 17.400 per liter\n";
            cout<<"\t  5. Dexlite\t\t\t: 17.100 per liter\n";
            cout<<"\t  6. Exit\n";
            cout<<"\t||===================================================||\n";
            cout << endl;

                cout <<"\tMasukan Pilihan anda[ 1 s.d. 6 ] = ";;
                cin >> pilihan;

                switch (pilihan)
                {
                    case 1:
                        system("cls");
                        int beli, total, cash, kembali;
                        cout<<"\t||=============== Aplikasi Pembelian BBM ============||"<<endl;
                        cout<<"\t||======================== Menu =====================||\n";
                        cout << "\tAnda Memilih Pertamax Turbo : Rp. 15.900 per liter\n\n";
                        cout << "\tMasukkan berapa liter : "; cin >> beli;
                            total = beli * bbm[0].pertamax_turbo;
                        cout << "\tJumlah yang harus di bayar Rp." << total << endl;
                        cout << "\tMasukkan uang cash anda : Rp."; cin >> cash;
                            kembali = cash - total;
                        cout << "\tUang kembalian : Rp." << kembali;
                        cout<<"\n\n";
                        break;

                    case 2:
                        system("cls");
                        int beli_ptx, total_ptx, cash_ptx, kembali_ptx;
                        cout<<"\t||=============== Aplikasi Pembelian BBM ============||"<<endl;
                        cout<<"\t||======================== Menu =====================||\n";
                        cout << "\tAnda Memilih Pertamax : Rp. 14.500 per liter\n\n";
                        cout << "\tMasukkan berapa liter : "; cin >> beli_ptx;
                            total_ptx = beli_ptx * bbm[1].pertamax;
                        cout << "\tJumlah yang harus di bayar Rp." << total_ptx << endl;
                        cout << "\tMasukkan uang cash anda : Rp."; cin >> cash_ptx;
                            kembali_ptx = cash_ptx - total_ptx;
                        cout << "\tUang kembalian : Rp." << kembali_ptx;
                        cout<<"\n\n";
                        break;

                    case 3:
                        system("cls");
                        int beli_pre, total_pre, cash_pre, kembali_pre;
                        cout<<"\t||=============== Aplikasi Pembelian BBM ============||"<<endl;
                        cout<<"\t||======================== Menu =====================||\n";
                        cout << "\tAnda Memilih Petralite : Rp. 10.000 per liter\n\n";
                        cout << "\tMasukkan berapa liter : "; cin >> beli_pre;
                            total_pre = beli_pre * bbm[2].pertalite;
                        cout << "\tJumlah yang harus di bayar Rp." << total_pre << endl;
                        cout << "\tMasukkan uang cash anda : Rp."; cin >> cash_pre;
                            kembali_pre = cash_pre - total_pre;
                        cout << "\tUang kembalian : Rp." << kembali_pre;
                        cout<<"\n\n";
                        break;
                    case 4:
                        system("cls");
                        int beli_ptadex, total_ptadex, cash_ptadex, kembali_ptadex;
                        cout<<"\t||=============== Aplikasi Pembelian BBM ============||"<<endl;
                        cout<<"\t||======================== Menu =====================||\n";
                        cout << "\tAnda Memilih Pertamina Dex: Rp. 17.400 per liter\n\n";
                        cout << "\tMasukkan berapa liter : "; cin >> beli_ptadex;
                            total_ptadex = beli_ptadex * bbm[3].pertamina_dex;
                        cout << "\tJumlah yang harus di bayar Rp." << total_ptadex << endl;
                        cout << "\tMasukkan uang cash anda : Rp."; cin >> cash_ptadex;
                            kembali_ptadex = cash_ptadex - total_ptadex;
                        cout << "\tUang kembalian : Rp." << kembali_ptadex;
                        cout<<"\n\n";
                        break;
                    case 5:
                        system("cls");
                        int beli_dxe, total_dxe, cash_dxe, kembali_dxe;
                        cout<<"\t||=============== Aplikasi Pembelian BBM ============||"<<endl;
                        cout<<"\t||======================== Menu =====================||\n";
                        cout << "\tAnda Memilih Dexlite : Rp. 17.100 per liter\n\n";
                        cout << "\tMasukkan berapa liter : "; cin >> beli_dxe;
                            total_dxe = beli_dxe * bbm[4].dexlite;
                        cout << "\tJumlah yang harus di bayar Rp." << total_dxe << endl;
                        cout << "\tMasukkan uang cash anda : Rp."; cin >> cash_dxe;
                            kembali_dxe = cash_dxe - total_dxe;
                        cout << "\tUang kembalian : Rp." << kembali_dxe;
                        cout<<"\n\n";
                        break;
                    case 6:
                        cout<<"\t\t-- Anda Telah Logout -- \n";
                        system("pause");
                        system("cls");
                        goto exit;
                        break;
                    default:
                        cout << "\t\tMaaf, Menu tidak tersedia" << endl;
                 };
            cout << endl;
            cout << "\tIngin memilih menu lain (y/t)? ";
            cin >> ulang;
            cout << endl;
            system ("cls");
        } 
        while (ulang != 't');
    exit:
    cout<<"\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t Anda Telah Mengakhiri Program \n\n";
    cout << "\t\t\t\t Terimakasih :) \n\n";
    cout << endl;
}