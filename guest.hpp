#include <iostream>
using namespace std;

class guest{
    private:
    int guest_id;
    string nama;
    int orang;

    public:
    void set_guest(int id, string nm, int org){
        guest_id = id;
        nama = nm;
        orang = org;

    }
    void get_guest(){
        cout << guest_id << " " << nama <<endl;
    }
    int get_guestid(){
        return guest_id;
    }
    string get_nama(){
        return nama;
    }
};
