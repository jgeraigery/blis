/*

   BLIS
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2022-2023, Advanced Micro Devices, Inc. All rights reserved.

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

// -- level-1v --

// amaxv (intrinsics)
AMAXV_KER_PROT( float,    s, amaxv_zen_int_avx512 )
AMAXV_KER_PROT( double,   d, amaxv_zen_int_avx512 )

GEMMTRSM_UKR_PROT( double,   d, gemmtrsm_l_zen_asm_16x14)
GEMMTRSM_UKR_PROT( double,   d, gemmtrsm_u_zen_asm_16x14)
GEMMTRSM_UKR_PROT( double,   d, gemmtrsm_l_zen4_asm_8x24)
GEMMTRSM_UKR_PROT( double,   d, gemmtrsm_u_zen4_asm_8x24)

//packing kernels
PACKM_KER_PROT( double,   d, packm_zen4_asm_16xk )
PACKM_KER_PROT( double,   d, packm_zen4_asm_24xk )
PACKM_KER_PROT( double,   d, packm_zen4_asm_32xk )
PACKM_KER_PROT( double,   d, packm_32xk_zen4_ref )

// native dgemm kernel
GEMM_UKR_PROT( double,   d, gemm_zen4_asm_32x6 )
GEMM_UKR_PROT( double,   d, gemm_zen4_asm_8x24 )

//sgemm rv sup
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_6x64m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_6x48m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_6x32m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_6x16m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_4x64m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_4x48m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_4x32m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_4x16m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_2x64m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_2x48m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_2x32m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_2x16m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_1x64m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_1x48m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_1x32m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_1x16m_avx512 )

GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_6x64n_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_5x64n_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_4x64n_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_3x64n_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_2x64n_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_1x64n_avx512 )

GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_5x48_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_5x32_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_5x16_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_3x48_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_3x32_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rv_zen_asm_3x16_avx512 )

// sgemm rd sup
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_6x64m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_6x48m_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_6x32m_avx512 )

GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_3x64n_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_2x64n_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_6x64n_avx512 )

GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_5x64_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_4x64_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_3x64_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_2x64_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_1x64_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_5x48_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_4x48_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_3x48_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_2x48_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_1x48_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_5x32_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_4x32_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_3x32_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_2x32_avx512 )
GEMMSUP_KER_PROT( float,   s, gemmsup_rd_zen_asm_1x32_avx512 )

TRSMSUP_PROT(trsm_small_AVX512)
TRSMSUP_KER_PROT( d, trsm_small_AutXB_AlXB_AVX512 )
TRSMSUP_KER_PROT( d, trsm_small_XAltB_XAuB_AVX512 )
TRSMSUP_KER_PROT( d, trsm_small_XAutB_XAlB_AVX512 )
TRSMSUP_KER_PROT( d, trsm_small_AltXB_AuXB_AVX512 )
