#ifndef __PRIMAL_DUAL_H__
#define __PRIMAL_DUAL_H__

#include <iostream>
#include <math.h>
#include "read_bk.h"

template <class T>
void compute_dt(T *tau, T *sigma, T *w_u, T alpha, T phi, vert *mVert, int num_vertex, int num_edge);

template <class T>
void get_max (T *div_y, T *f, T *max_vec, T &max_val, int num_vertex);

template <class T>
void updateX (T *w, vert *mVert, T *x, T *tau, T *div_y, T *, T *f, T *x_diff, int num_vertex);

template <class T>
void updateY (T *w, T *x, edge *mEdge, T *y, T *sigma, T *x_diff, T *grad_x_diff, int num_edge);

template <class T>
void compute_gap(T *w, edge *mEdge, vert *mVert, T *x, T *y, T *f, T &gap, T &x_norm, T &xf, int num_vertex, int num_edge);

#endif 			  
