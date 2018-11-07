#include<iostream>
using namespace std;

int main(){

    int N, a, b, d, hb;
    int e = 0;
    int i = 0;
    float dis = 0.0;
    int total = 0;
    int stotal = 0;

    cout << "                   Selamat datang " << endl;
    cout << "                         di " << endl;
    cout << "                   Green Market" ;
    cout << endl;
    cout << endl;
    cout << "--------------------------------------------------------- " << endl;
    cout << "--------------------------------------------------------- " << endl;
    cout << endl;
    cout << "Berapa macam barang yang akan Anda beli? " << endl;
    cin >> N;
    cout << endl;

    do {
        cout << "Berapa barang yang akan Anda beli? " << endl;
        cin >> a;
        cout << endl;
        cout << "Berapa harga per satuan barang yang Anda beli? " << endl;
        cin >> b;
        cout << endl;

        hb = a * b;
        stotal = stotal+hb;
        e = e+a;
        i = i+1;

        cout << endl;
        cout << "Harga barang tesebut adalah " << hb << endl;

        if (i < N) {
            cout  << "Barang ke-" << i << " dari " << N << " barang yang akan dibeli " << endl;
        } else {
            cout << "Anda telah membeli " << N << " barang ";
        }

        cout << endl;
        cout << endl;

        } while (i < N) ;

        if (stotal >= 1000000) {
            dis = (stotal/100)*10;
            total = stotal-dis;
            d = 10;
        } else {
            if (stotal > 500000){
                dis = (stotal/100)*5;
                total = stotal-dis;
                d = 5;
            } else {
                total = stotal;
                d = 0;
            }

        }

        cout << "--------------------------------------------------------- " << endl;
        cout << "--------------------------------------------------------- " << endl;
        cout << endl;

        cout << "Jumlah item: " << N << endl;
        cout << "jumlah barang: " << e << endl;
        cout << "Total belanja: " << stotal << endl;
        cout << "Dicount: " << d << " % " << endl;
        cout << "Total: " << total << endl;
        cout << endl;
        cout << endl;
        cout << "                               Terima kasih " << endl;
        cout << "                          Selamat datang kembali" ;
    }
