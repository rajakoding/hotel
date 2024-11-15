#include <iostream>
using namespace std;

class room{
    int no_room;
    string tipe;
    int harga;

    public:
    void set_room(int no,string tp,int hrg){
        no_room = no;
        tipe = tp;
        harga = hrg;
    }

    void get_room(){
        cout <<no_room<<" "<<tipe<<" "<<harga<<endl;
    }
string get_tipe(){
    return tipe;
}
int get_no(){
    return no_room;
}
int get_harga(){
    return harga;
}

};