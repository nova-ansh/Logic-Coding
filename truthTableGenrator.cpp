#include <iostream>

using namespace std;

void truthTable(void) {
    cout << "P    Q    P AND Q  P OR Q   NOT P   NOT Q   P -> Q   P <-> Q" << endl;
    cout << "-----------------------------------------------------------" << endl;

    for (bool P : {true, false}) {
        for (bool Q : {true, false}) {
            // AND
            bool And = P && Q;
            // OR
            bool Or = P || Q;
            // NEGATE P
            bool Not_P = !P;
            // NEGATE Q
            bool Not_Q = !Q;
            // P -> Q
            bool imply = !P || Q;
            // P <-> Q
            bool bimply = (!P || Q) && (!Q || P);

            cout << (P ? "T" : "F") << "    "
                 << (Q ? "T" : "F") << "      "
                 << (And ? "T" : "F") << "        "
                 << (Or ? "T" : "F") << "        "
                 << (Not_P ? "T" : "F") << "       "
                 << (Not_Q ? "T" : "F") << "      "
                 << (imply ? "T" : "F") << "       "
                 << (bimply ? "T" : "F") << endl;
        }
    }
}

int main() {
    truthTable();
  
