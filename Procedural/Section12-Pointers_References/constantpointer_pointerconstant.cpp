        #include<iostream>
        using namespace std;

        void display_constantpointer(int *const ptr)
        {
            //pointer cannot point to other place
            cout<<"Deferncing value: "<<*ptr<<endl;
            *ptr=80;
             cout<<"Deferncing value: "<<*ptr<<endl;
             //ptr=ptr+1; COMPILER ERROR


        }
        void display_pointertoconstant(const int *ptr)
        {
            //pointer cannot change the value
             ptr=ptr+1;
             //*ptr=50; COMPILER ERROR
        }

        void display_pointertoconstant2(const int *&ptr)
        {
            //pointer cannot change the value
             ptr=ptr+1;
             //*ptr=50; COMPILER ERROR
        }

        int main()
        {
        int low_temp{5};
        int high_temp{100};

        int *const p {&high_temp};

        const int *p2 {&high_temp};
        
        cout<<"Before: "<<*p<<endl;
        cout<<"Before: "<<p<<endl;
        display_constantpointer(p);
        cout<<"After: "<<*p<<endl;
        cout<<"After: "<<p<<endl;
        cout<<"------------"<<endl;

        cout<<"Before: "<<*p2<<endl;
        cout<<"Before: "<<p2<<endl;
        display_pointertoconstant(p2);
        cout<<"After: "<<*p2<<endl;
        cout<<"After: "<<p2<<endl;

         cout<<"------------"<<endl;

        cout<<"Before: "<<*p2<<endl;
        cout<<"Before: "<<p2<<endl;
        display_pointertoconstant2(p2);
        cout<<"After: "<<*p2<<endl;
        cout<<"After: "<<p2<<endl;


            return 0;

        }