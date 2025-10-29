#ifndef STUDENT_H
#define STUDENT_H


class Student
{
    public:
        Student();
        void print() const;
        ~Student();

    private:
        string nombre;
        int edad;
};

#endif // STUDENT_H
