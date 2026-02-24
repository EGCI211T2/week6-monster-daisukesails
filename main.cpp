#include <iostream>
using namespace std;

#include "monster.h"
#include "thanos.h"

int main() {
    Thanos T;
    int n;

    cout << "How many monsters? ";
    cin >> n;

    monster *m = new monster[n];

  int main(int argc, char* argv[]) {

    monster A("Siri",10,1);
    monster B("Daisuke");
    monster C[5] = {monster("James"), monster("Liam"), monster("Noah"), monster("William"), monster("Benjamin")};

    ++T;
    ++T;
    T.snap_finger(m, n);

    ++T;
    ++T;
    T.snap_finger(m, n);

    ++T;
    ++T;
    T.snap_finger(m, n);

    cout << "\n--- Survivors ---" << endl;
    for (int i = 0; i < n; i++) {
        m[i].display(); 
    }

    delete[] m;
    return 0;
}