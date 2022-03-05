#include<iostream>
#include <cstdlib>
using namespace std;
template<class T>
class SA{
private:
    T low, high;
    T * p;
public:
    // default constructor
    // allows for writing things like SA a;
    SA(){
        low=0;
        high=-1;
        p=NULL;
    }


    // 2 parameter constructor lets us write
    // SA x(10,20);

    SA(T l, T h){
        if((h-l+1)<=0)
        {cout<< "constructor error in bounds definition"<<endl;
            exit(1);}
        low=l;
        high=h;
        p=new int[h-l+1];
    }
    // single parameter constructor lets us
    // create a SA almost like a "standard" one by writing
    // SA x(10); and getting an array x indexed from 0 to 9

    SA(T i){
        low=0; high=i-1;
        p=new int[i];
    }
    // copy constructor for pass by value and
    // initialization
    SA(const SA &s){
        T size=s.high-s.low+1;
        p=new int[size];
        for(int i=0; i<size; i++)
            p[i]=s.p[i];
        low=s.low;
        high=s.high;
    }
    // destructor
    ~SA(){
        delete [] p;
    }
    //overloaded [] lets us write
    //SA x(10,20); x[15]= 100;
    T& operator[](T i) {
        if (i < low || i > high) {
            cout << "index " << i << " out of range" << endl;
            //exit(1);
        }
            return p[i - low];

    }
    // overloaded assignment lets us assign
    // one SA to another
    SA<T> & operator=(const SA<T> & s){
        if(this==&s)return *this;
        delete [] p;
        int size=s.high-s.low+1;
        p=new int[size];
        for(int i=0; i<size; i++)
            p[i]=s.p[i];
        low=s.low;
        high=s.high;
        return *this;
    }

    friend ostream& operator<<(ostream& os, SA<T> s) {
        int size = s.high - s.low + 1;
        for (int i = 0; i < size; i++)
            cout<< s.p[i] << endl;
        return os;
    };
};

template<class T>
void Sort(SA<T> &sa, T size) {
    for(int lastUnsortedIndex = size - 1; lastUnsortedIndex > 0; lastUnsortedIndex--){
        for(int j = 0; j < lastUnsortedIndex; j++){
            if(sa[j] > sa[j + 1]){
                swap(sa[j], sa[j+1]);
            }
        }
    }
}

template<class M>
class Matrix {
private:
    M column, row;
    M **matrix;
public:
        Matrix(){
            column = 0;
            row = -1;
            matrix = nullptr;
        }
        //matrix constructor for setting row and column
        Matrix(int row, int column){
            this-> row = row;
            this-> column = column;
            matrix = new int *[row];
            for(int i = 0; i < row; i++){
                matrix[i] = new int [column];
                for(int j = 0; j < column; j++){
                    matrix[i][j] = 0;
                }
            }
        }

    // destructor
    ~Matrix(){
        delete [] matrix;
    }

    Matrix<M> operator[](M i){
        if(i < row || i > column)
        {cout<< "index "<<i<<" out of range"<<endl;
            exit(1);}
        return matrix[i-row];
    }

    friend ostream& operator<<(ostream& os, Matrix<M> m) {
        int size = m.column - m.row + 1;
        for (int i = 0; i < size; i++)
            cout << m.matrix[i] << endl;
        return os;
    };

    // matrix operator for *=
    //multiplication of Matrix 1 and matrix 22
    Matrix& operator*= (const Matrix& m){
        if(column == m.row){
            for(int i = 0; i < m.row; ++i){
                for(int k = 0; k < column; ++k){
                    matrix[i][k] *= m.matrix[k][i];
                }
            }
        }
        return *this;
    }


    Matrix & operator=(const Matrix & s){
        if(this==&s){
            return *this;
        }
        delete [] matrix;
        matrix = row.matrix;
        column = row.column;
        row = row.row;
        return *this;
    }


    M createMatrix();
    M display();

};


//displaying the matrix
template<class M>
M Matrix<M>::display() {
    cout <<"The matrix is:\n";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << matrix[i][j] <<" ";
        }
        cout <<endl;
    }
}

//Entering matrix elements into every index
template<class M>
M Matrix<M>::createMatrix() {
    cout<<"Enter matrix elements:";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> matrix[i][j];
        }
    }
}


int main(){
    SA<int> a(10), b(3,5);
    b[3]=3; b[4]=4; b[5]=5;
    int i;
    for( i=0;i<10;i++)
        a[i]=10-i;
    cout<<"printing a the first time" <<endl;
    cout<<a<<endl;
    cout<<"printing using []"<<endl;
    for( i=0;i<10;i++)
        cout<<a[i]<<endl;
    // write your own sort
    Sort(a,10);
    cout<<"printing a the second time" <<endl;
    cout<<a<<endl;
    b[4]=12;
    cout<<"printing b " <<endl;
    cout<<b<<endl;
    // should print an error message and exit
    a[10] = 12;
    cout<<"============================="<<endl;
    cout<<"Matrix..............\n";
    Matrix<int> matrix (2,2);
    Matrix<int> matrix_2 (2,2);
    matrix.createMatrix();
    matrix.display();
    matrix_2.createMatrix();
    matrix_2.display();
    Matrix<int> matrix3;
    cout<<"multiplication Matrix"<<endl;
    matrix*= matrix_2;
    matrix.display();
    return 0;
}


