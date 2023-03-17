/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal TP1 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <string>
#include "Mahasiswa.cpp"

using namespace std;

class Asdos : public Mahasiswa {

public:
    Asdos () {
        setRole("Asdos");
    }

    Asdos (string nama, string jenis_kelamin, string nim)
    : Mahasiswa (nama, jenis_kelamin, nim) {
        setRole("Asdos");
    }

    void mengajar () {
        cout << this->getNama() << " sedang mengajar.\n";
    }
    void memberiTugas (string kelas) {
        cout << this->getNama() << " memberi tugas ke kelas " << kelas << ".\n";
    }
  
};
