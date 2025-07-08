/*  Nama    : Fendyra Restu Dewangga
    NIM     : 124230010
    Kelas   : SI-A
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;
	
/*Deklarasi Var*/
	int Pilihan, Nilai_UTS [3], Nilai_UAS [3], Nilai_Harian [3], Bil_Awal, Bil_Akhir, Jumlah, i;
    string Nama [3], NIM [3], Prodi [3], Nilai_Index [3], Username, Password;
    char Kelas [3], Pilihan2;
    float Nilai_Akhir [3];
    int Rekursif_Ganjil(int,int);
    int Rekursif_Genap(int,int);

/*Deklarasi Function*/
	void Login ();
	void Menu ();
	void Output_Tabel ();
	void Input_Data();
	void Rekursif ();

	
	
int main () {
	/*Welcome*/
	cout << "+===============================================+" << endl;
	cout << "|\t\tFENDYRA'S PROGRAM\t\t|" << endl;   
	cout << "|-----------------------------------------------|" << endl;
	cout << "|\t   DAFTAR NILAI AKHIR MAHASISWA\t\t|" << endl;
	cout << "|\t     UPN \"VETERAN\" YOGYAKARTA\t\t|" << endl;
	cout << "|-----------------------------------------------|" << endl;
	cout << "|\t FENDYRA, THE CREATOR <o> v <o>\t\t|" << endl;
	cout << "+===============================================+" << endl << endl;
	
	cout << "W E L C O M E" << endl;
	cout << "\t\tT O" << endl;
	cout << "\t\t\tM Y  P R O G R A M" << endl << endl;
	
	cout << "=========================================" << endl;
	cout << "| Nama	: Fendyra Restu Dewangga\t|" << endl;
	cout << "| NIM	: 124230010\t\t\t|" << endl;
	cout << "=========================================" << endl;
	
	cout << "Tekan apapun untuk masuk ke dalam program utama...";
	getch ();
	system ("CLS");
	Login ();
}

/*Function Login*/
void Login () {
	system ("CLS");
	cout << "+============================================+" << endl;
	cout << "|---------= LOGIN ACCOUNT COLLEGER =---------|" << endl;
	cout << "+============================================+" << endl;
	cout << "Please Input Username : ";
	cin >> Username;
	cout << "Please Enter Password : ";
	cin >> Password;
	cout << endl;

		if (Username == "choco.vlone" && Password == "01071508"){
			cout << "Yippieeyy..." << endl;
			cout << "Login Anda Berhasil, Welcome Mate!! ^_~" << endl;
			system ("pause");
			system ("CLS");
			Menu ();
		} 
		else { 
		cout << "Ooopss.. Login Anda Gagal! Username atau Password yang Anda Input Invalid" << endl;
		cout << "Silahkan Coba Login Kembali dengan Benar!...";
		getch();
		system ("CLS");
		Login ();
	}
}						
    
/*Tampilan Menu Data Mahasiswa*/
void Menu () {
	cout << "#===============================================#" << endl;
	cout << "|\t\t MENU DATA MAHASISWA\t\t|" <<endl;   
	cout << "|-----------------------------------------------|" << endl;
	cout << "|1. Input Data Mahasiswa\t\t\t|" << endl;
	cout << "|2. Tampilkan Data Mahasiswa\t\t\t|" << endl;
	cout << "|3. Rekursif\t\t\t\t\t|" << endl;
	cout << "|0. Keluar\t\t\t\t\t|" <<endl;
	cout << "#===============================================#" << endl;
	cout << "Pilih Menu : "; cin >> Pilihan;
	
switch (Pilihan) {
	case 1 : /*untuk input data mahasiswa*/
		system ("CLS");
		Input_Data ();
	break;
	
	case 2 : /*untuk menampilkan output tabel data*/
		system ("CLS");
		Output_Tabel ();
	break;
	
	case 3 : /*untuk menampilkan Rekursif*/
		system ("CLS");
		Rekursif ();
	
	case 0 : /*Thanks Note*/
		system ("CLS");
		cout << "Teimakasih Telah Mengunjungi dan Menggunakan Program ini (*^o^*)" << endl << endl;
		cout << "   ----------=    HAVE           =----------" << endl;
		cout << "  -------=              A            =-------" << endl;
		cout << " -----=                    NICE          =-----" << endl;
		cout << "---=                            DAY         =---" << endl;
		cout << "\nTekan apapun untuk keluar dari program...";
	break;
		
	default : 
		cout << "Maaf Menu yang Anda Pilih Invalid, Pilihlah Menu (1/2/0)!!!" << endl;
		cout << ".....";
		getch ();
		system ("CLS");
		Menu ();
		
	break;
	}
}

void Input_Data () {
	/*Proses Input Data Nilai Mahasiswa 1*/
	cout << "SILAHKAN INPUT DATA MAHASISWA" << endl << endl;
	
	for(int i=0 ; i < 3 ; i++ ){
	cout << "-----= INPUT DATA MAHASISWA " << i+1 << " =-----\n" << endl;
	cout << "Masukkan Nama Mahasiswa " << i+1 << "\t : ";
	cin.ignore ();
	getline (cin, Nama[i]);
	cout << "Masukkan NIM\t\t\t : ";
	cin >> NIM [i];
	cout << "Masukkan Prodi\t\t\t : ";
	cin >> Prodi [i];
	cout << "Masukkan Kelas\t\t\t : ";
	cin >> Kelas [i];
	cout << "Masukkan Nilai UTS\t\t : ";
	cin >> Nilai_UTS [i];
	cout << "Masukkan Nilai UAS\t\t : ";
	cin >> Nilai_UAS [i];
	cout << "Masukkan Nilai Harian\t\t : ";
	cin >> Nilai_Harian [i];
	cout << "^---^ Data Mahasiswa " << i+1 << " Berhasil Terinput Bruh! ^---^\n" << endl << endl;
	cout << "DATA TERSIMPAN!!" << endl;
}
	cout << "Tekan apapun untuk kembali ke menu utama..." << endl;
	system ("pause");
	system ("CLS");
	Menu ();
}
void Output_Tabel () {
	for (int i=0; i <3; i++){
	/*Rumus Perhitungan*/
	Nilai_Akhir[i] = Nilai_UAS[i]*0.3 + Nilai_UTS[i]*0.3 + Nilai_Harian[i]*0.4;
	}

	for (int i=0; i <3; i++){
	/*Kriteria Nilai Akhir*/
	if (Nilai_Akhir[i] <=100 and Nilai_Akhir[i] >=85) {
		Nilai_Index[i]='A';
	} else if (Nilai_Akhir[i] <85 and Nilai_Akhir[i] >=75) {
		Nilai_Index[i]='B';
	} else if (Nilai_Akhir[i] <75 and Nilai_Akhir[i] >=65) {
		Nilai_Index[i]='C';
	} else if (Nilai_Akhir[i] <65 and Nilai_Akhir[i] >=50) {
		Nilai_Index[i]='D';
	} else if (Nilai_Akhir[i] <50 and Nilai_Akhir[i] >=0) {
		Nilai_Index[i]='E';
	}
  }


/*Hasil Akhir Output Tabel*/
	cout << "\nTampilan Tabel Daftar Data Nilai Akhir Mahasiswa :" << endl;
	cout << "#================================================================================================================================================#" << endl;
	cout << "|------------------------------------------------------------------- DAFTAR NILAI ---------------------------------------------------------------|" << endl;
	cout << "|------------------------------------------------------ MAHASISWA UPN \"VETERAN\" YOGYAKAKARTA ----------------------------------------------------|" << endl;
	cout << "|================================================================================================================================================|" << endl;
	cout << "|" << setw(14) << "Nama" << setw(10) << "|";
	cout << setw(10) << "NIM" << setw(8) << "|";
	cout << setw(7) << "Kelas" << setw(3) << "|";
	cout << setw(12) << "Nilai UTS" << setw(4) << "|";
	cout << setw(12) << "Nilai UAS" << setw(4) << "|";
	cout << setw(17) << "Nilai Harian" << setw(4) << "|";
	cout << setw(17) << "Nilai Akhir" << setw(6) << "|";
	cout << setw(14) << "Nilai Index" << setw(3) << "|" << "\n";
    for (int i=0; i <3; i++){
    cout << "|================================================================================================================================================|" << endl;
    cout << "|" << setw(19) << Nama[i] << setw(5) << "|" << setw(13) << NIM[i] << setw(5) << "|" << setw(5) << Kelas[i] << setw(5) << "|" << setw(8) << Nilai_UTS[i] << setw(8) << "|" << setw(8) << Nilai_UAS[i] << setw(8) << "|" << setw(11) << Nilai_Harian[i] << setw(10) << "|" << setw(13) << Nilai_Akhir[i] << setw(10) << "|" << setw(8) << Nilai_Index[i] << setw(9) << "|" << endl;
	}
	cout << "#================================================================================================================================================#" << endl;
	
	cout << "\nTekan apapun untuk kembali ke menu utama...";
	getch();
	system ("CLS");
	Menu();
}

void Rekursif () {
	/* Input Bilangan */
	cout << "Input Bilangan Awal : ";
	cin >> Bil_Awal;
	cout << "Input Bilangan Akhir : ";
	cin >> Bil_Akhir;
	
	/* Menu Deret */
	cout << "Pilih Menu : " << endl;
	cout << "[-] Deret Ganjil" << endl;
	cout << "[-] Deret Genap" << endl;
	cout << "Pilihan [-] / [+] : ";
	cin >> Pilihan2;
	
	switch (Pilihan2) {
		case '+' :
			cout << Rekursif_Ganjil(Bil_Awal, Bil_Akhir) << endl;
			system ("pause");
			system ("CLS");
			Menu ();
			break;
			
		case '-' :
			cout << Rekursif_Genap(Bil_Awal, Bil_Akhir) << endl;
			system ("pause");
			system ("CLS");
			Menu ();
			break;
		
		default :
			cout << "Pilihan Anda Invalid" << endl;
			break;
		}
}

/* Fungsi Menghitung Deret Bilangan Ganjil */
		int Rekursif_Ganjil(int Bil_Awal,int Bil_Akhir){
			if (Bil_Awal>Bil_Akhir){
				return 0;
		} else{ 
				if (Bil_Awal%2==0){
						Bil_Akhir+=1;
					}
				}
				cout << Bil_Awal;
				if ((Bil_Awal+1)>= Bil_Akhir){
						cout << " = ";
				} else if (Bil_Awal < Bil_Akhir)
					{
						cout << " + ";
				}
				return Bil_Awal + Rekursif_Ganjil(Bil_Awal+2,Bil_Akhir);
			}
		
				
/* Fungsi Menghitung Deret Bilangan Genap */			
	int Rekursif_Genap(int Bil_Awal,int Bil_Akhir){
			if (Bil_Awal>Bil_Akhir){
					return 0;
			} else { 
				if (Bil_Awal%2==1){
						Bil_Awal+=1;
					}
			}
				cout << Bil_Awal;
					if (Bil_Awal < Bil_Akhir){
						cout << " + ";
					}
					else 
						{
						cout << " = ";
					}
					return Bil_Awal + Rekursif_Genap(Bil_Awal+2,Bil_Akhir);
		}
	



