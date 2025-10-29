#include <iostream>

using namespace std;

int main()
{
    Student st1("Milene", 17);
    Student st2("Sareth", 18);

    cout << endl;
    st1.print();
    cout << endl;
    st2.print();

    Student *st3 = new Student("Jade", 18);
    cout << endl;

    Student *st4 = new Student("Gabriela", 18);
    cout << endl;

    //INtegrantes
    return 0;
}
