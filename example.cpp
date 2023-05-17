#include <iostream>
using namespace std;

// Temel (Base) Sınıf
class Sekil {
protected:
    int genislik;
    int yukseklik;

public:
    void setBoyut(int w, int h) {
        genislik = w;
        yukseklik = h;
    }

    void bilgiYazdir() {
        cout << "Genislik: " << genislik << endl;
        cout << "Yukseklik: " << yukseklik << endl;
    }
};

// Türetilmiş (Derived) Sınıf
class Dikdortgen : public Sekil {
public:
    int alanHesapla() {
        return genislik * yukseklik;
    }
};

int main() {
    Dikdortgen dikdortgen;

    dikdortgen.setBoyut(5, 3);
    dikdortgen.bilgiYazdir();

    int alan = dikdortgen.alanHesapla();
    cout << "Alan: " << alan << endl;

    return 0;
}
