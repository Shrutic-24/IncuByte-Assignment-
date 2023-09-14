#include <bits/stdc++.h>
using namespace std;

class Spacecraft
{
private:
    int x, y, z;
    char direction;

public:
    Spacecraft(){
        x=0;
        y=0;
        z=0;
        direction='E';
    }
    Spacecraft(int x0, int y0, int z0, char dir0)
    {
        x = x0;
        y = y0;
        z = z0;
        direction = dir0;
    }

};

int main()
{
    cout<<"Hello World"<<endl;

    return 0;
}
