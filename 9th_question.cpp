#include <iostream>
using namespace std;
void towersOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towersOfHanoi(n - 1, source, auxiliary, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towersOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n = 3; 
    towersOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}
