/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal TP1 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <string>
#include "Mahasiswa.cpp"

using namespace std;

class DPM : public Mahasiswa {

public:
    DPM () {
        setRole("DPM");
    }

    DPM (string nama, string jenis_kelamin, string nim)
    : Mahasiswa (nama, jenis_kelamin, nim) {
        setRole("DPM");
    }

    void merekomendasikan (string rekomendasi) {
        cout << this->getNama() << " merekomendasikan " << rekomendasi << ".\n";
    }
    void beriPUjian () {
        cout << this->getNama() << " menghargai kerja keras kalian.\n";
    }
  
};
