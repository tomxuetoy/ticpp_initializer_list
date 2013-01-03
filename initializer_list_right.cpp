#include <iostream> 
#include <vector> 

using namespace std;  
class array  
{  
    public: 
	    array(int lowbound, int highbound); 
		int size;
    	int lbound, hbound;
		vector<int> data;  
};  

array::array(int lowbound, int highbound):  
size(highbound-lowbound+1),  
lbound(lowbound),hbound(highbound),  
data(size){}  

int main()  
{  
    array a(0,10);  
    cout <<  a.size <<  '\n';  
    cout <<  a.data.size() <<  '\n';  
} 
/*
$ ./a.out 
11
11
 * */
