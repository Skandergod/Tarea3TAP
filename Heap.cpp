#include <iostream>
#include <vector>


template <class Elem>
class heap: std::vector<Elem>
{
    public:
        heap();
        heap(const heap<Elem> &h);
        heap(const std::vector<Elem> &a);
        ~heap();
        void insert(const Elem &e);
        void remove();
        Elem &head(); // retorna referencia
        Elem head() const; // retorna copia
        static void sort(std::vector< Elem > &A); // ordena A con “<“
        void heapify(std::vector< Elem > &A);
        void sink(std::vector< Elem > &A, int k, int n); // hundir
        bool operator< (const Elem& e) const
        {
            return this->at(0) < e;
        }

    private:

        void swim(int k); // flotar
};

int main()
{

}
