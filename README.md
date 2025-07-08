# 🎓 Daftar Nilai Mahasiswa - CLI Program in C++

Program ini merupakan aplikasi berbasis **Command Line Interface (CLI)** yang ditulis menggunakan **C++**. Tujuannya adalah untuk mengelola data mahasiswa, menghitung nilai akhir berdasarkan UTS, UAS, dan nilai harian, serta menampilkan hasil dalam bentuk tabel.

---

## 📋 Fitur Utama

- 🔐 **Login Sistem** (Username: `choco.vlone`, Password: `01071508`)
- 📝 Input data mahasiswa (nama, NIM, prodi, kelas, nilai UTS/UAS/harian)
- 📊 Perhitungan dan tampilan nilai akhir + indeks nilai
- 🔁 Fungsi rekursif untuk menghitung:
  - Deret bilangan **ganjil**
  - Deret bilangan **genap**

---

## 📌 Struktur Data yang Digunakan

```cpp
string Nama[3], NIM[3], Prodi[3], Nilai_Index[3];
char Kelas[3];
int Nilai_UTS[3], Nilai_UAS[3], Nilai_Harian[3];
float Nilai_Akhir[3];
