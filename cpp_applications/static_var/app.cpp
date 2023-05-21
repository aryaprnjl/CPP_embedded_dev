// Notes: 21

// Static varibales: same as in C, by default initialized to 0, lifetime is throughout the program

#include <cstdio>

void func(int x1, int y1)
{
    // Will get memory while program starts and won't get destoyed till program terminates
    // Same copy will exist throughout the program and will be initialized to 0 at the start of program possibly in startup file
    static int x;
    // Will get memory when funtion will be called and will get destroyed when function call be teminated
    // Will get created in stack and destroyed in each function call. If not specified, will be initialized to grabge because it will take whatever memory content is there at the varibale's address
    int y;

    x++;
    y++;

    x = x1;
    y = y1;

    (void)x;
    (void)y;
}

// Static member variable in class is declared inside class body
// It must be defined outside the class
// It doesn't belong to any object, but belongs to whole class
// There will be only one copy of static varible for the whole class
// Any object can use the same copy of class variable
// They are known as class member variable also
typedef class book{
    // Instance member variable
    int priv_mem;
    // Static member variable  / class variable
    static int static_priv_mem;
public:
    int pub_mem;
    static int static_pub_mem;
    void set_pub_mem(int a)
    {
        pub_mem = a;
    }
    void inline call_priv_method_by_pub_method(int a);
private:
    void set_priv_mem(int);
}book;

// If we do not declare these static variables in following lines, then these variables won't get created. They will be optimized out.
// These variables will get memory after these lines
// These variables' memory doesn't depend on objects. Because of this reason, they are called class variables, not instance variables. It doesn't belong to instance
int book::static_priv_mem = 100;
int book::static_pub_mem = 200;
// If we don't assign any values, then by default they have value 0
//int book::static_priv_mem;
//int book::static_pub_mem;

// All methods are inline by default. But if some function is declared outside, then we need to explicitely use inline.
void inline book::call_priv_method_by_pub_method(int a)
{
    set_priv_mem(a);
}

void book::set_priv_mem(int a)
{
    priv_mem = a;
}

int first()
{
    // In these calls, observe how values of normal and static variable changes differently
    func(1,2);
    func(1,2);

    // b2, b3 will have only have priv_mem and pub_mem variables. static_priv_mem and static_pub_mem variables will not be part of them
    // static_priv_mem and static_pub_mem will be only one in program
    book b2,b3;
    // static_pub_mem will get updated both in b2 and b3, because they share the same.
    b2.static_pub_mem = 400;
    // pub_mem will get updated only in b2. Because b2 and b3 will have different values.
    b2.set_pub_mem(200);
    b2.call_priv_method_by_pub_method(300);

    /* We can directly copy member variables in this way */
    b3 = b2;

    return 1;
}

extern "C"
{
    int main()
    {
        return first();
    }
}
