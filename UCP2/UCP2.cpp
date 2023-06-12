#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :virtual public bidangDatar {
public:
	double phi = 3.14;
	float Luas(int a) {
		/*cout << "Luas Lingkaran = " << (a ^ 2) * phi << endl;*/
		return ((a ^ 2) * phi);
	}
	float Keliling(int a) {
		/*cout << "Keliling Lingkaran" << (a * 2) * phi << endl;*/
		return ((a * 2) * phi);
	}
	void input() {
		int a;
		cout << "lingkaran dibuat" << endl;
		cout << "Masukkan jejari" << endl;
		cin >> a;
		setX(a);
		cout << Luas(getX()) <<endl;
		cout << Keliling(getX())<<endl;
	}
	
	/*lengkapi disini*/ };
class Bujursangkar : virtual public bidangDatar { 
public:
	float Luas(int a) {
		cout << (a ^ 2) << endl;
	}
	float Keliling(int a) {
		cout << (a * 4) << endl;
	}
	void input() {
		int a;
		cout << "Bujursangkar dibuat" << endl;
		cout << "Masukkan sisi" << endl;
		cin >> a;
		setX(a);
		cout << Luas(getX()) << endl;
		cout << Keliling(getX()) << endl;
	}
	
	/*lengkapi disini*/ };
int main() { 
	bidangDatar* bi;
	Lingkaran Li;
	Bujursangkar Bu;

	bi = &Li;
	bi->input();
	bi = &Bu;
	bi->input();
	
	/*lengkapi disini*/ }