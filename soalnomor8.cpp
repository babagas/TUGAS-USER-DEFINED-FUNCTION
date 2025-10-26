#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const float phi = 3.1416;
float distance(float x1,float y1,float x2,float y2){ // parameter untuk (x1,y1) dan (x2,y2)
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2)); // perhitungan jarak antar 2 titik yaitu akar dari (x2-x1)^2 + (y2-y1)^2
} 
float radius(float x0,float y0,float x1, float y1){ /* parameter untuk (x0,y0) yaitu titik pusat lingkaran dan (x1,y1) untuk
    sembarang titik di sisi lingkaran*/
    return distance(x0,y0,x1,y1); /* memanggil fungsi distance untuk menghitung jari-jari yaitu jarak titik pusat ke titik sisi lingkaran*/
}
float circumference(float rad){ //parameter untuk jari jari
    return 2*phi*rad; //rumus keliling lingkaran
}
float area(float rad){ //parameter untuk jari jari
    return phi*rad*rad; // rumus luas lingkaran
}
int main(){
    cout << "jarak titik (2,1) dan (3,4) adalah " <<  distance(2,1,3,4) << endl;
    cout << "jarak titik pusat (2,2) ke sisi lingkaran di titik (4,2) adalah " << radius(2,2,4,2) << endl;
    cout << "keliling lingkaran dengan jari-jari 3cm adalah " << circumference(3) << "cm" << endl;
    cout << "luas lingkaran dengan jari-jari 3cm adalah " << area(3) << "cm^2" << endl; 
    return 0;
}