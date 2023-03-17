/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal TP1 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <iostream>
#include <string>
#include <vector>

#include "Dosen.cpp"
#include "Mahasiswa.cpp"
#include "PresidenBEM.cpp"
#include "DPM.cpp"
#include "Asdos.cpp"

using namespace std;

int main () {
    // inisialisasi dosen dan mahasiswa
    PresidenBEM rapi = PresidenBEM("Rapi", "L", "12341");
    DPM alga = DPM("Alga", "L", "12342");
    Asdos najmi = Asdos("Najmi", "P", "12343");
    Asdos bulan = Asdos("Bulan", "P", "12344");
    Dosen mrsRose = Dosen("Mrs. Rose", "P", "01234561");
    Mahasiswa afri = Mahasiswa("Afri", "L", "12345");
    Mahasiswa anin = Mahasiswa("Anin", "P", "12346");
    
    // Deklarasi list (menggunakan vector of parent agar dapat menampung child dengan kelas berbeda)
    vector<Mahasiswa*> listMhs;

    // Masukkan mahasiswa ke list
    listMhs.push_back(&rapi);
    listMhs.push_back(&alga);
    listMhs.push_back(&najmi);
    listMhs.push_back(&bulan);
    listMhs.push_back(&afri);
    listMhs.push_back(&anin);

    // Foreach loop listMhs ke i lakukan read data
    cout << "Daftar Mahasiswa:\n";
    for (auto i : listMhs) {
        cout << "Nama          : " << i->getNama() << endl;
        cout << "Jenis_kelamin : " << i->getJenisKelamin() << endl;
        cout << "NIM           : " << i->getNim() << endl;
        cout << "Role          : " << i->getRole() << endl;
        cout << "------------------------------\n";
    }

    // Menjalankan method tiap kelas
    afri.tidur();               // memanggil method class parent
    bulan.belajar();            // memanggil method class sendiri
    rapi.menjalankanProgram();
    alga.beriPUjian();
    najmi.mengajar();
    mrsRose.memberiNilai("C1");

    return 0;
}
