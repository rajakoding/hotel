#include <iostream>
#include "guest.hpp"
#include "room.hpp"
using namespace std;

class reservasi{
    private:
    int no;
    guest tamu;
    room kamar;
    int malam;
    public:
    void set_reservasi(int n, guest t, room k, int m){
        no = n;
        tamu = t;
        kamar = k;
        malam = m;
    }
    void get_reservasi(){
        cout << "RESERVASI";
        cout << "Nama: " << tamu.get_nama();
        cout << "No. Kamar: " << kamar.get_no();
        cout << "Tipe kamar: " << kamar.get_tipe();
        cout << "harga " << kamar.get_harga() << "per malam. \nmenginap " << malam << "malam";
        cout << "Total harga: " << (kamar.get_harga() * malam);
    }
};
    guest* find_guest(guest tamu[], int size, int id){
    for (int i = 0; i < size; ++i) {
        if (tamu[i].get_guestid() == id) {
            return &tamu[i];
        }
    }
    return nullptr;
}

    room* find_siswa(room kamar[], int size, int no) {
    for (int i = 0; i < size; ++i) {
        if (kamar[i].get_no() == no) {
            return &kamar[i];
        }
    }
    return nullptr;
}