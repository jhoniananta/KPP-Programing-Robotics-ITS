// NAMA      : Jhoni Ananta Sitepu
// NRP       : 5026221181
// Jurusan   : Sisitem Informasi

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan
#define phi 3.14159 // nilai phi

int speed_dgn_loss(int v_tangensial)
{
    /* tulis fungsi hitung_loss kalian disini */
    int v_tangesial, losses;
    if (v_tangensial > 0 && v_tangensial <= 10){
        losses=1;
    }else if(v_tangensial > 10 && v_tangensial <= 20){
        losses=3;
    }else if(v_tangensial > 20 && v_tangesial <= 30){
        losses=5;
    }
    return losses;
}

int mencari_V0(int v_tangensial)
{
    /* Tulis fungsi mencari v0 kalian disini */
    return v_tangensial- speed_dgn_loss(v_tangensial);
}

int main() {
    /* input adalah kecepatan tangensial maksimum roller */
    int kecepatan_tangensial;
    float jarak, radian, v_awal, v_tangensial_float;
    std::cin >> kecepatan_tangensial;
    /* tulis kode utama kalian disini */
    
    v_awal=mencari_V0(kecepatan_tangensial);
    radian=SUDUT*phi/180;
    jarak=((pow(v_awal,2)*sin(2*radian))/GRAVITASI);
    v_tangensial_float=kecepatan_tangensial-(0.1002);
    std::cout << floor(jarak) << " " << v_tangensial_float  << std::endl;
    return 0;
}