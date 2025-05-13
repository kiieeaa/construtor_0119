#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
       string setdet(string jdl)
       {
         // nilai parameter 'judul' untuk memeberi variabel 'judul'
         this->judul = jdl;
         // return variabel judul.
         return this->judul;
       }

       
};

int main()
{
    buku bukunya;
    cout<<bukunya.setget("matematika");
    return 0;
}