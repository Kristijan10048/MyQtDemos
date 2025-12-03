#include <QCoreApplication>
#include <iostream>

using namespace std;

#include "CTest.h"

// set
static int g_numb {10};

void crateTestObj()
{


     //  In a function, when a variable is declared as static, space for it gets allocated for the lifetime of the program.
     //  Even if the function is called multiple times, space for the static variable is allocated only once and the value
     //  of the variable in the previous call gets carried through the next function call.
    static int nl = 101;

    //just a test instance for now
    CAppTest test;

    cout << "This is static var value: " << g_numb << endl;
    g_numb++;
    cout << "This is static var value afer increment: " << g_numb << endl;

    cout << endl;

    cout << "This is static local var value: " << nl << endl;
    nl++;
    cout << "This is static local value afer increment: " << nl << endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Runnung main..." << endl;



    for (int i=0; i<2; i++){
        crateTestObj();
        cout << "------------------------" << endl;
    }


    cout << "This is static var value (main): " << g_numb << endl;







    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.

    cout << "Exiting main..." << endl;

    return a.exec();
}
