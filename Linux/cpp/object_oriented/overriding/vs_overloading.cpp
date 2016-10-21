class Base {
public:
	virtual Base* func(Base *);
};
Base* Base::func(Base *) { return 0; }

/* overriding */
class Derived_A: public Base {
public:
	Base* func(Base *);
};
Base* Derived_A::func(Base *) { return 0; }

/* overloading */
class Derived_B: public Base {
public:
	Base* func(Derived_B *);
};
Base* Derived_B::func(Derived_B *) { return 0; }

/* what about this? */
class Derived_C: public Base {
public:
	Derived_C* func(Base *);
};
Derived_C* Derived_C::func(Base *) { return 0; }

/* overloading */
class Derived_D: public Base {
public:
	Base* func(Base *) const;
};
Base* Derived_D::func(Base *) const { return 0; }

int main()
{
	return 0;
}