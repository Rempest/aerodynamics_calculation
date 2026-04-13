#include <iostream>
#include <cmath>
using namespace std;
class AerodynamicsCalculation {
public:
    double CL, p = 1.2, v, T, W, L, D, S, g = 9.8, CT, w, CD, m;
    char self;
    void run() {
        cout << "What do you want to find? (W, T, D, L): ";
        cin >> self;

        if (self == 'L') {
            cout << "Enter the data:\n";
            cout << "Enter lift coefficient (CL), velocity (V), air density (p), and area (S)\n";

            cout << "CL: ";
            cin >> CL;

            cout << "V: ";
            cin >> v;

            cout << "p: ";
            cin >> p;

            cout << "S: ";
            cin >> S;

            L = CL * 0.5 * p * pow(v, 2) * S;

            cout << "Lift (L) = " << L << endl;
        }

        else if (self == 'T') {
            cout << "Enter thrust coefficient (CT) and propeller speed (w):\n";

            cout << "CT: ";
            cin >> CT;

            cout << "w: ";
            cin >> w;

            T = CT * pow(w, 2);

            cout << "Thrust (T) = " << T << endl;
        }

        else if (self == 'D') {
            cout << "Enter the data:\n";
            cout << "Enter drag coefficient (CD), velocity (V), air density (p), and area (S)\n";

            cout << "CD: ";
            cin >> CD;

            cout << "V: ";
            cin >> v;

            cout << "p: ";
            cin >> p;

            cout << "S: ";
            cin >> S;

            D = CD * 0.5 * p * pow(v, 2) * S;

            cout << "Drag (D) = " << D << endl;
        }

        else if (self == 'W') {
            cout << "Enter mass of UAV:\n";

            cout << "m: ";
            cin >> m;

            W = m * g;

            cout << "Weight (W) = " << W << endl;
        }

        else {
            cout << "Invalid input!" << endl;
        }
    }
};

int main() {
    AerodynamicsCalculation UAV;
    UAV.run();
    return 0;
}
