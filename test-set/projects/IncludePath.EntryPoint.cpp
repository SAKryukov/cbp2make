#include <iostream>
#include <show.h>

using namespace std;

int main() {
    cout << "Output and object files in the parent directory of the project" << endl;
    cout << "A file included using additional include directory:" << endl;
    Included::Show();
    return 0;
} /* main */
