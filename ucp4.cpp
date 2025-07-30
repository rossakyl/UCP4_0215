#include <iostream>
#include <string>
using namespace std;

class JalurSim;
{
Protected:
    string namaPemohon; 
    int nomorIdentitas;
    int biayaAdmintarasi;
    int totalBiaya;
    string golonganSim;
    string statusKelayakan;
private:
    int Penghasilan;
public:
    virtual void inputData() = 0;
    virtual string verifikasiKelayakan() = 0;
    virtual void inputPenghasilanDanHitungBiaya() = 0;
    virtual void tampilkanRingkasan() = 0;
    virtual void prosesPendaftaran() = 0;

// Jalur SIM BARU
class SIMBaru : public JalurSim
{
    string NamaLengkap;
    int identitas;
    int usia;

    void inputData()
    {
        cout << "Masukkan Nama Lengkap: ";
        cin >> NamaLengkap;
        cout << "Masukkan Nomor Identitas: ";
        cin >> identitas;
        cout << "Masukkan Usia: ";
        cin >> usia;
    }

    string verifikasiKelayakan()
    if (usia > 17 tahun ){
     cout << "DITERIMA";
    }
    else {
        (usia < 17 tahun)
         cout << "DITOLAK"
    }
    return statusKelayakan;

}

// Jalur Perpanjangan SIM
class PerpanjanganSIM : public JalurSIM
{
    string NamaLengkap;
    int identitas;
    string status;
}
    Void inputPenghasilanDanHitungBiaya() 
    
    {
        cout << "Penghasilan Rp 1.000.000 = " << "Rp 100.000"
        cout << "Penghasilan Rp 1.000.000 - 2.499.999 = " << "Rp 150.000"
        cout << "Penghasilan Rp 2.500.000 - 4.999.999 = " << "Rp 2000.000"
        cout << "Penghasilan Rp 5.000.000 - 9.000.000 = " << "Rp 250.000"
        cout << "Penghasilan > 10.0000 = " << "Rp 300.000"
    }
}

void tampilkanRingkasan() 
{
        cout << "Nama Pemohon      : " << namaPemohon << endl;
        cout << "Nomor Identitas   : " << nomorIdentitas << endl;
        cout << "Jalur Pendaftaran : SIM Baru";
        cout << "Status Kelayakan  : " << statusKelayakan << endl;
        cout << "Golongan SIM      : " << golonganSIM << endl;
        cout << "Total Biaya       : Rp" << totalBiaya << endl;       
}