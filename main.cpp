#include <iostream>
#include "Assets.h"
using namespace std;

int main() {
    Assets SPUEmployee01; // no parameter constructor is called;
    Assets SPUStudent01("CSC2430");
    SPUStudent01.AddTag("Tage-7891");
    SPUStudent01.AddTag("Tage-1232");
    SPUStudent01.AddTag("Tage-3453");
    Assets SPUStudent02 = SPUStudent01;
    SPUEmployee01 = SPUStudent01;
    cout << SPUStudent01.ToString() << endl;
    cout << SPUStudent02.ToString() << endl;
    cout << SPUEmployee01.ToString() << endl;
    return 0;
}
