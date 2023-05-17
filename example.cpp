#include <iostream>
using namespace std;
//temel (base ) sınıf
class sekil {
protected:
    int genislik;
    int yukseklik;
public:
    void setBoyut(int w, int h) {
        genislik = w;
        yukseklik = h;

    }
    void bilgiyazdir() {
        cout << "Genislik:" << genislik << endl;
        cout << "Yukseklik" << yukseklik << endl;

    }
};
//Türetilmiş (delivered) sınıf.
class dikdortgen : public sekil {
public:
    int alanhesapla() {
        return genislik * yukseklik;

    }
};
int main()
{
    dikdortgen dikdortgen1;
    int genis, yuksek;  //cin işlemleri için oluşturulmuş parametreler
    cout << "Genisligi giriniz:" << endl;
    cin >> genis;
    cout << "Yuksekligi giriniz: " << endl;
    cin >> yuksek;

    dikdortgen1.setBoyut(genis, yuksek);
    int alan=dikdortgen1.alanhesapla();
    dikdortgen1.bilgiyazdir();

    cout << "Alan: " << alan << endl;
}

