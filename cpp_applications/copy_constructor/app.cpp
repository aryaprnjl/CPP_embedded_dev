// Notes: 26

// Copy Constructor
// Compiler provides default constructor and copy constructor
// If no constructor is provided, then compiler will provide default and copy constructor
// If only default constructor is provided, then compiler will provide copy constructor
// If only copy constructor is provided, then compiler will provide no constructor
// If both constructors are provided, then also compiler will provide no constructor

#include <cstdio>

typedef class constructor_demo{
private:
    int priv_mem;
public:
    int pub_mem;
    static int constructor_call_count;
    // Following copy constructor is not valid because it will same constructor again and recursion will happen
    // Also we get compile error: error: invalid constructor; you probably meant 'constructor_demo (const constructor_demo&)'
    /*constructor_demo(constructor_demo c)
    {
        printf("Copy constructor is called\r\n");
        pub_mem = c.pub_mem;
        priv_mem = c.priv_mem;
        constructor_call_count++;
    }*/
    constructor_demo(constructor_demo &c)
    {
        printf("Copy constructor is called\r\n");
        pub_mem = c.pub_mem;
        priv_mem = c.priv_mem;
        constructor_call_count++;
    }
    // Copy constructor is a constructor where argument is object of some class
    // Following constructors are not copy constructors because arguments are not object of some class
    constructor_demo()
    {
        printf("Constructor is called without args\r\n");
        constructor_call_count++;
    }
    // These are constructor overloading, beacuse appropriate constructor will be called based on arguments
    constructor_demo(int k)
    {
        printf("Constructor is called with one arg\r\n");
        priv_mem = k;
        constructor_call_count++;
    }
    constructor_demo(int l, int k)
    {
        printf("Constructor is called with two args\r\n");
        pub_mem = l;
        priv_mem = k;
        constructor_call_count++;
    }
private:
    void set_priv_mem(int);
}constructor_demo;

int constructor_demo::constructor_call_count;

int first()
{
    printf("\r\n");

    constructor_demo c1(2,3),c2,c3(5);

    // below both are same and will use copy constructor
    constructor_demo c4(c1);
    constructor_demo c5=c1;

    return 1;
}

extern "C"
{
    int main()
    {
        return first();
    }
}
