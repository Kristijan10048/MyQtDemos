#include <QCoreApplication>
#include <iostream>
#include <format>

using namespace std;

typedef vector<vector<double>> d_matrix;
typedef vector<double> d_matrix_row;

void printMatrix(const d_matrix &matrix, unsigned int rowSize, unsigned int colSize);

void multiplyMatrix(const d_matrix& matrixA, const d_matrix& matrixB, d_matrix* outMatrix)
{
    const int mASize=3;
    const int mBSize=3;

    d_matrix resMatrix = d_matrix(mASize, d_matrix_row(mBSize));
    d_matrix_row resRow;
    for(int i = 0; i < mASize; i++)
    {
        for(int j=0; j < mBSize; j++)
        {
            //init the value to 0 at pos i,j
            resMatrix[i][j] = 0;
            for(int k =0 ; k< mASize; k++)
                resMatrix[i][j] += (matrixA[i][k] * matrixB[k][j]);
            //cout << format("m[{}][{}] = {}",i ,j , el_sum);
        }
        //cout << endl;
    }

    cout << "Result:" << endl;
    printMatrix(resMatrix,3,3);
}


void printMatrix(const d_matrix &matrix, unsigned int rowSize, unsigned int colSize)
{

    cout << "Dimensionss: " <<  matrix.size() << endl;
    cout << "m[0][0] = " << matrix[0][0] << endl;
    for(int i = 0; i < rowSize; i++)
    {

       // cout << "----" << endl;

        for(int j = 0; j< colSize; j++)
        {
            //cout << std::format("m[{}][{}] = {} ",i, j, matrix[i][j]) << endl;

            cout << std::format("{} ", matrix[i][j]);
            // cout << matrix[i][j];
        }
        cout << endl;
    }
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    d_matrix m1 = {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    d_matrix m2 = {
              {3,1,1},
              {4,1,2},
              {6,1,3}
    };

    d_matrix res;

    //double res[3][3];

    cout <<"A:"<<endl;
    printMatrix(m1, 3, 3);

    cout <<"B:"<<endl;
    printMatrix(m2,3,3);
    multiplyMatrix(m2, m1, &res);


    return a.exec();
}
