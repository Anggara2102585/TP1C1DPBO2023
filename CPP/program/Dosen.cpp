/* Saya Apri Anggara Yudha NIM 2102585 mengerjakan soal TP1 dalam mata kuliah 
Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include <string>
#include <vector>
#include "Human.cpp"

using namespace std;

class Dosen : public Human {

private:
    string nip;
    vector<string> spidol;

public:
    Dosen () {
        setRole("Dosen");
    }

    Dosen (string nama, string jenisKelamin, string nip)
    : Human(nama, jenisKelamin) {
        this->nip = nip;
        setRole("Dosen");
    }

    // Getter
    string getNip () {
        return nip;
    }
    vector<string> getSpidol () {
        return spidol;
    }
    // Setter
    void setNip (string nip) {
        this->nip = nip;
    }
    void setSpidol (vector<string> spidol) {
        copy(spidol.begin(), spidol.end(), this->spidol.begin());
    }

    void mengajar () {
        cout << this->getNama() << " sedang mengajar.\n";
    }
    void memberiTugas (string kelas) {
        cout << this->getNama() << " memberi tugas ke kelas " << kelas << ".\n";
    }
    void memberiNilai (string kelas) {
        cout << this->getNama() << " memberi nilai ke kelas " << kelas << ".\n";
    }

};
