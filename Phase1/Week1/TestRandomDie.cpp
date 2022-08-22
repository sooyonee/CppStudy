#include <iostream>
#include <iomanip>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
using namespace std;
 
const int TOTAL_COUNT = 2000000; 
const int NUM_FACES = 6;
int frequencies[6] = {0};
 
int main() {
   srand(time(0)); 
   for (int i = 0; i < TOTAL_COUNT; ++i) {
      ++frequencies[rand() % 6];
   }
 
   cout << fixed << setprecision(2);
   for (int i = 0; i < NUM_FACES; i++) {
      cout << i+1 << ": " << frequencies[i]
           << " (" << 100.0 * frequencies[i] / TOTAL_COUNT << "%)" << endl;
   }
}