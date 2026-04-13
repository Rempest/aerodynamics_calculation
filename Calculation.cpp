#include <iostream>
#include <cmath>
using namespace std;

class AerodynamicsCalculation {
public:
    double CL, p = 1.2, v, T = 0, W = 0, L, D, S, g = 9.8, CT, w, CD, m;
    char self;

    void run() {
        cout << "What do you want to find? (W, T, D, L): ";
        cin >> self;

        if (self == 'L') {
            cout << "Enter the data:\n";

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
            cout << "CT: ";
            cin >> CT;

            cout << "w: ";
            cin >> w;

            T = CT * pow(w, 2);

            cout << "Thrust (T) = " << T << endl;
        }

        else if (self == 'D') {
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
            cout << "m: ";
            cin >> m;

            W = m * g;

            cout << "Weight (W) = " << W << endl;
        }

        else {
            cout << "Invalid input!" << endl;
        }

        if (T > 0 && W > 0) {
            if (T > W) {
                cout << "UAV takes off!" << endl;
            }
            else if (T == W) {
                cout << "UAV hovers!" << endl;
            }
            else {
                cout << "UAV falls!" << endl;
            }
        }
    }
};

int main() {
    AerodynamicsCalculation UAV;
    UAV.run();
    return 0;
}
