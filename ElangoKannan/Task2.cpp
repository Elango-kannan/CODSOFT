#include<iostream>
using namespace std;
int main()
{
    float e, d, ans;
    int option;
    do
    {
        cout<<"\n1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Desired Operand's number : ";
        cin>>option;
        if(option>=1 && option<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>e>>d;
        }
        switch(option)
        {
            case 1:
                ans = e+d;
                cout<<"\nResult = "<<ans;
                break;
            case 2:
                ans = e-d;
                cout<<"\nResult = "<<ans;
                break;
            case 3:
                ans = e*d;
                cout<<"\nResult = "<<ans;
                break;
            case 4:
                ans = e/d;
                cout<<"\nResult = "<<ans;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n\n\t__\n\n";
    }while(option!=5);
    cout<<endl;
    return 0;
}