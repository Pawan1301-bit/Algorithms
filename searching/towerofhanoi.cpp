//tower of hanoi -- its a mathmaticall puzzle where we have 3 rods and A,B,C and N number of disck place in decending order of there diameter in rod A we have to  move  to rod C based on some condtions
// 1. only 1 disc can be moved at a time
// 2. only uppermost disc can be moved
// 3. no disc can be placed on the uppermost disc

#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(char from_rod, char aux_rod, char to_rod, int n) {
    // Base case: no disks to move
    if (n == 0)
        return;

    // Move (n-1) disks from source to auxiliary using destination as auxiliary
    tower_of_hanoi(from_rod, to_rod, aux_rod, n - 1);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from rod " << from_rod
         << " to rod " << to_rod << endl;

    // Move (n-1) disks from auxiliary to destination using source as auxiliary
    tower_of_hanoi(aux_rod, from_rod, to_rod, n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 3;
    tower_of_hanoi('A', 'B', 'C', n);

    return 0;
}
