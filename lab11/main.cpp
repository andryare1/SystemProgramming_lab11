#include <iostream>
#include "Energy.hpp"

using namespace std;
int main() {
    // Создание объекта Joule с 1 ТДж (1e12 Дж)
    Joule j(500); // 1 ТДж

    miJoule mj(j);           // Преобразование через конструктор
    kJoule kj(j);            // Преобразование через конструктор
    MJoule Mj = MJoule(j);   // Преобразование через оператор
    GJoule gj = GJoule(j);   // Преобразование через оператор
    TJoule tj = (TJoule)j;   // Преобразование через оператор


    // Вывод значений для каждого класса
    cout << "Джоули: " << j.getValue() << " Дж\n";
    cout << "МиллиДжоули: " << mj.getValue() << " мДж\n";
    cout << "КилоДжоули: " << kj.getValue() << " кДж\n";
    cout << "МегаДжоули: " << Mj.getValue() << " МДж\n";
    cout << "ГигаДжоули: " << gj.getValue() << " ГДж\n";
    cout << "ТераДжоули: " << tj.getValue() << " ТДж\n";

    int q;
    
    cin >> q;

    return 0;
}
