struct Test {
	Test(int) {}
	Test() {}
	void func() {}
};

int main() 
{
	Test a(1);
	a.func();
	Test b();
	b.func();

	return 0;
}
