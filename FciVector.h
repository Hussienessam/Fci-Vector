#ifndef FCIVECTOR_H
#define FCIVECTOR_H

#include <iostream>

#include <string>

#include <cstdlib>

using namespace std;

template <class T>

class FciVector
{
    public:
        FciVector();
        T& operator[](int);
        T* begin1();
        void print_menu();
        void push_back1(T);
        void pop_back1();
        void insert1(T*,T);
        void erase1(T*);
        void clear1();
        T& front1();
        T& back1();
        T display_element(int);
        int display_size();
        int display_capacity();
        bool empty1();
        void display_all();

    private:
        int list_size;
        T* list1;
        int capacity;
};

template <class T>

/*initiate capacity with a supposed size and then increase it to double when needed, reason of "+1" is when we delete some
element we throw it in an empty index we can't actually delete in a regular way so if we will delete the last element it will
throw it in the index after it which is "capacity+1"*/

FciVector<T>::FciVector()
{
    list_size = 0;
    capacity=10;
    list1 = new T[capacity+1];
}

template <class T>

T& FciVector<T>::operator[](const int index)
{
    if(index>list_size||index<0)
    {
        cout<<"Subscript error"<<endl;
        exit(0);
    }
    else
        return list1[index];
}

template <class T>

T* FciVector<T>::begin1()
{
    return &list1[0];
}

template <class T>

void FciVector<T>::print_menu()
{
    cout<<"1. Add element"<<endl;
    cout<<"2. Remove last element"<<endl;
    cout<<"3. Insert element at certain position"<<endl;
    cout<<"4. Erase element from a certain position"<<endl;
    cout<<"5. Clear"<<endl;
    cout<<"6. Display first element"<<endl;
    cout<<"7. Display last element"<<endl;
    cout<<"8. Display element at certain position"<<endl;
    cout<<"9. Display vector size"<<endl;
    cout<<"10. Display vector capacity"<<endl;
    cout<<"11. Is empty?"<<endl;
    cout<<"12. Display all the elements of the vector"<<endl;
    cout<<"Enter your choice: ";
}

template <class T>

void FciVector<T>::push_back1(T element)
{
    list1[list_size]=element;
    list_size++;

    /* if we reached the supposed size a new temporary pointer will point to a new dynamic array with size equal to the number of
    elements in the vector which in this case will be equal to capacity then the elements will be assigned one by one to the
    indexes of the temp array then we will increase the capacity to double and make our main pointer point to a new dynamic array
    with size equal to the new capacity then the old elements will be assigned to the indexes of the new dynamic array and the
    temp array will be deleted */

    if(list_size==capacity)
    {
        T* temp=new T[capacity];
        for(int j=0;j<list_size;j++)
            temp[j]=list1[j];
        capacity*=2;
        delete list1;
        list1=NULL;
        list1=new T[capacity+1];
        for(int i=0;i<list_size;i++)
            list1[i]=temp[i];
        delete temp;
        temp=NULL;
    }
}

template <class T>

//just to ease testing for me//
void FciVector<T>::display_all()
{
    cout<<"Your Vector: "<<endl;
    for(int i=0;i<list_size;i++)
    {
        cout<<list1[i]<<endl;
    }
}

template <class T>

void FciVector<T>::pop_back1()
{
    list1[list_size-1]=list1[list_size];
    list_size --;
}

template <class T>

/* if we find the index lower than or equal to array size that mean will insert the new element between other elements, we will
do that by shifting the elements beginning by the last element and ending at the index we want to insert into, we will then
insert the element in the chosen index normally */

void FciVector<T>::insert1(T* pointer,T element)
{
    int index;
    index=pointer-begin1();
    if(index<=list_size)
    {
        for(int i=list_size+1;i>index-1;i--)
            list1[i]=list1[i-1];
    }
    list1[index-1]=element;
    list_size ++;
}

template <class T>

void FciVector<T>::erase1(T* pointer)
{
    int index=pointer-begin1();
    for(int i=index-1;i<list_size;i++)
        list1[index]=list1[index+1];
    list_size--;
}

template <class T>

void FciVector<T>::clear1()
{
    delete list1;
    list1=NULL;
    list_size=0;
}

template <class T>

T& FciVector<T>::front1()
{
    return list1[0];
}

template <class T>

T& FciVector<T>::back1()
{
    return list1[list_size-1];
}

template <class T>

T FciVector<T>::display_element(int index)
{
    return list1[index-1];
}

template <class T>

int FciVector<T>::display_size()
{
    return list_size;
}

template <class T>

int FciVector<T>::display_capacity()
{
    return capacity;
}

template <class T>

bool FciVector<T>::empty1()
{
    if(list_size==0)
        return true;
    else
        return false;
}

class course
{
    public:

        //initiate course members to avoid future garbage problems//
        course()
        {
            course_name="";
            course_code="";
            course_grade=' ';
            course_point=0;
            course_year=0;
            course_semester=0;
        };

        friend istream &operator>>(istream &input,course& c)
        {
            cout<<"Course Name: ";
            input.clear();
            input.ignore(10000,'\n');
            getline(input,c.course_name);
            cout<<"Course Code: ";
            getline(input,c.course_code);
            cout<<"Course Grade: ";
            input>>c.course_grade;
            cout<<"Course Point: ";
            input>>c.course_point;
            cout<<"Course Year: ";
            input>>c.course_year;
            cout<<"Course Semester: ";
            input>>c.course_semester;
            return input;
        }

        friend ostream &operator<<(ostream &output,course &c)
        {
            output<<"Course Name: "<<c.course_name<<endl;
            output<<"Course Code: "<<c.course_code<<endl;
            output<<"Course Grade: "<<c.course_grade<<endl;
            output<<"Course Point: "<<c.course_point<<endl;
            output<<"Course Year: "<<c.course_year<<endl;
            output<<"Course Semester: "<<c.course_semester<<endl;
            return output;
        }

    private:
        string course_name;
        string course_code;
        char course_grade;
        float course_point;
        int course_year;
        int course_semester;
};

class student
{
    public:

        //initiate students members to avoid future garbage problems//
        student()
        {
            student_name="";
            student_id=0;
            student_department="";
        };

        friend istream &operator>>(istream &input,student& s)
        {
            cout<<"Student Name: ";
            input.clear();
            input.ignore(10000,'\n');
            getline(input,s.student_name);
            cout<<"Student ID: ";
            input>>s.student_id;
            cout<<"Student Department: ";
            input.clear();
            input.ignore(10000,'\n');
            getline(input,s.student_department);
            cout<<"Number of Courses: ";
            input>>s.no_of_courses;
            for(int i=0;i<s.no_of_courses;i++)
            {
                course element2;
                cout<<"Enter "<<i+1<<"# course info"<<endl;
                cin>>element2;
                s.courses.push_back1(element2);
            }
            return input;
        }

        friend ostream &operator<<(ostream &output,student& s)
        {
            int y=1;
            output<<"Student Name: "<<s.student_name<<endl;
            output<<"Student ID: "<<s.student_id<<endl;
            output<<"Student Department: "<<s.student_department<<endl;
            output<<"Number of Courses: "<<s.no_of_courses<<endl;
            for(int i=0;i<s.no_of_courses;i++)
            {
                output<<y<<"# course info"<<endl;
                cout<<s.courses[i];
                y++;
            }
            return output;
        }

    private:
        string student_name;
        int student_id;
        string student_department;
        int no_of_courses;
        FciVector<course> courses;
};

#endif // FCIVECTOR_H
