// Notes: 24,25

// Constructor
// It is member function of a class
// Name is same as of the name of class
// No return type, so rturn keyword can't be used
// Must be an instance member function, so it can never be static
// It is called implicitely. We don't call it. It gets invoked when an object is created
// After construction, it will not get called before any new construction
// It solves the problem of initialization
// It is called constructor, because it makes object really a object. Because it initializes the object, if we do.
// Constructor should be public because private constructor can't be accessed directly

#include <cstdio>

typedef class constructor_demo{
private:
    int priv_mem;
public:
    int pub_mem;
    static int constructor_call_count;
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

// In following class, compiler will provide it's default constructor
// It will be present in object file, though it is not in source code
// default constructor takes no argument
typedef class default_constructor_demo{
private:
    int priv_mem;
public:
    int pub_mem;
}default_constructor_demo;

// In following class, compiler won't provide it's default constructor
// because compiler doesn't provide default constructor when user provides own constructor
typedef class user_constructor_demo{
private:
    int priv_mem;
public:
    int pub_mem;
    user_constructor_demo(int a, int b)
    {
        pub_mem = a;
        priv_mem = b;
    }
}user_constructor_demo;

int first()
{
    printf("\r\n");

    // constructor_demo constructor will run here immediately
    constructor_demo c1;

    // constructor_demo constructor will run 3 times because it is instance member function
    constructor_demo c2,c3,c4;

    // constructor_demo constructor will run with one args
    constructor_demo c5(1);
    // Alternatively, we can write it in following way
    constructor_demo c6=constructor_demo(1);
    // Alternatively, we can write it in following way
    c2=1;

    // constructor_demo constructor will run with two args
    constructor_demo c7(1,2);
    // Alternatively, we can write it in following way
    constructor_demo c8=constructor_demo(1,2);

    // Following call will give error because no matching constructor is avilable based on constructor overloading
    //constructor_demo c7(1,2,3);

    printf("constructor_demo Constructor was called %d times\r\n",constructor_demo::constructor_call_count);

    // Here default constructor provided by compiler will be called
    default_constructor_demo def_constr_obj_1,def_constr_obj_2;

    // Here default constructor isn't provided by compiler, so it will use user provided constructor
    // this will work
    user_constructor_demo user_constr_obj_1(1,2);
    // this will fail
    //user_constructor_demo user_constr_obj_2;

    return 1;
}

extern "C"
{
    int main()
    {
        return first();
    }
}
