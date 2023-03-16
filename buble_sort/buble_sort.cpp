#include <iostream>
using namespace std;

int a[20];				//deklarasi Array a dengan ukuran 20
int n;					// Looping

void input() {			// procedur untuk input
	while (true) {		// Looping
		cout << "Masukan banyaknya elemen pada Array : "; // Output ke layar
			cin >> n;	// input dari pengguna
		if (n <= 20)	// jika n kurang dari atau sama dengan 20
			break;		// keluar dari loop
		else {			// jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	//output ke layar
		}

	}
	cout << endl;									// output baris kosong
	cout << "===================" << endl;			// output ke layar
	cout << "Masukan elemen ke Array" << endl;		// output ke layar
	cout << "===================" << endl;			// output ke lyar

	for (int i = 0; i < n; i++) {					// Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";		// output ke layar
		cin >> a[i];								// output dari pengguna
	}

}

void bubbleSortArray() {							// procedur untuk mengurutkan Array dengan metode bubble sort
	for (int i = 1; i < n; i++) {					// Looping i dimulai i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {			// Looping dengan j dimulai dari - hingga n-i-1
			if (a[j] > a[j + 1]) {					// jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];					// simpan nilai a[j] lebih besar dari a[j+1]
				a[j] = a[j + 1];					// assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;					// Assign nilai temp ke a[j+1]
			}
		}
	}
}

void unsorted() {
	cout << endl;									// Output baris kosong
	cout << "====================" << endl;			// output baris kosong
	cout << "Elemen Array yang telah tersusun" << endl;		// output ke layar
	cout << "====================" << endl;			// output ke layar
	for (int j = 0; j < n; j++) {					// Looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;						// output ke layar

	}
	cout << endl;									// Output ke layar

}

void display() {											// procedur untuk menampilkan hasil
	cout << endl;											// Output baris kosong
	cout << "===================" << endl;							// Output ke layar
	cout << "Elemen Array yang teah tersusun" << endl;		// Output ke layar
	cout << "===================" << endl;						// Output ke layar
	for (int j = 0; j < n; j++) {							// looping dengan j dimulai dari 0 hingga n-1								// output ke layar
		cout << a[j] << endl;								//  output ke layar
	}
	cout << endl;											// output baris kosong
}
