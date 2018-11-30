//Chips Game in C++
//Daniel Buchanan

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

const int MAX_CHIPS = 100;

int main() {
    bool player1Turn = true;
    bool gameOver = false;

    int chipsInPile = 0;
    int chipsTaken = 0;

    //seed the random number generator
    srand(time(0));

    chipsInPile = (rand() % MAX_CHIPS) + 1;
    cout << "This round will start with " << chipsInPile << " chips in the pile\n";



    return 0;
}
