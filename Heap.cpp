#include <iostream>
#include <vector>


template <class Elem>
class heap:std::vector<Elem>
{
    public:
        int n;
        heap();
        heap(const heap<Elem> &h);
        heap(const std::vector<Elem> &a);
        ~heap();
        void insert(const Elem &e)
        {
            this->insert(e);
            flotar(this.n);
            this.n++;
        };
        void remove()
        {
            swap( this[1], this[ this.n ]); this.n--;
            sink( this, 1, this.n);
        };
        Elem &head(); // retorna referencia
        Elem head() const; // retorna copia
        static void sort(std::vector< Elem > &A); // ordena A con “<“
        void heapify()
        {
            for (int i = this.n/2; i>0; i--)
                hundir( this, i, this.n);
        };
        void sink(int k)
        {
            while (2*k <= this.n) 
            {
                int j = 2*k;
                // bajo por el más grande de los hijos
                // si es un maxheap
                if (j < this.n && this[j]<this[j+1]) j++;
                if (this[k] >= this[j]) break;
                swap( this[k], this[j]);
                k = j;
            }
        }; // hundir
        void flotar(int k)
        {

            while (k > 1 && this[k/2] < this[k]) 
            {
                swap( this[k/2], this[k] );
                k = k/2;
            }

        };
        void heapSort() 
        {
            heapify( this, this.n);
            for(int i = this.n; i > 1; i--) 
            {
                swap(this[1], this[i]);
                hundir(this, 1,--this.n);
            }
        }
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
