#include <bits/stdc++.h>
using namespace std;

class Spacecraft
{
private:
    int x, y, z;
    char direction;

public:
    Spacecraft()
    {
        x = 0;
        y = 0;
        z = 0;
        direction = 'E';
    }
    Spacecraft(int x0, int y0, int z0, char dir0)
    {
        x = x0;
        y = y0;
        z = z0;
        direction = dir0;
    }
    void moveForward()
    {
        if (direction == 'N')
            y++;
        else if (direction == 'S')
            y--;
        else if (direction == 'E')
            x++;
        else if (direction == 'W')
            x--;
        else if (direction == 'U')
            z++;
        else if (direction == 'D')
            z--;
    }
    void moveBackward()
    {
        if (direction == 'N')
            y--;
        else if (direction == 'S')
            y++;
        else if (direction == 'E')
            x--;
        else if (direction == 'W')
            x++;
        else if (direction == 'U')
            z--;
        else if (direction == 'D')
            z++;
    }

    void printCoordinates()
    {
        cout << "Current Coordinates: (" << x << ", " << y << ", " << z << "), Direction: " << direction << endl;
    }
};

int main()
{
    // cout<<"Hello World"<<endl;
    int startX, startY, startZ;
    char startDir;

    cout << "Enter initial coordinates (x, y, z): ";
    cin >> startX >> startY >> startZ;

    cout << "Enter initial direction (N, S, E, W, U, D): ";
    cin >> startDir;

    Spacecraft spacecraft(startX, startY, startZ, startDir);

    int n;
    cout << "Enter Number of Commands: ";
    cin >> n;
    vector<char> commands(n);
    cout << "Enter Commands: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> commands[i];
    }

    for (char command : commands)
    {
        if (command == 'f')
            spacecraft.moveForward();
        else if (command == 'b')
            spacecraft.moveBackward();
    }

    spacecraft.printCoordinates();






    return 0;
}
