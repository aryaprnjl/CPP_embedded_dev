// Notes: 14,15,16,17

#include <cstring>

typedef struct book{
    int   bookid;
    char  title[20];
    float price;
private:
    int prv_member;

public:
    // we can't take argument as book b. We can directly access structure members bookid, not like b.bookid.
    void getdata(int a)
    {
        bookid = a;
    }

    void set_prv_member(int a)
    {
        prv_member = a;
    }
}book;

book input()
{
    book b;

    b.bookid = 200;
    strcpy(b.title,"C++_1");
    b.price = 400;

    return b;
}

int first()
{
    // Can be intialized at declaration, but this method woll work only if all members are public
    // book b1 = {100,"C++ book",200};

    // Or can be initialized later
    book b2;
    b2.bookid = 100;
    b2.price = 200;

    // This wrong because title represents address of first block
    // b2.title="C++";
    // We can do this
    strcpy(b2.title,"C++");

    book b3,b4,b5;
    b3.bookid = b2.bookid;
    b3=b2;

    b4 = input();

    b5.getdata(300);

    // We can't set private members directly. We need to use member functions to access those.
    // b5.prv_member=1;
    b5.set_prv_member(1);

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