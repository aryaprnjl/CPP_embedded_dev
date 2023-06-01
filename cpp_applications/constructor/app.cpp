// Notes: 24

// Constructor
// It is member function of a class
// Name is same as of the name of class
// No return type, so rturn keyword can't be used
// Must be an instance member function, so it can never be static
// It is called implicitely. We don't call it. It gets invoked when an object is created
// After construction, it will not get called before any new construction
// It solves the problem of initialization
// It is called constructor, because it makes object really a object. Because it initializes the object, if we do.

#include <cstdio>

typedef class constructor_demo{
private:
    int priv_mem;
public:
    int pub_mem;
    static int constructor_call_count;
    constructor_demo()
    {
        printf("Constructor is called\r\n");
        constructor_call_count++;
    }
private:
    void set_priv_mem(int);
}book;

int constructor_demo::constructor_call_count;

int first()
{
    printf("\r\n");

    // constructor_demo constructor will run here immediately
    constructor_demo c1;

    // constructor_demo constructor will run 3 times because it is instance member function
    constructor_demo c2,c3,c4;

    printf("Constructor was called %d times\r\n",constructor_demo::constructor_call_count);

    return 1;
}

extern "C"
{
    int main()
    {
        return first();
    }
}
