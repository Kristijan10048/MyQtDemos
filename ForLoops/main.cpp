#include <QCoreApplication>

#include <vector>
#include <iostream>

using namespace std;

bool multipleOfNumber(int number, int multiple){

    if(number % multiple == 0){
        return true;
    }
    else
        return false;

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    foreach (int numb, numbers) {

        if (multipleOfNumber(numb, 3))
            cout << "Multiple of 3 :" << numb << endl;

    }

    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.

    return a.exec();
}
