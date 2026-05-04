    #include<iostream>
    using namespace std;
    enum Days{
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    int main(){

        Days Today {Monday};

        switch(Today)
        {
                 case Sunday:cout<<"Today is Sunday"<<endl;
                break;
                 case Monday:cout<<"Today is Monday "<<endl;
                break;
                case Tuesday:cout<<"Today is Tuesday"<<endl;
                break;
                case Wednesday:cout<<"Today is Wednesday"<<endl;
                break;
                case Thursday:cout<<"Today is Thursday"<<endl;
                break;
                case Friday:cout<<"Today is Friday"<<endl;
                break;
                case Saturday:cout<<"Today is Saturday"<<endl;
                break;
                default:cout<<"Invalid choice!"<<endl;

            
        }
        return 0;
    }