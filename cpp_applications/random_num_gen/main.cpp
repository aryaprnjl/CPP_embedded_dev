#include <cstdlib>
class Student {  
   public:  
      int id;
};  
int first() {
    Student s1;
    s1.id = rand();
    return s1.id;  
}
extern "C"
{
	int main()
	{
		return first();
	}
}