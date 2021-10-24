#include <bits/stdc++.h>

using namespace std;

void guide(int d, int s, int t)
{
    cout << "Move disk " << d << " from rod " << s << " to rod " << t << endl;
}

void HaNoiTower(int disk, int source, int target)
{
    int spare; // spare rod

    if (disk == 1)
    {
        guide(disk, source, target);
        return;
    }

    spare = 6 - (source + target);
    
    // move upper (n - 1) disks to the spare rod
    HaNoiTower(disk - 1, source, spare);

    // move the n-th disk (the bottom disk) to the target rod
    guide(disk, source, target);

    // move (n - 1) remaining disks to the target rod
    HaNoiTower(disk - 1, spare, target);
}

int main()
{
    int n = 4; // the number of disks
    int s = 1; // source rod
    int t = 3; // target rod
    HaNoiTower(n, s, t);

    return 0;
}