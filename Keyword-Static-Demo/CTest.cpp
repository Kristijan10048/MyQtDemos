#include "CTest.h"
#include <iostream>

using namespace std;

CAppTest::CAppTest() {

    cout << "AppTest Constructor!" << endl;
}

CAppTest::~CAppTest()
{
    cout << "AppTest Destrucotr!" << endl;
}

int CAppTest::getTestVal()
{
    return m_iTestVal;
}

void CAppTest::incrTestVal()
{
    m_iTestVal++;
}
