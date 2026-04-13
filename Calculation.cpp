#include <iostream>
#include <cmath>
class Aerodynamics_calculation{
public:
double CL, p = 1.2, v, T, W, L, D, S, g = 9.8, KT, w, CD, m;
char self;
L = CL * 0.5 * p * pow(v, 2)*S;
T = KT * 0.5 * p * pow(v, 2)*S;
W = m * g;
D = CD * 0.5 * p * pow(v, 2)*S;
cout << "What you want to found?(W, T, D, L): ";
cin >> self;

if(self == 'W'){
  cout << "Enter pls the data:" << endl;
  cout << "What is mass of the your UAV? (Enter mass): ";
  cin >> m;
}
  cout << endl << W;
if(self == 'L'){
  cout << "Enter pls the data:" << endl;
  cout << "What is coeficent of lift, air density, air velocity and area of the your UAV? (Enter S, V p and CL): ";
  cout << "Enter the CL: ";
  cin >> CL;
  cout << endl << "Enter the V: ";
  cin >> v;
  }
};
