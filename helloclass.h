#ifndef HELLOCLASS_H
#define HELLOCLASS_H

#include<iostream>
using namespace std;

class HelloClass
{
public:
	HelloClass(){
	cout << "I'm being creat." << endl;
	}
	~HelloClass(){
	cout << "I'm being destroyed." << endl;
	}
	void sayHello(){
	for(int i = 0;i < 3;i++){
		cout << "Hello!" << endl;
	}
	}
};

#endif
