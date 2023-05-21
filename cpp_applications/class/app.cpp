// Notes: 18,19,20

// Class is a description of object
// Object is an instance of a class
// Members of class can be called instance member variable/attribute/data member/fields/property
// Functions of class can be called instance member function/method/procedure/action/operation/service
// Collectively,

// Object state: Collection of object member variable's values
// If value of any variable gets changed, then we can say object state has changed.
// As per OOP, object state should get changed by only member functions.

// Class vs Structure
// Structure:
//          1)Member variables are public by default.
//          2)Instances of structures are called variables;
// Class:
//          1)Member variables are private by default.
//          2)Instances of class are called objects.

#include <cstdio>

typedef class book{
    int priv_mem;
public:
    int pub_mem;
    void set_pub_mem(int a)
    {
        pub_mem = a;
    }
    book add_class_vars(book b)
    {
        book b1;

        b1.priv_mem = priv_mem + b.priv_mem;
        b1.pub_mem = pub_mem + b.pub_mem;

        return b1;
    }
    void inline call_priv_method_by_pub_method(int a);
private:
    void set_priv_mem(int);
}book;

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
    // Can be intialized at declaration, but this method woll work only if all members are public
    // book b1 = {100,200};

    // Or can be initialized later
    book b2;
    b2.pub_mem = 100;
    b2.set_pub_mem(200);

    // Private members can only be initilized by methods. They can't be set directly.
    //b2.priv_mem = 300;
    // We can't call private methods directly. Private methods can be called only via public methods.
    //b2.set_priv_mem(300);
    b2.call_priv_method_by_pub_method(300);

    book b3,b4;

    /* We can directly copy member variables in this way */
    b3 = b2;

    /* But, we can't do such following operations. Because it doesn't know how to use these operators on member variables */
    // b4 = b3+b2;
    // Instead we need to use such function or operate on individual member varibales */
    b4 = b3.add_class_vars(b2);

    return 1;
}

extern "C"
{
    int main()
    {
        return first();
    }
}

