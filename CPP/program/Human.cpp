/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal TP1 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#ifndef Human_cpp
#define Human_cpp

#include <iostream>
#include <string>

using namespace std;

class Human {

private:
    string nama;
    string jenisKelamin;
    string laptop;
    string role = "";

public:
    Human () {
    }

    Human (string nama, string jenisKelamin) {
        this->nama = nama;
        this->jenisKelamin = jenisKelamin;
    }

    // Getter
    string getNama () {
        return nama;
    }
    string getJenisKelamin () {
        return jenisKelamin;
    }
    string getLaptop () {
        return laptop;
    }
    string getRole () {
        return role;
    }
    // Setter
    void setNama (string nama) {
        this->nama = nama;
    }
    void setJenisKelamin (string jenisKelamin) {
        this->jenisKelamin = jenisKelamin;
    }
    void setLaptop (string laptop) {
        this->laptop = laptop;
    }
    void setRole (string role) {
        this->role = role;
    }

    void makan() {
        cout << this->nama << " sedang makan.\n";
    }
    void minum() {
        cout << this->nama << " sedang minum.\n";
    }
    void tidur() {
        cout << this->nama << " sedang tidur.\n";
    }

};

#endif
