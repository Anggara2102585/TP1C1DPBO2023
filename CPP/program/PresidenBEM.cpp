/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal TP1 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <string>
#include "Mahasiswa.cpp"

using namespace std;

class PresidenBEM : public Mahasiswa {

public:
    PresidenBEM () {
        setRole("Presiden BEM");
    }

    PresidenBEM (string nama, string jenis_kelamin, string nim)
    : Mahasiswa (nama, jenis_kelamin, nim) {
        setRole("Presiden BEM");
    }

    void menjalankanProgram () {
        cout << this->getNama() << " menjalankan program BEM.\n";
    }
    void rencanaInovasi () {
        cout << this->getNama() << " merencanakan inovasi.\n";
    }
    void terapkanInovasi () {
        cout << this->getNama() << " berhasil menerapkan inovasi.\n";
    }
  
};
