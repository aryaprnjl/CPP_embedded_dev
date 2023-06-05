// Notes: 27

// Destructor
// It is instance member function of a class
// Name is same as of the name of class but preceded by ~ symbol
// Can never be static
// No return type, so rturn keyword can't be used
// Must be an instance member function, so it can never be static
// It takes no argument, so no overloading is possible
// If we don't provide destructor, then compiler will provide and it will be empty body: ~destructor(){}
// Destructor doesn't destroy object, but it is a last function which runs in it's lifespan
// It will get destroyed but not by destructor. It will get destroyed when function execution finishes, if it is created inside function
// Destructor is used to release resource allocated to an object
/*   Object
     ------------
     |			| pointer   |------------|
	 |  var   ------------->|resource    |
	 |			|			|------------|
     ------------
*/
// Before object destruction, we can release this resource may be via dynamic memory allocation by delete().
// Otherwise memory may not be available to heap.
// Because after object deletion, we don't want this and we will not have even pointer to point to.

#include <cstdio>

typedef class destructor_demo{
private:
    int priv_mem;
public:
    int pub_mem;
    static int constructor_call_count;
    static int destructor_call_count;
    destructor_demo()
    {
        printf("Constructor is called\r\n");
        constructor_call_count++;
    }
    ~destructor_demo()
    {
        printf("Destructor is called\r\n");
        destructor_call_count++;
    }
    // As written above, following destructors are not possible
    // static ~destructor_demo(){}
    // destructor_demo(int x){}
private:
    void set_priv_mem(int);
}constructor_demo;

int constructor_demo::constructor_call_count;
int destructor_demo::destructor_call_count;

void func_call(void)
{
    destructor_demo c2;
    // destructor will run here
}
// After destructor call only, object will get destroyed here

int first()
{
    printf("\r\n");

    // destructor_demo constructor will run here immediately
    destructor_demo c1;

    func_call();

    printf("destructor_demo constructor was called %d times\r\n",destructor_demo::constructor_call_count);
    printf("destructor_demo destructor was called %d times\r\n",destructor_demo::destructor_call_count);

    return 1;
}

extern "C"
{
    int main()
    {
        return first();
    }
}
