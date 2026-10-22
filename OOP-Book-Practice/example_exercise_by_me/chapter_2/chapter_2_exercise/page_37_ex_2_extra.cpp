
#include<iostream>
#include<ctime>
using namespace std;
class stopwatch
{
    clock_t begin,end;
public:
    stopwatch();
    ~stopwatch();
    void start();
    void stop();
    void show();
};
stopwatch::stopwatch()
{
    begin=end=0;
}
stopwatch::~stopwatch()
{
    cout<<"Stopwatch object is destroyed"<<endl;

}
void stopwatch::start()
{
    begin=clock() ;
    cout<<"Begin: "<<begin/CLOCKS_PER_SEC<<endl;
}
void stopwatch::stop()
{
    end=clock() ;
    cout<<"End: "<<end/CLOCKS_PER_SEC<<endl;
}
void stopwatch::show()
{
    cout<<"Elapsed time "<<(end-begin)/CLOCKS_PER_SEC<<endl;
}
int main()
{
    stopwatch ob;
    char ch;
    cout<<"Press s to start the stop-watch:";
    cin>>ch;
    switch(ch)
    {
    case 's':
        ob.start();
        cout<<"Press b to stop the stop-watch:";
        cin>>ch;
        switch(ch)
        {
        case 'b':
            ob.stop();

            break;
        }

        break;

    }

    ob.show();


}
