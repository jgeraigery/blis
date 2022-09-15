/*

   BLIS
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin
   Copyright (C) 2020 - 2022, Advanced Micro Devices, Inc. All rights reserved.
   
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name(s) of the copyright holder(s) nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifdef BLIS_ENABLE_BLAS

BLIS_EXPORT_BLAS int PASTEF77(c,gbmv)(const bla_character *trans, const bla_integer *m, const bla_integer *n, const bla_integer *kl, const bla_integer *ku, const bla_scomplex *alpha, const bla_scomplex *a, const bla_integer *lda, const bla_scomplex *x, const bla_integer *incx, const bla_scomplex *beta, bla_scomplex *y, const bla_integer *incy);
BLIS_EXPORT_BLAS int PASTEF77(d,gbmv)(const bla_character *trans, const bla_integer *m, const bla_integer *n, const bla_integer *kl, const bla_integer *ku, const bla_double *alpha, const bla_double *a, const bla_integer *lda, const bla_double *x, const bla_integer *incx, const bla_double *beta, bla_double *y, const bla_integer *incy);
BLIS_EXPORT_BLAS int PASTEF77(s,gbmv)(const bla_character *trans, const bla_integer *m, const bla_integer *n, const bla_integer *kl, const bla_integer *ku, const bla_real *alpha, const bla_real *a, const bla_integer *lda, const bla_real *x, const bla_integer * incx, const bla_real *beta, bla_real *y, const bla_integer *incy);
BLIS_EXPORT_BLAS int PASTEF77(z,gbmv)(const bla_character *trans, const bla_integer *m, const bla_integer *n, const bla_integer *kl, const bla_integer *ku, const bla_dcomplex *alpha, const bla_dcomplex *a, const bla_integer *lda, const bla_dcomplex *x, const bla_integer *incx, const bla_dcomplex *beta, bla_dcomplex * y, const bla_integer *incy);
BLIS_EXPORT_BLAS int PASTEF77S(c,gbmv)(const bla_character *trans, const bla_integer *m, const bla_integer *n, const bla_integer *kl, const bla_integer *ku, const bla_scomplex *alpha, const bla_scomplex *a, const bla_integer *lda, const bla_scomplex *x, const bla_integer *incx, const bla_scomplex *beta, bla_scomplex *y, const bla_integer *incy);
BLIS_EXPORT_BLAS int PASTEF77S(d,gbmv)(const bla_character *trans, const bla_integer *m, const bla_integer *n, const bla_integer *kl, const bla_integer *ku, const bla_double *alpha, const bla_double *a, const bla_integer *lda, const bla_double *x, const bla_integer *incx, const bla_double *beta, bla_double *y, const bla_integer *incy);
BLIS_EXPORT_BLAS int PASTEF77S(s,gbmv)(const bla_character *trans, const bla_integer *m, const bla_integer *n, const bla_integer *kl, const bla_integer *ku, const bla_real *alpha, const bla_real *a, const bla_integer *lda, const bla_real *x, const bla_integer * incx, const bla_real *beta, bla_real *y, const bla_integer *incy);
BLIS_EXPORT_BLAS int PASTEF77S(z,gbmv)(const bla_character *trans, const bla_integer *m, const bla_integer *n, const bla_integer *kl, const bla_integer *ku, const bla_dcomplex *alpha, const bla_dcomplex *a, const bla_integer *lda, const bla_dcomplex *x, const bla_integer *incx, const bla_dcomplex *beta, bla_dcomplex * y, const bla_integer *incy);

#endif
