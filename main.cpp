#include <iostream>
#include <math.h>

using namespace std;

int main()
{
/*am decis să scriu un program
ce va rezolva ecuați de gradul 2**/
int varianta;
float a,b,c,x1,x2,x0;
float delta;
    cout<<"Buna, inainte sa rezolv ecuatia trebuie sa te intreb ceva: \n";
    cout<<"Ce forma are ecuata ta?\n";
    cout<<"1.a^2x±bx±c=0\n";
    cout<<"2.a^2x±bx=0\n";
    cout<<"3.a^2x±c=0\n";
    cout<<"4.bx±c=0\n";
    cout<<"Va rog, introducet numarul variantei alese:";cin>>varianta;
switch(varianta){

    case 1:
            cout<<"Dumneavoastra ati ales urmatoarea forma a exercitiului a^2x±bx±c=0.\n ";
            cout<<"Vă rog ,introduceti variabilele a,b,c\n";
            cout<<"Introduceti variabila (a):";cin>>a;cout<<"\n";
            cout<<"Introduceti variabila (b):";cin>>b;cout<<"\n";
            cout<<"Introduceti variabila (c):";cin>>c;cout<<"\n";
        delta=pow(b,2)-(4*a*c);
    if(delta>0)
    {
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            cout<<"solutiile ecuatiei sunt"<<x1<<"și "<<x2 <<"\n";

    }
    else if(delta==0)
    {
            x0=-(b/2*a);
            cout<<"solutia ecuatiei este\n"<< x0;
    }
    else if(delta<0)
    {
            cout<<"ecuatia nu are solutii\n";
    }
    else
    {
            cout<<"nustiu\n";
    }

    break;

    case 2:
            cout<<"Dumneavoastra ati ales urmatoarea forma a exercitiului a^2x±bx=0\n";
            cout<<"Va rog ,introduceti variabilele a,b:\n";
            cout<<"Introduceti variabila (a):";cin>>a;cout<<"\n";
            cout<<"Introduceti variabila (b):";cin>>b;cout<<"\n";
            c=1;
            delta=pow(b,2)-(4*a*c);
    if(delta>0)
    {
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            cout<<"solutiile ecuatiei sunt"<<x1<<"si "<<x2;

    }
    else if(delta==0)
    {
            x0=-(b/2*a);
            cout<<"solutia ecuatiei este"<< x0;
    }
    else if(delta<0)
    {
            cout<<"ecuatia nu are solutii";
    }

    break;

    case 3:
            cout<<"Dumneavoastra ati ales urmatoarea forma a exercitiului a^2x±c=0\n";
            cout<<"Va rog ,introduceti variabilele a,b:\n";
            cout<<"Introduceti variabila (a):";cin>>a;cout<<"\n";
            cout<<"Introduceti variabila (c):";cin>>c;cout<<"\n";
            b=1;
            delta=pow(b,2)-(4*a*c);
    if(delta>0)
    {

            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            cout<<"solutiile ecuatiei sunt"<<x1<<"si "<<x2;

    }
    else if(delta==0)
    {
            x0=-(b/2*a);
            cout<<"solutia ecuatiei este"<< x0;
    }
    else if(delta<0)
    {
            cout<<"ecuatia nu are solutii";
    }

    break;
    case 4:
    cout<<"Dumneavoastra ati ales urmatoarea forma a exercitiului bx±c=0\n";
            cout<<"Va rog ,introduceti variabilele a,b:\n";
            cout<<"Introduceti variabila (b):";cin>>b;cout<<"\n";
            cout<<"Introduceti variabila (c):";cin>>c;cout<<"\n";
             a=1;
            delta=pow(b,2)-(4*a*c);
    if(delta>0)
    {

            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            cout<<"solutiile ecuatiei sunt"<<x1<<"si "<<x2;

    }
    else if(delta==0)
    {
            x0=-(b/2*a);
            cout<<"solutia ecuatiei este"<< x0;
    }
    else if(delta<0)
    {
            cout<<"ecuatia nu are solutii";
    }

    break;
}


        return 0;
}
