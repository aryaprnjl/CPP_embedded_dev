//Notes: 10,11,12

// Default argument should be set in declaration itself. Then if we ommit it in definition, it's okay.
int func(int a, int b, int c=0);

// Rule: If default argument is set, then all subsequent arguments should be default argument
//void func(int a, int b=0, int c);

int first()
{
    int y;
    (void)func(1,2); //returns 3

    // If value is passed to default argument then default argument will be overridden by that value
    func(1,2,3); // returns 6

    return y;  
}

int func(int a, int b, int c)
{
    int d = a+b+c;
    return d;
}

extern "C"
{
    int main()
    {
        return first();
    }
}