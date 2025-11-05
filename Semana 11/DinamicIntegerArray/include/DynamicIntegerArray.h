#ifndef DYNAMICINTEGERARRAY_H
#define DYNAMICINTEGERARRAY_H


class DynamicIntegerArray
{
    public:
        DynamicIntegerArray();
        DynamicIntegerArray(int arr[], int size);

        int getSize() const;
        void print() const;

        void pushBack(int val);
        /**
        1. Reservar memoria para un arreglo tmp de tamano size +1
        2. Copiar los elementos de data a temp
        3. Copiar val al final de temp.
        4. Actualizar size.
        5. Liberar memoria apuntada por data.
        6. Que data ahora paunte a temp


        **/

        ~DynamicIntegerArray();


    private:
        int *data;
        int size;
};

#endif // DYNAMICINTEGERARRAY_H
