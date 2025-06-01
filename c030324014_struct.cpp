#include <iostream>
#include <string>
using namespace std;

    struct mahasigma{
	string nim;
	string nama;
	string alamat;
	float ipk;
};

int inputData(string *nim, string *nama, string *alamat, float *ipk) {
    cout << "NIM = ";        getline(cin, *nim);
    cout << "Nama = ";      getline(cin, *nama);
    cout << "Alamat = ";    getline(cin, *alamat);
    cout << "IPK = ";       cin >> *ipk;
    cin.ignore();
}

void outputData(const mahasigma &alam) {
    system("cls");
    cout << "\n------------- Data Anda ------------- :\n";
    cout << "NIM    : " << alam.nim << endl;
    cout << "Nama   : " << alam.nama << endl;
    cout << "Alamat : " << alam.alamat << endl;
    cout << "IPK    : " << alam.ipk << endl;
    cout << "---------------------------------------\n";
}

int main() {
    mahasigma alam;
    inputData(&alam.nim, &alam.nama, &alam.alamat, &alam.ipk);
    outputData(alam);
    return 0;
}
