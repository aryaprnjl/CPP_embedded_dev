// Notes: 13

// Binding rules:
//1) Exact match of return tyoe and arguments
//2) If no, then type promotion happens. (char, unsigned char, short -> int), (float -> double)
//3) If no, then any primitive type can be converted in any primitive type.

int area(int, int);
float area(int);

int first()
{
    int x=1,y=2;

    // Exact match
    float a = area(x);
    int b = area(x,y);

    // Type promotion
    short p=1,q=2;
    int c = area(p,q);

    // Any primitive data type converted to any primitive data type
    float m=1,n=2;
    int d = area(m,n);

    return (a+b+c+d);
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