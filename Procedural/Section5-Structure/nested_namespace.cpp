    #include<iostream>
    using namespace std;

    //c++14
        namespace Outer{
            namespace Inner{
                void hello() {
                    cout << "Hello from Inner namespace!" << endl;
                }
            }
        }

    //c++17 shortcut

    namespace a::b{
        void hello() {
                    cout << "Hello from c++ 17 Inner namespace!" << endl;
                }
    }
    int main()
    {   Outer::Inner::hello();
        a::b::hello();
        return 0;
    }