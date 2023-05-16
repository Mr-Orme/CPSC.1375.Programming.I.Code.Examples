#include <iostream>

using namespace std;

int main()
{
	//Why const?
	//1. Type protection. You won't accidently change the value!
	//2. It's a promise to other programmers that nothing is going to change! aka it shows intent!
	//3. Compilers can do a lot more optimizing on constants

	//Lesson 1: const must be initialilzed with a value!
	const int speedOfLight{ 299792458 };
	// \/ BAD \/
	const int PI;
	PI = 3.14;

	//Lesson 2: const variable's values cannot be changed!
	speedOfLight = 25;//Error:: expression must be a modifiable lvalue! Whenver you see an lvalue error, 
					  //it's more than likely because something is const!
	//More about lvalues and rvalues: https://www.internalpointers.com/post/understanding-meaning-lvalues-and-rvalues-c
	//Warning:: not a simple topic!!! However, if you plan on being a programmer, it is an important topic!

	//Why auto?
	//1. makes code more readable for complicated types
	//2. If one variables type should depend on another's it ensures that it does (aka won't forget to change)
	//Note:: Stil typed! The compiler must be able to confer the type!

	//\/ Bad \/
	auto x; // can't infer the type! x could be anything!

	//\/ OK \/ but ambiguous!
	auto y{ 1 }; //int because 1 is int!
	auto z{ 1.0 };//double! By default, decimals are double!
	auto zz{ 1.0f };//float! putting an f makes it a float!
	auto zzz{ 1 / 3 }; //Any guesses!!! What value is zzz storing???
	auto zzzz{ 1.0f / 3 }; //how about now???
	auto zzzzz{ z }; //same as z!
	auto zzzzzz{ true }; // bool
	
	//\/ good \/
	int a{ 4 };
	auto b{ a }; //it is obvious what b is because a has been specified!

	return 0;
}