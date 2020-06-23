#include <iostream>

#include "FciVector.h"

#include <cstdlib>

using namespace std;

int main()
{
    int ans1,ans2,num,size1,index;
    string ans3;
    while(1)
    {
       cout<<"Insert type of vector you would like to create:"<<endl;
       cout<<"1. list of integers"<<endl;
       cout<<"2. list of characters"<<endl;
       cout<<"3. list of strings"<<endl;
       cout<<"4. list of floats"<<endl;
       cout<<"5. list of students"<<endl;
       cout<<"6. Exit"<<endl;
       cout<<"Enter your choice: ";
       cin>>ans1;
       cin.clear();
       cin.ignore(10000,'\n');
       if(ans1==1)
       {
            FciVector<int> ints;
            int element;
            int* pointer;
            cout<<"A vector of integers was created successfully"<<endl;
            while(1)
            {
                ints.print_menu();
                cin>>ans2;
                cin.clear();
                cin.ignore(10000,'\n');
                switch(ans2)
                {
                    case 1:
                        system("CLS");
                        cout<<"How many elements you would like to add?"<<endl;
                        cin>>num;
                        size1=ints.display_size();
                        for(int i=size1;i<num+size1;i++)
                        {
                            cout<<"Enter "<<i+1<<"# element"<<endl;
                            cin>>element;
                            ints.push_back1(element);
                        }
                        break;
                    case 2:
                        if(ints.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        ints.pop_back1();
                        break;
                    case 3:
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>ints.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        cout<<"Enter an element"<<endl;
                        cin>>element;
                        pointer=ints.begin1()+index;
                        ints.insert1(pointer,element);
                        break;
                    case 4:
                        if(ints.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>ints.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        pointer=ints.begin1()+index;
                        ints.erase1(pointer);
                        break;
                    case 5:
                        if(ints.display_size()==0)
                        {
                            cout<<"Vector is already empty"<<endl;
                            break;
                        }
                        ints.clear1();
                        cout<<"Vector is now empty"<<endl;
                        break;
                    case 6:
                        if(ints.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        cout<<"First element: "<<ints.front1()<<endl;
                        break;
                    case 7:
                        if(ints.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        cout<<"Last element: "<<ints.back1()<<endl;
                        break;
                    case 8:
                        if(ints.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>ints.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        cout<<index<<"# element: "<<ints.display_element(index)<<endl;
                        break;
                    case 9:
                        cout<<"Vector size: "<<ints.display_size()<<endl;
                        break;
                    case 10:
                        cout<<"Vector capacity: "<<ints.display_capacity()<<endl;
                        break;
                    case 11:
                        if(ints.empty1())
                            cout<<"yes"<<endl;
                        else
                            cout<<"no"<<endl;
                        break;
                    case 12:
                        if(ints.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        ints.display_all();
                        break;
                    default:
                        cout<<"Invalid input"<<endl;
                }
                if(ans2==5)
                {
                    system("CLS");
                    break;
                }
                cout<<"Would you like to preform other operations?(Y/N)"<<endl;
                cin>>ans3;
                while(ans3!="N" and ans3!="Y")
                {
                    cout<<"invalid entry....please enter a valid character"<<endl;
                    cin>>ans3;
                }
                if(ans3=="N")
                {
                    system("CLS");
                    break;
                }
                system("CLS");
            }
       }
       else if(ans1==2)
       {
            FciVector<char> chars;
            char element;
            char* pointer;
            cout<<"A vector of characters was created successfully"<<endl;
            while(1)
            {
                chars.print_menu();
                cin>>ans2;
                switch(ans2)
                {
                    case 1:
                        system("CLS");
                        cout<<"How many elements you would like to add?"<<endl;
                        cin>>num;
                        size1=chars.display_size();
                        for(int i=size1;i<num+size1;i++)
                        {
                            cout<<"Enter "<<i+1<<"# element"<<endl;
                            cin>>element;
                            chars.push_back1(element);
                        }
                        break;
                    case 2:
                        if(chars.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        chars.pop_back1();
                        break;
                    case 3:
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>chars.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        cout<<"Enter an element"<<endl;
                        cin>>element;
                        pointer=chars.begin1()+index;
                        chars.insert1(pointer,element);
                        break;
                    case 4:
                        if(chars.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>chars.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        pointer=chars.begin1()+index;
                        chars.erase1(pointer);
                        break;
                    case 5:
                        if(chars.display_size()==0)
                        {
                            cout<<"Vector is already empty"<<endl;
                            break;
                        }
                        chars.clear1();
                        cout<<"Vector is now empty"<<endl;
                        break;
                    case 6:
                        if(chars.display_size()==0)
                            cout<<"Vector is empty"<<endl;
                        cout<<"First element: "<<chars.front1()<<endl;
                        break;
                    case 7:
                        if(chars.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        cout<<"Last element: "<<chars.back1()<<endl;
                        break;
                    case 8:
                        if(chars.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>chars.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        cout<<index<<"# element: "<<chars.display_element(index)<<endl;
                        break;
                    case 9:
                        cout<<"Vector size: "<<chars.display_size()<<endl;
                        break;
                    case 10:
                        cout<<"Vector capacity: "<<chars.display_capacity()<<endl;
                        break;
                    case 11:
                        if(chars.empty1())
                            cout<<"yes"<<endl;
                        else
                            cout<<"no"<<endl;
                        break;
                    case 12:
                        if(chars.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        chars.display_all();
                        break;
                    default:
                        cout<<"Invalid input"<<endl;
                }
                if(ans2==5)
                {
                    system("CLS");
                    break;
                }
                cout<<"Would you like to preform other operations?(Y/N)"<<endl;
                cin>>ans3;
                while(ans3!="N" and ans3!="Y")
                {
                    cout<<"invalid entry....please enter a valid character"<<endl;
                    cin>>ans3;
                }
                if(ans3=="N")
                {
                    system("CLS");
                    break;
                }
                system("CLS");
            }
       }
       else if(ans1==3)
        {
            FciVector<string> strings;
            string element;
            string* pointer;
            cout<<"A vector of strings was created successfully"<<endl;
            while(1)
            {
                strings.print_menu();
                cin>>ans2;
                switch(ans2)
                {
                    case 1:
                        system("CLS");
                        cout<<"How many elements you would like to add?"<<endl;
                        cin>>num;
                        size1=strings.display_size();
                        for(int i=size1;i<num+size1;i++)
                        {
                            cout<<"Enter "<<i+1<<"# element"<<endl;
                            cin>>element;
                            strings.push_back1(element);
                        }
                        break;
                    case 2:
                        if(strings.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        strings.pop_back1();
                        break;
                    case 3:
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>strings.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        cout<<"Enter an element"<<endl;
                        cin>>element;
                        pointer=strings.begin1()+index;
                        strings.insert1(pointer,element);
                        break;
                    case 4:
                        if(strings.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>strings.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        pointer=strings.begin1()+index;
                        strings.erase1(pointer);
                        break;
                    case 5:
                        if(strings.display_size()==0)
                        {
                            cout<<"Vector is already empty"<<endl;
                            break;
                        }
                        strings.clear1();
                        cout<<"Vector is now empty"<<endl;
                        break;
                    case 6:
                        if(strings.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        cout<<"First element: "<<strings.front1()<<endl;
                        break;
                    case 7:
                        if(strings.display_size()==0)
                            cout<<"Vector is empty"<<endl;
                        cout<<"Last element: "<<strings.back1()<<endl;
                        break;
                    case 8:
                        if(strings.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>strings.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        cout<<index<<"# element: "<<strings.display_element(index)<<endl;
                        break;
                    case 9:
                        cout<<"Vector size: "<<strings.display_size()<<endl;
                        break;
                    case 10:
                        cout<<"Vector capacity: "<<strings.display_capacity()<<endl;
                        break;
                    case 11:
                        if(strings.empty1())
                            cout<<"yes"<<endl;
                        else
                            cout<<"no"<<endl;
                        break;
                    case 12:
                        if(strings.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        strings.display_all();
                        break;
                    default:
                        cout<<"Invalid input"<<endl;
                }
                if(ans2==5)
                {
                    system("CLS");
                    break;
                }
                cout<<"Would you like to preform other operations?(Y/N)"<<endl;
                cin>>ans3;
                while(ans3!="N" and ans3!="Y")
                {
                    cout<<"invalid entry....please enter a valid character"<<endl;
                    cin>>ans3;
                }
                if(ans3=="N")
                {
                    system("CLS");
                    break;
                }
                system("CLS");
            }
        }
        else if(ans1==4)
        {
            FciVector<float> floats;
            float element;
            float* pointer;
            cout<<"A vector of floats was created successfully"<<endl;
            while(1)
            {
                floats.print_menu();
                cin>>ans2;
                switch(ans2)
                {
                    case 1:
                        system("CLS");
                        cout<<"How many elements you would like to add?"<<endl;
                        cin>>num;
                        size1=floats.display_size();
                        for(int i=size1;i<num+size1;i++)
                        {
                            cout<<"Enter "<<i+1<<"# element"<<endl;
                            cin>>element;
                            floats.push_back1(element);
                        }
                        break;
                    case 2:
                        if(floats.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        floats.pop_back1();
                        break;
                    case 3:
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>floats.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        cout<<"Enter an element"<<endl;
                        cin>>element;
                        pointer=floats.begin1()+index;
                        floats.insert1(pointer,element);
                        break;
                    case 4:
                        if(floats.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>floats.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        pointer=floats.begin1()+index;
                        floats.erase1(pointer);
                        break;
                    case 5:
                        if(floats.display_size()==0)
                        {
                            cout<<"Vector is already empty"<<endl;
                            break;
                        }
                        floats.clear1();
                        cout<<"Vector is now empty"<<endl;
                        break;
                    case 6:
                        if(floats.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        cout<<"First element: "<<floats.front1()<<endl;
                        break;
                    case 7:
                        if(floats.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        cout<<"Last element: "<<floats.back1()<<endl;
                        break;
                    case 8:
                        if(floats.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>floats.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        cout<<index<<"# element: "<<floats.display_element(index)<<endl;
                        break;
                    case 9:
                        cout<<"Vector size: "<<floats.display_size()<<endl;
                        break;
                    case 10:
                        cout<<"Vector capacity: "<<floats.display_capacity()<<endl;
                        break;
                    case 11:
                        if(floats.empty1())
                            cout<<"yes"<<endl;
                        else
                            cout<<"no"<<endl;
                        break;
                    case 12:
                        if(floats.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        floats.display_all();
                        break;
                    default:
                        cout<<"Invalid input"<<endl;
                }
                if(ans2==5)
                {
                    system("CLS");
                    break;
                }
                cout<<"Would you like to preform other operations?(Y/N)"<<endl;
                cin>>ans3;
                while(ans3!="N" and ans3!="Y")
                {
                    cout<<"invalid entry....please enter a valid character"<<endl;
                    cin>>ans3;
                }
                if(ans3=="N")
                {
                    system("CLS");
                    break;
                }
                system("CLS");
            }
        }
        else if(ans1==5)
        {
            FciVector<student> students;
            student* pointer;
            cout<<"A vector of students was created successfully"<<endl;
            while(1)
            {
                student element1;
                students.print_menu();
                cin>>ans2;
                switch(ans2)
                {
                    case 1:
                        system("CLS");
                        cout<<"How many elements you would like to add?"<<endl;
                        cin>>num;
                        size1=students.display_size();
                        for(int i=size1;i<num+size1;i++)
                        {
                            student element;
                            cout<<"Enter "<<i+1<<"# element"<<endl;
                            cin>>element;
                            students.push_back1(element);
                        }
                        break;
                    case 2:
                        if(students.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        students.pop_back1();
                        break;
                    case 3:
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>students.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        cout<<"Enter an element"<<endl;
                        cin>>element1;
                        pointer=students.begin1()+index;
                        students.insert1(pointer,element1);
                        break;
                    case 4:
                        if(students.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>students.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        pointer=students.begin1()+index;
                        students.erase1(pointer);
                        break;
                    case 5:
                        if(students.display_size()==0)
                        {
                            cout<<"Vector is already empty"<<endl;
                            break;
                        }
                        students.clear1();
                        cout<<"Vector is now empty"<<endl;
                        break;
                    case 6:
                        if(students.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        cout<<students.front1()<<endl;
                        break;
                    case 7:
                        if(students.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        cout<<students.back1()<<endl;;
                        break;
                    case 8:
                        if(students.display_size()==0)
                        {
                            cout<<"Vector is empty"<<endl;
                            break;
                        }
                        system("CLS");
                        cout<<"Enter an index"<<endl;
                        cin>>index;
                        while(index<=0||index>students.display_size()+1)
                        {
                            cout<<"Invalid index....Enter a valid one"<<endl;
                            cin>>index;
                        }
                        students.display_element(index);
                        break;
                    case 9:
                        cout<<"Vector size: "<<students.display_size()<<endl;
                        break;
                    case 10:
                        cout<<"Vector capacity: "<<students.display_capacity()<<endl;
                        break;
                    case 11:
                        if(students.empty1())
                            cout<<"yes"<<endl;
                        else
                            cout<<"no"<<endl;
                        break;
                    default:
                        cout<<"Invalid input"<<endl;
                }
                if(ans2==5)
                {
                    system("CLS");
                    break;
                }
                cout<<"Would you like to preform other operations?(Y/N)"<<endl;
                cin>>ans3;
                while(ans3!="N" and ans3!="Y")
                {
                    cout<<"invalid entry....please enter a valid character"<<endl;
                    cin>>ans3;
                }
                if(ans3=="N")
                {
                    system("CLS");
                    break;
                }
                system("CLS");
            }
        }
        else
            cout<<"invalid input"<<endl;
    }
    return 0;
}
