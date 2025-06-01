#include <iostream>
#include <string>
using namespace std;

    struct mahasigma{
	string nim;
	string nama;
	string alamat;
	float ipk;
};
int main(){
	mahasigma alam;

	cout << "NIM = "; 		getline(cin, alam.nim);
	cout << "Nama = ";		getline(cin, alam.nama);
	cout << "Alamat = ";	getline(cin, alam.alamat);
	cout << "IPK = ";		cin >> alam.ipk;

    system("cls");
	cout << "\n------------- Data Anda ------------- :\n";
	cout << "NIM    : " << alam.nim << endl;
	cout << "Nama   : " << alam.nama << endl;
	cout << "Alamat : " << alam.alamat << endl;
	cout << "IPK    : " << alam.ipk << endl;
	cout << "---------------------------------------\n";
    return 0;
}
