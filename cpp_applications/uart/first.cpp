class Student {  
   public:  
      int id;
};  
int first() {  
    Student s1;
    s1.id = 201;    
    return s1.id;  
}
extern "C"
{
	int getcppdata()
	{
		return first();
	}
}