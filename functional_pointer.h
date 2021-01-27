#include<iostream>
#include<vector>

namespace fp {

	std::vector<int> values = {1,2,3,4,5};

	void HelloWorld()
	{
		std::cout << "Hello world" << std::endl;
	}

	void HelloWorld(int a)
	{
		std::cout << "Hello world valie : " << a <<std::endl;
	}

	void PrintValue(int &v)
	{
		std::cout << "Value: " <<v <<std::endl;
	}

	typedef void(*Callback)(int&);

	void ForEach(const std::vector<int>& values, Callback callback) 
	{
		for (int value : values)
		{
			callback(value);
		}
	}

	void multiplyByTwo(int& value) {
		value =0;
	}

	void run()
	{
		// Functional pointer sam points to HelloWorld
		void(*sam)() = HelloWorld;

		sam = HelloWorld;

		sam();
		sam();

		//prefered way to use functional pointer is to create typedef
		// because above void(*funcname)() looks confusing

		typedef void(*AwesomeFuncType)();

		AwesomeFuncType func = HelloWorld;
		func();

		// With params
		typedef void(*HellWorldWithParam)(int);

		HellWorldWithParam p = HelloWorld;
		p(25);


		// Use case
		//ForEach(values, multiplyByTwo);
		values[0] = 25;
		ForEach(values, PrintValue);

		
	}
}