#include "md5.h"
 
#include <iostream>
using namespace std;
 
int main()
{
	md5 m("sefslxjjdeedfs");
	char buf[33];
	m.digest(buf);
 
	cout<<buf<<endl;
 
	return 0;
}
