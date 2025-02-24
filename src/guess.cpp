#include <iostream>
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function

#define MIN_VALUE 0 //TODO: update
#define MAX_VALUE 0 //TODO: update


using namespace std;

int main(){
    /* start random generator sample */
    int value;            
    unsigned seed = time(0);   
    srand(seed);              
    value = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    /* end random generator sample */
    

    return 0;
}

