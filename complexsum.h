#ifndef COMPLEXSUM_H_INCLUDED
#define COMPLEXSUM_H_INCLUDED

class complexsum
{
    friend complexsum operator+(int ,complexsum &);
    friend complexsum operator+(complexsum &, int);

    public:
        complexsum();
        complexsum(int, int);
        complexsum operator+(complexsum &);
        void print();

    private:
        int Real, Imaginary;
};

#endif // COMPLEXSUM_H_INCLUDED
