#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {

    int max = atoi(argv[1]);
    if(argc < 2) {
        cout << "Please provide command line arguments while running progream." << endl;
        return -1;
    }
    //printf("%c", argv[1]);

    for(int i = 0; i < argc; i++) {

        if(atoi(argv[i]) > max) {
            max = atoi(argv[i]);
        }
    }

    cout << "The maximum number is: " << max << endl;

    return 0;
}