#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int rollResults;
    srand(time(0));
    rollResults = rand()%6 +1;
    cout << "Your dice roll is " << rollResults << endl;
    return 0;
}
