#include <iostream>
using namespace std;

class Student
{
	// These member variables can be accessed by anyfunction.
	public:
		int studId;
		string studName;
		
		// paarmeteriosed constructor : invoked during the object creation passing arguments
		Student(int id, string name)
		{
			// initialized in constructor 
			studId = id;
			studName = name;
		}
		
		void display()
		{
			cout << studId << " " << studName << "\n\n";
		}
		
};

int main()
{
	// Creating a student object
	Student s1(123, "Jane");
	Student s2(345, "Charles");
	
	// will cause an error: no matching function for this call, expects two arguments
	// Student s3(23);
	
	// will cause an error: no matchnig function for this call, expects 2 arguments
	// Student s3("abhi");
	
	// will cause an error: no matching function for this call, expects two arguments
	// Student s3;
	
	s1.display();
	s2.display();
	
	
	// will show error until the s3 object will not initialized properly
	// s3.display();
	return 0;
}
