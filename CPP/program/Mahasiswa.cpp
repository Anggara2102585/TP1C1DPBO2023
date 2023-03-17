/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal TP1 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#ifndef Mahasiswa_cpp
#define Mahasiswa_cpp

#include <string>
#include <vector>
#include "Human.cpp"

using namespace std;

class Mahasiswa : public Human {

private:
    string nim;
    vector<string> buku;

public:
    Mahasiswa () {
        setRole("Mahasiswa");
    }

    Mahasiswa (string nama, string jenis_kelamin, string nim)
    : Human (nama, jenis_kelamin) {
        this->nim = nim;
        setRole("Mahasiswa");
    }

    // Getter
    string getNim () {
        return nim;
    }
    vector<string> getBuku () {
        return buku;
    }
    // Setter
    void setNim (string nim) {
        this->nim = nim;
    }
    void setBuku (vector<string> buku) {
        this->buku = buku;
    }

    void belajar () {
        cout << this->getNama() << " sedang belajar.\n";
    }
    void kuliah () {
        cout << this->getNama() << " sedang menghadiri kuliah.\n";
    }
    void mengerjakanTugas () {
        cout << this->getNama() << " sedang mengerjakan tugas.\n";
    }
  
};

#endif
