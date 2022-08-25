#include <AppKit/AppKit.h>
#include <iostream>

using namespace std;

int main(void)
{
    cout << "Hello world !" << endl;
    NSBeep(200);
    sleep(1);
    return 0;
}