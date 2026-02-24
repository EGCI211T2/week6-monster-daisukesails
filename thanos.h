#ifndef thanos_h
#define thanos_h

#include "monster.h"

class Thanos 
{
private:
    int stones;
    int hp; // extra hp

public:
    // constructor and destructor
    Thanos(int s = 0, int h = 1000);
    ~Thanos();

    void snap_finger(monster m[], int n);

    // increase the stone
    void operator++(); // prefix ++T

void Thanos::operator++() 
{
    if (stones < 6) stones++;
    cout << "Thanos now has stones = " << stones << endl;
}

void Thanos::snap_finger(monster m[], int n) 
{
    // show all hps first
    cout << "Current monsters status:" << endl;
    for (int i = 0; i < n; i++) {
        m[i].display(); 
    }

    if (stones == 6) 
	{
        cout << "Thanos snapped his finger!" << endl;

        // kills half for first n/2 monsters 
        for (int i = 0; i < n / 2; i++) 
		{
            m[i].setHP(0);
        }
    } 
	else 
		{
        cout << "Stones are not equal to 6" << endl;
    	}
}
}

#endif