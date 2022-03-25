/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class Dado{
    private:
        int face_dado;
        
    public:
        Dado(int num);
        int retorna_face_dado();
};

Dado::Dado(int num)
{
    face_dado=num;
}
int Dado::retorna_face_dado()
{
    srand(time(NULL));
    
    face_dado=rand() %6;
    
    return face_dado;
}

int main()
{
    Dado d1(0);
    
    cout<<d1.retorna_face_dado()+1;
    
    return 0;
}

