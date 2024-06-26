#ifndef LINALG_H
#define LINALG_H


#include <iostream>
#include <assert.h>
#define MAX_X 4
#define MAX_Y 4


class Matrix {
    public:
        int x;
        int y;
        float vals[MAX_Y][MAX_X];

        Matrix(int h, int w);

        void print();
        void fill(float num);
        void normalize();
        void scale(float n);
        void multiply(Matrix& n, Matrix& dest);
        void cross_product3(Matrix& vector1, Matrix& dest);
        void transpose(Matrix& dest);
        void Vector3_toHG(Matrix& dest);
        void HG_toVector3(Matrix& dest);

};

// void Vector3(float x, float y, float z, Matrix& dest);
Matrix Vector3(float x, float y, float z);
Matrix RotX(float d_theta);
Matrix RotY(float d_theta);
Matrix RotZ(float d_theta);
Matrix Trans(float dx, float dy, float dz);

#endif