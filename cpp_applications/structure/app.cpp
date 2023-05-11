// Notes: 14,15

#include <cstring>

typedef struct book{
    int   bookid;
    char  title[20];
    float price;
}book;

int first()
{
    // Can be intialized at declaration
    book b1 = {100,"C++ book",200};

    // Or can be initialized later
    book b2;
    b2.bookid = 100;
    b2.price = 200;

    // This wrong because title represents address of first block
    // b2.title="C++";
    // We can do this
    strcpy(b2.title,"C++");

    book b3;
    b3.bookid = b2.bookid;
    b3=b2;

    return 1;
}

int area(int a, int b)
{
    return (a+b);
}

float area(int a)
{
    return a;
}

extern "C"
{
    int main()
    {
        return first();
    }
}