// Templated class declaration used in template parameter example code
template <typename T>
class templatedClass
{
	public:
		int x;

		void foo(int);
		void foo(double);
};

int main()
{
	templatedClass<char> instantiatedClass;
	instantiatedClass.foo(7);
	instantiatedClass.foo(7.0);

	templatedClass<int> instantiatedClassInt;
	templatedClass<float> instantiatedClassFloat;
	templatedClass<templatedClass<char>> instantiatedClassNestedChar;

	for (int i = 0; i < 4; i++)
	{
		int x;
	}

	return 0;
}
