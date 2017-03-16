#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#define Pi 3.14

/*-------------------------------------------------------------------------*/
/*                    Матричные операции                                   */
/*-------------------------------------------------------------------------*/

/**
 * Описание назначения
 * @author 
 * @param 
 * @return
 */
void transp_m(double **a,double **d,int n) {
    // Напишите реализацию процедуры здесь
}

/**
 * Square matrices multiplication (row by column) 
 * @author rkuchumov <kuchumovri@gmail.com>
 * @param a first matrix operand
 * @param b second matrix operand
 * @param d result matrix
 * @param n matrix size
 */
void umn_m(double **a, double **b, double **d, int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			d[i][j] = 0;

			for (int k = 0; k < n; ++k) {
				d[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

/**
 * Описание назначения
 * @author 
 * @param 
 * @return
 */
void umn_v(double **z,double *c,double *t,int n) {
    // Напишите реализацию процедуры здесь
}

/**
 * Описание назначения
 * @author 
 * @param 
 * @return
 */
void razn_m(double **a, double **b,double **d,int n) {
    // Напишите реализацию процедуры здесь
}

/**
 * Описание назначения
 * @author 
 * @param 
 * @return
 */
void E(double **e,int n) {
    // Напишите реализацию процедуры здесь
}

/**
 * Описание назначения
 * @author 
 * @param 
 * @return
 */
void Tn(double **a,double **k,int n) {
    // Напишите реализацию процедуры здесь
}

/**
 * Комплексное преобразование массивов
 * @author 
 * @param 
 * @return
 */
double komp_preob(double **a,int n) {
    int i,j,k;
    double P1_P2, *P2, P3, Y;
    // Напишите реализацию функции здесь
	return Y;
}

/**
 * Печать матрицы
 * @author 
 * @param 
 * @return
 */
void printMatrix(double **a, int n) {
    // Напишите реализацию функции здесь
}

/**
 * Печать вектора
 * @author 
 * @param 
 * @return
 */
void printVector(double *x, int n) {
    // Напишите реализацию функции здесь
}

/**
 * Главная программа
 * @author 
 * @param 
 * @return
 */
void main() {

}
