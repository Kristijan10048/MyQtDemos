#ifndef CTEST_H
#define CTEST_H

class CAppTest
{
private:
    int m_iTestVal {99};
public:
    CAppTest();

    ~CAppTest();

    int getTestVal();

    void incrTestVal();
};

#endif // CTEST_H
