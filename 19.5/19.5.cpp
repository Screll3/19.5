#include <iostream>
#include <string>

class animal
{
public:
    animal(){}
    animal(std::string _s) : s(_s) {}
    void voice()
    {
        std::cout << s << std::endl;
    }
private:
    std::string s;
};

class dog : public animal
{
public:
    dog() : animal("Woof") {}
};

class cat : public animal
{
public:
    cat() : animal("Meow") {}
};

class duck : public animal
{
public:
    duck() : animal("Quack") {}
};

int main()
{
    animal* arr = new animal[3];
    arr[0] = dog();
    arr[1] = cat();
    arr[2] = duck();

    for (int i = 0; i < 3; i++)
    {
        arr[i].voice();
    }
    return 0;
}
