Bu örnekte, Sekil adında bir temel sınıf tanımlanmıştır. Bu sınıf, genişlik ve yükseklik gibi ortak özelliklere sahiptir. setBoyut() ve bilgiYazdir() gibi işlevlere sahiptir. alanHesapla() işlevi ise türetilmiş sınıfta tanımlanacaktır.

Dikdortgen adında bir türetilmiş sınıf tanımlanmıştır. Dikdortgen sınıfı, Sekil sınıfından kalıtım yapar. Bu, Sekil sınıfının tüm üyelerini (genislik, yukseklik, setBoyut(), bilgiYazdir() gibi) Dikdortgen sınıfına miras almasını sağlar. Ayrıca, alanHesapla() işlevini tanımlar, bu işlev Dikdortgen sınıfına özgüdür.

main() işlevinde bir Dikdortgen nesnesi oluşturulur. setBoyut() işlevi kullanılarak genişlik ve yükseklik değerleri atanır ve bilgiYazdir() işlevi çağrılarak bu değerler ekrana yazdırılır. Son olarak, alanHesapla() işlevi çağrılarak dikdörtgenin alanı hesaplanır ve ekrana yazdırılır.

Bu örnekte, Dikdortgen sınıfı Sekil sınıfından kalıtım yaptığı için Dikdortgen sınıfı, Sekil sınıfının tüm özelliklerine ve davranışlarına sahip olur. Böylece Dikdortgen sınıfı, Sekil sınıfının özelliklerini yeniden tanımlamadan kullanabilir.
