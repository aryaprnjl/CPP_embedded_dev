// Notes: 1,2,3,4,5,6,7,8,9

int first()
{
    int x=0;
    int x1=1;
    int &y=x;

    // ref var should be initialized with declaration
    //int &z;

    // ref var can't be reinitialized
    //&y=x1;

    y=x1;

    return y;
}
extern "C"
{
    int main()
    {
        return first();
    }
}