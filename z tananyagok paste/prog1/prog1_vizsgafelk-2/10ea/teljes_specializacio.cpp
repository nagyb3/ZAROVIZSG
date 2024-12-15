template<typename T>
class MyClass
{
public:
    T GetValue() { return T(); }
};

// Teljes specializáció a típusra 'int'
template<>
class MyClass<int>
{
public:
    int GetValue() { return 42; }
};
