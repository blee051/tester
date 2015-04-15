#include <iostream>

using namespace std;

template <class a_type> class test {
  private:
    a_type data;
    test<a_type>* next;
  public:
    test();
};

template<class a_type> test<a_type>::test() 
 : data(0), next(0)
{}

int main() {
    test<int> x;
    return 0;
}