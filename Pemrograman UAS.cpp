#include <iostream>
using namespace std;


float hitungmt(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

void rekomendasi(float mt) {
	float bb[4] = {18.5, 24.9, 29.9, 34.9};
    if (mt < bb[0]) {
	cout << "rekomendasi: Tambahkan porsi makan dan olahraga teratur untuk menambah berat badan." << endl;
    } else if (mt >= bb[0]) {
    	if (mt <= bb[1]) {
		cout << "rekomendasi: Lanjutkan pola makan sehat dan olahraga teratur untuk menjaga berat badan." << endl;
		} else if (mt <= bb[2]) {
		cout << "rekomendasi: Kurangi porsi makan dan tingkatkan aktivitas fisik untuk menurunkan berat badan." << endl;
    	} else if (mt <= bb[3]) {
		cout << "rekomendasi: Kurangi porsi makan, tingkatkan aktivitas fisik, dan konsultasikan dengan dokter atau ahli gizi untuk menurunkan berat badan." << endl;
    	} else {
		cout << "rekomendasi: Kurangi porsi makan, tingkatkan aktivitas fisik, dan konsultasikan dengan dokter atau ahli gizi untuk menurunkan berat badan." << endl;
    	}
    }
}

int main() {
	float bb[4] = {18.5, 24.9, 29.9, 34.9};
    float berat, tinggi, mt;
    char pilih;
    
    
    do {
    	system ("cls");
    	cout << "=======================================" << endl;
		cout << "program aplikasi menghitung massa tubuh" << endl;
		cout << endl;
		cout << "masukkan berat badan (kg) : ";
		cin >> berat;
		cout << "masukkan tinggi badan (m) : ";
		cin >> tinggi;

        
        mt = hitungmt(berat, tinggi);

        
        cout << "massa tubuh : " << mt << endl;
        
        
        if (mt < bb[0]) {
        cout << "berat badan kurang" << endl;
        } else if (mt >= bb[0]) {
        	if (mt <= bb[1]) {
			cout << "berat badan normal" << endl;
			} else if (mt <= bb[2]) {
			cout << "berat badan berlebih" << endl;
			} else if (mt <= bb[3]) {
			cout << "berat badan sangat berlebih" << endl;
			} else {
			cout << "obesitas" << endl;
			}
		}
		
		rekomendasi(mt);
			
		cout << endl;
		cout << "kembali kemenu? (y/n): ";
		cin >> pilih;
	} while (pilih == 'y');
	cout << "terima kasih" << endl;
		
return 0;
}
