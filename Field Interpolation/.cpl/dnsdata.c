/**/
#define _GNU_SOURCE

#define _FILE_OFFSET_BITS 64

#define _LARGE_FILES

#define printERR fprintf(stderr,"\r%s: PROGRAM HALTED  \n",errormessage);fflush(stderr)


#include <unistd.h>

#include <stdlib.h>
/*** typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__))); ununderstood ***/
/*** typedef __float128 _Float128; ununderstood ***/
/*** extern _Float128 strtof128 (const char *restrict __nptr,
			 char **restrict __endptr) ununderstood ***/
/*** extern _Float128 strtof128_l (const char *restrict __nptr,
			 char **restrict __endptr,
			 locale_t __loc) ununderstood ***/

#include <stdio.h>

#include <fcntl.h>

#include <math.h>
/*** enum ununderstood ***/
/*** {
 FP_INT_UPWARD =
0,
 FP_INT_DOWNWARD =
1,
 FP_INT_TOWARDZERO =
2,
 FP_INT_TONEARESTFROMZERO =
3,
 FP_INT_TONEAREST =
4,
 }; ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !0 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128 acosf128 (_Float128 __x) ;  extern _Float128 __acosf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 asinf128 (_Float128 __x) ;  extern _Float128 __asinf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 atanf128 (_Float128 __x) ;  extern _Float128 __atanf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 atan2f128 (_Float128 __y, _Float128 __x) ;  extern _Float128 __atan2f128 (_Float128 __y, _Float128 __x) ; ununderstood ***/
/*** extern _Float128 cosf128 (_Float128 __x) ;  extern _Float128 __cosf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 sinf128 (_Float128 __x) ;  extern _Float128 __sinf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 tanf128 (_Float128 __x) ;  extern _Float128 __tanf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 coshf128 (_Float128 __x) ;  extern _Float128 __coshf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 sinhf128 (_Float128 __x) ;  extern _Float128 __sinhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 tanhf128 (_Float128 __x) ;  extern _Float128 __tanhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 acoshf128 (_Float128 __x) ;  extern _Float128 __acoshf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 asinhf128 (_Float128 __x) ;  extern _Float128 __asinhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 atanhf128 (_Float128 __x) ;  extern _Float128 __atanhf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 expf128 (_Float128 __x) ;  extern _Float128 __expf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 frexpf128 (_Float128 __x, int *__exponent) ;  extern _Float128 __frexpf128 (_Float128 __x, int *__exponent) ; ununderstood ***/
/*** extern _Float128 ldexpf128 (_Float128 __x, int __exponent) ;  extern _Float128 __ldexpf128 (_Float128 __x, int __exponent) ; ununderstood ***/
/*** extern _Float128 logf128 (_Float128 __x) ;  extern _Float128 __logf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 log10f128 (_Float128 __x) ;  extern _Float128 __log10f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 modff128 (_Float128 __x, _Float128 *__iptr) ;  extern _Float128 __modff128 (_Float128 __x, _Float128 *__iptr)  ; ununderstood ***/
/*** extern _Float128 exp10f128 (_Float128 __x) ;  extern _Float128 __exp10f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 expm1f128 (_Float128 __x) ;  extern _Float128 __expm1f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 log1pf128 (_Float128 __x) ;  extern _Float128 __log1pf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 logbf128 (_Float128 __x) ;  extern _Float128 __logbf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 exp2f128 (_Float128 __x) ;  extern _Float128 __exp2f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 log2f128 (_Float128 __x) ;  extern _Float128 __log2f128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 powf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __powf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 sqrtf128 (_Float128 __x) ;  extern _Float128 __sqrtf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 hypotf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __hypotf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 cbrtf128 (_Float128 __x) ;  extern _Float128 __cbrtf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 ceilf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __ceilf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fabsf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __fabsf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 floorf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __floorf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fmodf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __fmodf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128 copysignf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));  extern _Float128 __copysignf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 nanf128 (const char *__tagb) ;  extern _Float128 __nanf128 (const char *__tagb) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** extern _Float128 j0f128 (_Float128) ;  extern _Float128 __j0f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 j1f128 (_Float128) ;  extern _Float128 __j1f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 jnf128 (int, _Float128) ;  extern _Float128 __jnf128 (int, _Float128) ; ununderstood ***/
/*** extern _Float128 y0f128 (_Float128) ;  extern _Float128 __y0f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 y1f128 (_Float128) ;  extern _Float128 __y1f128 (_Float128) ; ununderstood ***/
/*** extern _Float128 ynf128 (int, _Float128) ;  extern _Float128 __ynf128 (int, _Float128) ; ununderstood ***/
/*** extern _Float128 erff128 (_Float128) ;  extern _Float128 __erff128 (_Float128) ; ununderstood ***/
/*** extern _Float128 erfcf128 (_Float128) ;  extern _Float128 __erfcf128 (_Float128) ; ununderstood ***/
/*** extern _Float128 lgammaf128 (_Float128) ;  extern _Float128 __lgammaf128 (_Float128) ; ununderstood ***/
/*** extern _Float128 tgammaf128 (_Float128) ;  extern _Float128 __tgammaf128 (_Float128) ; ununderstood ***/
/*** extern _Float128 lgammaf128_r (_Float128, int *__signgamp) ;  extern _Float128 __lgammaf128_r (_Float128, int *__signgamp) ; ununderstood ***/
/*** extern _Float128 rintf128 (_Float128 __x) ;  extern _Float128 __rintf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 nextafterf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __nextafterf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 nextdownf128 (_Float128 __x) ;  extern _Float128 __nextdownf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 nextupf128 (_Float128 __x) ;  extern _Float128 __nextupf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 remainderf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __remainderf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 scalbnf128 (_Float128 __x, int __n) ;  extern _Float128 __scalbnf128 (_Float128 __x, int __n) ; ununderstood ***/
/*** extern _Float128 scalblnf128 (_Float128 __x, long int __n) ;  extern _Float128 __scalblnf128 (_Float128 __x, long int __n) ; ununderstood ***/
/*** extern _Float128 nearbyintf128 (_Float128 __x) ;  extern _Float128 __nearbyintf128 (_Float128 __x) ; ununderstood ***/
/*** extern _Float128 roundf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __roundf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 truncf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __truncf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 remquof128 (_Float128 __x, _Float128 __y, int *__quo) ;  extern _Float128 __remquof128 (_Float128 __x, _Float128 __y, int *__quo) ; ununderstood ***/
/*** extern _Float128 fdimf128 (_Float128 __x, _Float128 __y) ;  extern _Float128 __fdimf128 (_Float128 __x, _Float128 __y) ; ununderstood ***/
/*** extern _Float128 fmaxf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));  extern _Float128 __fmaxf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fminf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));  extern _Float128 __fminf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) ;  extern _Float128 __fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) ; ununderstood ***/
/*** extern _Float128 roundevenf128 (_Float128 __x)  __attribute__ ((__const__));  extern _Float128 __roundevenf128 (_Float128 __x)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fmaxmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));  extern _Float128 __fmaxmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 fminmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__));  extern _Float128 __fminmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)); ununderstood ***/
/*** extern _Float128 getpayloadf128 (const _Float128 *__x) ;  extern _Float128 __getpayloadf128 (const _Float128 *__x) ; ununderstood ***/
/*** extern _Float128 scalbf128 (_Float128 __x, _Float128 __n) ;  extern _Float128 __scalbf128 (_Float128 __x, _Float128 __n) ; ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/
/*** && !1 ununderstood ***/

#include <limits.h>

#include <float.h>

#include <string.h>


#include <sys/time.h>
/*** typedef struct timezone *restrict __timezone_ptr_t; ununderstood ***/

#include <sys/types.h>

#include <setjmp.h>

#include <errno.h>

#include <signal.h>
#if defined nofenv
  #define feenableexcept(fpe)
  #define feclearexcept(fpe)
#else
  #include <fenv.h>
  #define fpe FE_INVALID | FE_OVERFLOW | FE_DIVBYZERO
#endif

extern char errortemp_[(80+1)];
struct arrptr{int l,h; ssize_t i; char *a;};struct dynptr{void* p; int t;};extern char INTERRUPT;extern void (*traphandler)(const char *);struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};extern struct freefunc *freestack;
#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}

#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name

#define mmovefrom(var,buf,type) *(type *)(buf)=*var

#define mmoveto(var,buf,type) *var=*(type *)(buf)

#define mainstart void default_traphandler(const char *errormessage){   freemem(NULL);   if(errormessage[0]){     printERR;     exit(EXIT_FAILURE);   }else exit(EXIT_SUCCESS); } int main(int argc, char **argv){ struct freefunc* es; {void (*sig)(int); if((sig=signal(SIGSEGV,trapsignal))!=SIG_DFL)signal(SIGSEGV,sig); if((sig=signal(SIGFPE,trapsignal))!=SIG_DFL)signal(SIGFPE,sig); if((sig=signal(SIGILL,trapsignal))!=SIG_DFL)signal(SIGILL,sig); if((sig=signal(SIGINT,trapsignal))!=SIG_DFL)signal(SIGINT,sig); else {traphandler=default_traphandler;       freestack=NULL;       feenableexcept(fpe);      }; } es=freestack;
extern void traprestore(void *ptr);extern void condfree(void *ptr);extern int dynptrerr(int type);extern void *errmalloc();extern void ioerr(FILE *fil);extern void errfclose(void *voidf);extern void errfopen(FILE **f, const char *name, int mode);extern int scanrec(FILE *f, const char *format, void *var) ;extern int myfgets(char *name, char *var, char *varend, FILE *f) ;extern int mygetline(char *name, char **var, FILE *f) ;extern void trapsignal(int signum);

/*gamma=0*/
/*!USE rtchecks*/
struct COMPLEX_{double REAL_;double IMAG_;};void complex_1INV(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_2EXP(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_3SINH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_4COSH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_5TANH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_6COTH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_7LOG(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_8POWER(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG,double y_REAL,double y_IMAG);
void complex_9SQRT(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_10ACOS(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);
void complex_11CRAND(struct COMPLEX_ *RESULT_);
void complex_12CGAUSS(struct COMPLEX_ *RESULT_);

void fft_1IFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_2FFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_3RFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_4HFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_5IFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_6FFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_7RFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_8HFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);

int fft_9FFTfit(int N_);
void fft_fft_10ReverseInc(int *K_,int N_);
extern int fft_fft_LASTN;
extern struct arrptr fft_fft_CEXP;
extern struct arrptr fft_fft_tempVEC;
extern struct arrptr fft_fft_RI;
extern char *fft_fft_RI2;
extern char *fft_fft_RI3;
void fft_fft_11SETUP(int N_);
extern double fft_fft_12C3;
/*C3=fft_fft_12C3*/
void fft_fft_13BTFLY(int N_,int M_);
void fft_fft_14BTFLYI(int N_);
void fft_1IFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_2FFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_3RFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_4HFT(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_5IFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_6FFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_7RFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
void fft_8HFTU(const int Rin_l,const int Rin_h,const ssize_t Rin_i,char *Rin__,const int Rout_l,const int Rout_h,const ssize_t Rout_i,char *Rout__);
double *fft_15REALIFIED(const int x_l,const int x_h,const ssize_t x_i,char *x__,int y_);

double DotProduct(const int a_l,const int a_h,const ssize_t a_i,char *a__,const int b_l,const int b_h,const ssize_t b_i,char *b__);
void rbmat_1LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);
void RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,char *B___);
struct REALINVMAT_{int lo_;int hi_;};void rbmat_2MatEqu(const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,char *c___,double a_);
void rbmat_3MatEqu(FILE *c_f,const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,off_t c___,double a_);
void rbmat_4LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);
void rbmat_5RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,FILE *B_f,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,off_t B___);
void rbmat_6LUdecomp(const int AA_l,const int AA_h,const ssize_t AA_i,const int AA__l,const int AA__h,const ssize_t AA__i,char *AA___);
void rbmat_7LUdecomp(FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);
void rbmat_8LeftLDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_9LeftUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_10LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_11RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___);
void rbmat_12RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);
extern double Lanczos_norm_;
void rbmat_13Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,void (*A_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),void (*B_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),const int y1_l,const int y1_h,const ssize_t y1_i,char *y1__,double eps_);
void rbmat_14PLU(const int m_l,const int m_h,const ssize_t m_i,const int m__l,const int m__h,const ssize_t m__i,char *m___,struct REALINVMAT_ *RESULT_);
void rbmat_15LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,struct REALINVMAT_ *m_,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmat_16RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,struct REALINVMAT_ *m_);
void rbmat_17INV(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int RESULT_l,const int RESULT_h,const ssize_t RESULT_i,const int RESULT__l,const int RESULT__h,const ssize_t RESULT__i,char *RESULT___);
double rbmat_18DET(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___);
void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);

struct rbmat_Lanczos_R_s20 {int l,h; ssize_t i;struct arrptr a;};
extern struct rbmat_Lanczos_R_s20 rbmat_Lanczos_R_Lanczos_mat;
void rbmat_Lanczos_R_21A(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);
void rbmat_Lanczos_R_22B(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);
void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);


#include <sys/mman.h>

#include <sys/wait.h>

#include <sys/shm.h>


#define SHMPAGE 4194304
extern size_t shmavail;extern char *shmaddr;extern void *shmalloc(size_t size);extern sigset_t oldmask;extern void donothing(int signum);extern void setup_signal_USR1();


#include <sys/socket.h>

#include <netinet/in.h>

#include <netinet/tcp.h>
/*** # error "Adjust your <bits/endian.h> defines"
uint16_t window ununderstood ***/
/*** enum ununderstood ***/
/*** {
 TCP_NO_QUEUE,
 TCP_RECV_QUEUE,
 TCP_SEND_QUEUE,
 TCP_QUEUES_NR,
}; ununderstood ***/

#include <netdb.h>
extern int tcpserver(uint16_t port)
;extern int tcpclient(const char *hostname, uint16_t port) 
;extern int udpsocket(uint16_t myport, const char *hostname, uint16_t hostport) 
;

void barrier_free(void * ptr);
extern struct freefunc barrier_f;extern volatile int *barrier_;

/**/
/*nsmp=1*/


/*! Parallel - initialization*/
int iproc_;
int nproc_;

/*bufsize=800*/
  /*baseport=(IPPORT_USERRESERVED+111)*/

struct freefunc prev_f;FILE *prev_;
struct freefunc next_f;FILE *next_;

    


void rbmatmod_1LUdecompStep(const int A_l,const int A_h,const ssize_t A_i,char *A__);
void rbmatmod_2LeftLUDivStep1(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__,const int t_l,const int t_h,const ssize_t t_i,char *t__);
void rbmatmod_3LeftLUDivStep2(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__);
void rbmatmod_4RightLUDivStep1(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,const int A_l,const int A_h,const ssize_t A_i,char *A__);
void rbmatmod_5RightLUDivStep2(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,char *A__);
int ny_;
int nx_;
int nz_;
int new_ny_;
int new_nx_;
int new_nz_;

double alfa0_;
double new_alfa0_;
double beta0_;
double new_beta0_;
double a_;
double ymin_;
double ymax_;
double t_max_;
double dt_field_;
double dt_save_;

double u_conv_;
double u0_;
double un_;
double w_conv_;
double w0_;
double wn_;
double t0_;
double tn_;

double ni_;
double new_ni_;
double pr_;
double meanpx_;
double meanpz_;
double meanflowx_;
double meanflowz_;
double px_;
double corrpx_;
double pz_;
double corrpz_;
double flowx_;
double flowz_;
double deltat_;
double cflmax_;
double time_;

struct freefunc restart_file_f;char *restart_file_;



void dnsdata_1read_initial_data(){{struct freefunc* es=freestack;
 struct freefunc in_data_f;FILE *in_data_;

 in_data_=NULL;atblockexit(in_data_f,errfclose,&in_data_);errfopen(&in_data_,"dns.in",O_RDWR|O_CREAT);   if(!(scanrec( in_data_ ," ny = %d",&ny_)>0&&scanrec( in_data_ ," nx = %d",&nx_)>0&&scanrec( in_data_ ," nz = %d",&nz_)>0&&scanrec( in_data_ ," alfa0 = %lg",&alfa0_)>0&&scanrec( in_data_ ," beta0 = %lg",&beta0_)>0&&scanrec( in_data_ ," ymin = %lg",&ymin_)>0&&scanrec( in_data_ ," ymax = %lg",&ymax_)>0&&scanrec( in_data_ ," a = %lg",&a_)>0&&scanrec( in_data_ ," ni = %lg",&ni_)>0&&scanrec( in_data_ ," pr = %lg",&pr_)>0))ioerr( in_data_ );  ni_=1./ni_;  pr_=1./pr_;
    if(!(scanrec( in_data_ ," new_ny = %d",&new_ny_)>0 &&scanrec( in_data_ ," new_nx = %d",&new_nx_)>0 &&scanrec( in_data_ ," new_nz = %d",&new_nz_)>0&&scanrec( in_data_ ," new_alfa0 = %lg",&new_alfa0_)>0&&scanrec( in_data_ ," new_beta0 = %lg",&new_beta0_)>0&&scanrec( in_data_ ," new_ni = %lg",&new_ni_)>0))ioerr( in_data_ );  new_ni_=1./new_ni_;
    fprintf(stdout,"""Original field dimensions are:" "");fprintf(stdout,"""nx=""");fprintf(stdout,"%d",nx_);fprintf(stdout,"\t" );fprintf(stdout,"""nz=""");fprintf(stdout,"%d",nz_);fprintf(stdout,"\t" );fprintf(stdout,"""ny=""");fprintf(stdout,"%d",ny_);putc('\n',stdout);
    fprintf(stdout,"""Interpolated field dimensions are:" "");fprintf(stdout,"""new_nx=""");fprintf(stdout,"%d",new_nx_);fprintf(stdout,"\t" );fprintf(stdout,"""new_nz=""");fprintf(stdout,"%d",new_nz_);fprintf(stdout,"\t" );fprintf(stdout,"""new_ny=""");fprintf(stdout,"%d",new_ny_);putc('\n',stdout);
 if( !   (mygetline(" restart_file =",&restart_file_ , in_data_ ))){ if(restart_file_)free(restart_file_);restart_file_=strndup("",(int)(strlen("")-1)+1);};
 errfclose(&in_data_);
freemem(es);}}

int reread_;

void dnsdata_2kill_received(int signum_){{struct freefunc* es=freestack;
 reread_=1;
}}

int dnsdata_4nyl;
/*nyl=dnsdata_4nyl*/
  int dnsdata_5nyh;
/*nyh=dnsdata_5nyh*/

int dnsdata_6M;
int dnsdata_7l;
int dnsdata_8m;
int dnsdata_9h;
ssize_t dnsdata_10i;
ssize_t dnsdata_11st;
struct freefunc y_f;char *y_;



struct VELOCITY_{struct COMPLEX_ u_;struct COMPLEX_ v_;struct COMPLEX_ w_;};
struct MOMFLUX_{struct COMPLEX_ uu_;struct COMPLEX_ uv_;struct COMPLEX_ vv_;struct COMPLEX_ vw_;struct COMPLEX_ ww_;struct COMPLEX_ uw_;};
/*!INLINE FUNCTION OS(INTEGER iy,i)=0.5*[d4(i)-2*k2*d2(i)+k2*k2*d0(i)] !Vittori*/
/*!INLINE FUNCTION SQ(INTEGER iy,i)=0.5*[d2(i)-k2*d0(i)]               !Vittori*/



int nxd_;
  int nzd_;
  int dnsdata_12h;
int dnsdata_13h;
ssize_t dnsdata_14i;
ssize_t dnsdata_15i;
void Vd_free(void * ptr){munmap((char*)ptr,dnsdata_15i);}struct freefunc Vd_f;char *Vd_;

int dnsdata_16h;
int dnsdata_17h;
ssize_t dnsdata_18i;
ssize_t dnsdata_19i;
void VVd_free(void * ptr){munmap((char*)ptr,dnsdata_19i);}struct freefunc VVd_f;char *VVd_;

/*maxtimelevels=1*/

struct rhstype_{struct COMPLEX_ eta_;struct COMPLEX_ D2v_;};
struct VETA_{struct COMPLEX_ v_;struct COMPLEX_ eta_;};
int dnsdata_20h;
int dnsdata_21l;
int dnsdata_22h;
ssize_t dnsdata_23i;
ssize_t dnsdata_24i;
ssize_t dnsdata_25i;
ssize_t dnsdata_26st;
ssize_t dnsdata_27st;
void V_free(void * ptr){munmap((char*)ptr+dnsdata_27st,dnsdata_25i);}struct freefunc V_f;char *V_;

int dnsdata_28h;
int dnsdata_29l;
int dnsdata_30h;
int dnsdata_31h;
ssize_t dnsdata_32i;
ssize_t dnsdata_33i;
ssize_t dnsdata_34i;
ssize_t dnsdata_35st;
ssize_t dnsdata_36st;
struct freefunc new_V_f;char *new_V_;

int dnsdata_37h;
int dnsdata_38l;
int dnsdata_39h;
int dnsdata_40M;
int dnsdata_41l;
int dnsdata_42m;
int dnsdata_43h;
ssize_t dnsdata_44i;
ssize_t dnsdata_45i;
ssize_t dnsdata_46i;
ssize_t dnsdata_47st;
ssize_t dnsdata_48st;
void oldrhs_free(void * ptr){munmap((char*)ptr+dnsdata_48st,dnsdata_46i);}struct freefunc oldrhs_f;char *oldrhs_;

int dnsdata_49h;
int dnsdata_50l;
int dnsdata_51h;
ssize_t dnsdata_52i;
ssize_t dnsdata_53i;
ssize_t dnsdata_54i;
ssize_t dnsdata_55st;
struct freefunc memrhs_f;char *memrhs_;



double u1zero_;
double w1zero_;


int ismp_;



int dnsdata_56h;
int dnsdata_57h;
int dnsdata_58l;
int dnsdata_59h;
off_t dnsdata_60i;
off_t dnsdata_61i;
off_t dnsdata_63i;
off_t dnsdata_64i;
off_t dnsdata_65i;
off_t dnsdata_66st;
off_t dnsdata_67st;
struct dnsdata_s62{char header_[(1023+1)];};struct freefunc diskimage_f;FILE *diskimage_;

int dnsdata_68h;
int dnsdata_69h;
int dnsdata_70l;
int dnsdata_71h;
off_t dnsdata_72i;
off_t dnsdata_73i;
off_t dnsdata_75i;
off_t dnsdata_76i;
off_t dnsdata_77i;
off_t dnsdata_78st;
off_t dnsdata_79st;
struct dnsdata_s74{char header_[(1023+1)];};struct freefunc diskimage_interpoled_f;FILE *diskimage_interpoled_;

int dnsdata_80h;
int dnsdata_81h;
int dnsdata_82h;
int dnsdata_83l;
int dnsdata_84h;
off_t dnsdata_85i;
off_t dnsdata_86i;
off_t dnsdata_88i;
off_t dnsdata_89st;
off_t dnsdata_90i;
off_t dnsdata_91i;
off_t dnsdata_92i;
off_t dnsdata_93st;
off_t dnsdata_94st;
struct dnsdata_s87{int nyimage_;int nximage_;int nzimage_;double timage_;double yminimage_;double ymaximage_;double aimage_;double alfa0image_;double beta0image_;double niimage_;};struct freefunc diskfield_f;FILE *diskfield_;

int cont_;
int outcont_;

struct freefunc time_file_f;FILE *time_file_;
  int miny_;
int maxy_;

double energy_;
double slice_energy_;
double diss_;
double slice_diss_; 

struct COMPLEX_ dudy_;
struct COMPLEX_ dvdy_;
struct COMPLEX_ dwdy_;


    
void dnsdata_95read_restart_file(){{struct freefunc* es=freestack;
if( restart_file_[0]==0 ){  fprintf(stdout,"""No input field founded, aborting..""");putc('\n',stdout);};
	if( (next_==NULL) ){  fprintf(stdout,"""Reading from restart_file: ""\t%s" ,restart_file_);putc('\n',stdout);};
	 errfopen(&diskimage_ ,restart_file_,O_RDWR|O_CREAT);  {
	/*!READ BY NAME FROM header ny,nx,nz,alfa0,beta0,ymin,ymax,a,ni; ni=1/ni*/
	 {int iy_=  dnsdata_4nyl-2  ;while(iy_<=dnsdata_5nyh+2){
		   {int _96i_=dnsdata_20h;do{{ssize_t _97st;
_97st=dnsdata_21l*(ssize_t)sizeof(struct VELOCITY_);
if(dnsdata_23i==(ssize_t)sizeof(struct VELOCITY_)&&(ssize_t)sizeof(struct VELOCITY_)==(ssize_t)sizeof(struct VELOCITY_)){if(!(fseeko(diskimage_,_96i_*(off_t)dnsdata_60i+iy_*(off_t)dnsdata_61i+(off_t)((ssize_t)sizeof(struct dnsdata_s62)-dnsdata_67st+(ssize_t)(char*)(struct dnsdata_s62*)(0))+_97st,SEEK_SET)==0&&fread(_96i_*dnsdata_24i+iy_*(ssize_t)sizeof(struct VELOCITY_)+V_+_97st,(ssize_t)sizeof(struct VELOCITY_),dnsdata_22h-dnsdata_21l+1,diskimage_)==dnsdata_22h-dnsdata_21l+1))ioerr(diskimage_);}else{  {int _98i_=dnsdata_21l;do{{if(!(fseeko(diskimage_,_98i_*(off_t)(ssize_t)sizeof(struct VELOCITY_)+_96i_*(off_t)dnsdata_60i+iy_*(off_t)dnsdata_61i+(off_t)((ssize_t)sizeof(struct dnsdata_s62)-dnsdata_67st+(ssize_t)(char*)(struct dnsdata_s62*)(0)) ,SEEK_SET)==0&&fread((struct VELOCITY_ *)(_98i_*dnsdata_23i+_96i_*dnsdata_24i+iy_*(ssize_t)sizeof(struct VELOCITY_)+V_),(ssize_t)sizeof(struct VELOCITY_),1,diskimage_)==1))ioerr(diskimage_);}_98i_++;}while(_98i_<=dnsdata_22h);}};}_96i_--;}while(_96i_>=0);}
	iy_+=1;};}
	errfclose(&diskimage_);
  {int iy_=(dnsdata_4nyl-2);do{{ { struct VELOCITY_ *_99w;
_99w=(struct VELOCITY_ *)(iy_*(ssize_t)sizeof(struct VELOCITY_)+V_);
{register double temp=(*_99w).u_.REAL_+u_conv_;(*_99w).u_.IMAG_=(*_99w).u_.IMAG_;(*_99w).u_.REAL_=temp;}; {register double temp=(*_99w).w_.REAL_+w_conv_;(*_99w).w_.IMAG_=(*_99w).w_.IMAG_;(*_99w).w_.REAL_=temp;};}}iy_++;}while(iy_<=(dnsdata_5nyh+2));}
}}}


double ny_read_;
double ny_write_;
double ny_fill_;
double y_r_;

int dnsdata_96h;
ssize_t dnsdata_97i;
struct freefunc y_i_f;char *y_i_;

int i_; 

double delta_y_;


void dnsdata_98populate_new_array(){{struct freefunc* es=freestack;
 ny_read_ = (double)(ny_+3-6); 	 ny_write_ = (double)(new_ny_+3-6);
			/*!// I valori BC li copio direttamente*/
 delta_y_ = (double)((new_ny_-3))/(double)((ny_-3));

/*!// y values of the new array in which write*/
{do{
  y_r_ = y_r_+delta_y_;
 (*(int *)(i_*(ssize_t)sizeof(int)+y_i_) )= (int)floor(y_r_);
i_+=1;
}while((*(int *)((i_-1)*(ssize_t)sizeof(int)+y_i_) )<new_ny_ -2);}

/*!// Fill the new array*/
 {int j_=0  ;while(j_<=ny_-2){
	 i_=0  ;while(i_<=nx_	){
		 {int k_= - nz_  ;while(k_<=nz_	){
			 (*(struct VELOCITY_ *)((*(int*)(j_*(ssize_t)sizeof(int)+y_i_))*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_))= (*(struct VELOCITY_ *)((j_+2)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_23i+i_*dnsdata_24i+V_));
		k_+=1;};}
	i_+=1;;};
j_+=1;};}

/*!// Apply BC to new array*/
 {int j_= - 1  ;while(j_<=1){
	 i_=0  ;while(i_<=nx_	){
		 {int k_= - nz_  ;while(k_<=nz_	){
			 (*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_))= (*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_23i+i_*dnsdata_24i+V_));
			 (*(struct VELOCITY_ *)((new_ny_-j_)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_) )= (*(struct VELOCITY_ *)((ny_-j_)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_23i+i_*dnsdata_24i+V_));
		k_+=1;};}
	i_+=1;;};
j_+=1;};}
}}


void dnsdata_99interpolate_y(){{struct freefunc* es=freestack;
/*!// Determine which planes need interpolation*/
int counter_;

int _100h;
ssize_t _101i;
struct freefunc y_to_interp_f;char *y_to_interp_;

counter_=0;_100h=new_ny_;
_101i=(ssize_t)sizeof(int)*(_100h+1);

y_to_interp_=malloc(_101i);if(y_to_interp_==NULL)y_to_interp_=errmalloc();atblockexit(y_to_interp_f,free,y_to_interp_); {int j_=0  ;while(j_<=dnsdata_96h){
	if( (*(int *)((j_+1)*(ssize_t)sizeof(int)+y_i_) )-(*(int *)(j_*(ssize_t)sizeof(int)+y_i_) )>1 ){ 
		 (*(int *)(counter_*(ssize_t)sizeof(int)+y_to_interp_) )= (*(int *)(j_*(ssize_t)sizeof(int)+y_i_))+1;
		counter_+=1;
	};
j_+=1;};}
/*!// Interpolate those planes identified before*/
 i_=0  ;while(i_<=nx_	){
	 {int k_= - nz_  ;while(k_<=nz_){
		interpole:;  {int j_=0  ;while(j_<=new_ny_){
			double _102r;
double _103i;
double _104r;
double _105r;
double _106i;
double _107r;
double _108r;
double _109i;
double _110r;
if( (*(int *)(j_*(ssize_t)sizeof(int)+y_to_interp_) )== 0 ){ goto interpole_exit;	};
			_102r=((*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))-1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_.REAL_+(*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))+1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_.REAL_);
_103i=((*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))-1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_.IMAG_+(*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))+1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_.IMAG_);
_104r=(1./(2.));
 {register double temp=(_102r*_104r);(*(struct VELOCITY_ *)((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_ .IMAG_=(_103i*_104r);(*(struct VELOCITY_ *)((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_ .REAL_=temp;};
			_105r=((*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))-1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_.REAL_+(*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))+1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_.REAL_);
_106i=((*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))-1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_.IMAG_+(*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))+1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_.IMAG_);
_107r=(1./(2.));
 {register double temp=(_105r*_107r);(*(struct VELOCITY_ *)((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_ .IMAG_=(_106i*_107r);(*(struct VELOCITY_ *)((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_ .REAL_=temp;};
			_108r=((*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))-1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_.REAL_+(*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))+1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_.REAL_);
_109i=((*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))-1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_.IMAG_+(*(struct VELOCITY_*)(((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))+1)*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_.IMAG_);
_110r=(1./(2.));
 {register double temp=(_108r*_110r);(*(struct VELOCITY_ *)((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_ .IMAG_=(_109i*_110r);(*(struct VELOCITY_ *)((*(int*)(j_*(ssize_t)sizeof(int)+y_to_interp_))*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_ .REAL_=temp;};
			/*!WRITE "Filling ("y_to_interp(j)")= " new_V(i,k,y_to_interp(j)).u*/
		j_+=1;};}interpole_exit:;
	k_+=1;};}
i_+=1;;}; 
freemem(es);}}

void dnsdata_100Reynolds_scaling_factor(){{struct freefunc* es=freestack;
double scaling_factor_;

 scaling_factor_ = new_ni_/ni_;
 i_=0  ;while(i_<=nx_){
	 {int k_= - nz_  ;while(k_<=nz_){
		 {int j_= - 1  ;while(j_<=new_ny_){
			 {register double temp=((*(struct VELOCITY_*)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_.REAL_*scaling_factor_);(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_ .IMAG_=((*(struct VELOCITY_*)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_.IMAG_*scaling_factor_);(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_ .REAL_=temp;};
			 {register double temp=((*(struct VELOCITY_*)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_.REAL_*scaling_factor_);(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_ .IMAG_=((*(struct VELOCITY_*)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_.IMAG_*scaling_factor_);(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_ .REAL_=temp;};
			 {register double temp=((*(struct VELOCITY_*)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_.REAL_*scaling_factor_);(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_ .IMAG_=((*(struct VELOCITY_*)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_.IMAG_*scaling_factor_);(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_ .REAL_=temp;};
		j_+=1;};}
	k_+=1;};}
i_+=1;;}; 
}}


void dnsdata_101interpolate_xz(){{struct freefunc* es=freestack;
 i_=nx_+1  ;while(i_<=new_nx_){
	 {int j_= - 1  ;while(j_<=new_ny_+1){
		 {int k_= - new_nz_  ;while(k_<= - nz_-1){
			memset(&(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_,0,(ssize_t)sizeof(struct COMPLEX_)); 	memset(&(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_,0,(ssize_t)sizeof(struct COMPLEX_)); 	memset(&(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_,0,(ssize_t)sizeof(struct COMPLEX_));
		k_+=1;};}
		 {int k_=nz_+1  ;while(k_<=new_nz_){
			memset(&(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).u_,0,(ssize_t)sizeof(struct COMPLEX_)); 	memset(&(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).v_,0,(ssize_t)sizeof(struct COMPLEX_)); 	memset(&(*(struct VELOCITY_ *)(j_*(ssize_t)sizeof(struct VELOCITY_)+k_*dnsdata_32i+i_*dnsdata_33i+new_V_)).w_,0,(ssize_t)sizeof(struct COMPLEX_));
		k_+=1;};}
	j_+=1;};}
i_+=1;;};
}}

void dnsdata_102interpolate(){{struct freefunc* es=freestack;
dnsdata_99interpolate_y();
dnsdata_100Reynolds_scaling_factor();
dnsdata_101interpolate_xz();
}}

void dnsdata_103write_data(){{struct freefunc* es=freestack;
int _104h;
int _105l;
int _106h;
ssize_t _107i;
ssize_t _108i;
ssize_t _109st;
struct freefunc velbuf_f;char *velbuf_;

 nx_ = new_nx_;  	 ny_ = new_ny_;  	 nz_ = new_nz_;
_104h=nx_;
_105l= - nz_;
_106h=nz_;
_107i=(ssize_t)sizeof(struct VELOCITY_)*(_106h-_105l+1);
_108i=_107i*(_104h+1);
_109st=_105l*(ssize_t)sizeof(struct VELOCITY_);

velbuf_=malloc(_108i);if(velbuf_==NULL)velbuf_=errmalloc();velbuf_-=_109st;atblockexit(velbuf_f,free,velbuf_+_109st);time_=0.;
  {int iy_=(-1);do{{ { struct VELOCITY_ *_110w;
_110w=(struct VELOCITY_ *)(iy_*(ssize_t)sizeof(struct VELOCITY_)+new_V_);
{register double temp=(*_110w).u_.REAL_-u_conv_;(*_110w).u_.IMAG_=(*_110w).u_.IMAG_;(*_110w).u_.REAL_=temp;}; {register double temp=(*_110w).w_.REAL_-w_conv_;(*_110w).w_.IMAG_=(*_110w).w_.IMAG_;(*_110w).w_.REAL_=temp;};}}iy_++;}while(iy_<=dnsdata_31h);}
if( !(prev_==NULL) ){  while(!feof( prev_)&&getc( prev_)!='\n'){};};
 errfopen(&diskimage_interpoled_ ,"Dati.cart.out",O_RDWR|O_CREAT);
{
if( (next_==NULL) ){
  char *_111; fprintf(stdout,"""Writing Dati.cart.out at time""\t%g" ,time_);putc('\n',stdout);
  _111=malloc(snprintf(NULL,0,"     ny=""%d""       nx=""%d""       nz=""%d""\n"
"     alfa0=""%g""     beta0=""%g""\n"
"     ymin=""%g""       ymax=""%g""       a=""%g""\n"
"     ni=""%g""       time=""%g""\n"
"     """,ny_,nx_,nz_,alfa0_,beta0_,ymin_,ymax_,a_,1./ni_,time_)+1);sprintf(_111,"     ny=""%d""       nx=""%d""       nz=""%d""\n"
"     alfa0=""%g""     beta0=""%g""\n"
"     ymin=""%g""       ymax=""%g""       a=""%g""\n"
"     ni=""%g""       time=""%g""\n"
"     """,ny_,nx_,nz_,alfa0_,beta0_,ymin_,ymax_,a_,1./ni_,time_); fprintf( (fseeko(diskimage_interpoled_,(-(0))+(ssize_t)(*(struct dnsdata_s74 *)(0)).header_ ,SEEK_SET),diskimage_interpoled_),"%s",_111);putc('\n', (fseeko(diskimage_interpoled_,(-(0))+(ssize_t)(*(struct dnsdata_s74 *)(0)).header_ ,SEEK_SET),diskimage_interpoled_));
free(_111);};
 {int iy_=   - 1  ;while(iy_<=new_ny_+1){
	  {int iz_=_105l;do{{ int _112h;
int _113h;
_112h=nx_;
_113h=nx_;
{char *_115_;

_115_=iy_*(ssize_t)sizeof(struct VELOCITY_)+iz_*dnsdata_32i+new_V_; {char *_114_=iz_*(ssize_t)sizeof(struct VELOCITY_)+velbuf_;int _114_1=_112h; do{{ (*(struct VELOCITY_ *)(_114_))=(*(struct VELOCITY_ *)(_115_)); _115_ =dnsdata_33i+_115_;}_114_+=_107i;_114_1--;}while(_114_1>=0);}} }iz_++;}while(iz_<=_106h);}
	   {int _116i_=dnsdata_69h;do{{if((ssize_t)sizeof(struct VELOCITY_)==(ssize_t)sizeof(struct VELOCITY_)&&(ssize_t)sizeof(struct VELOCITY_)==(ssize_t)sizeof(struct VELOCITY_)){if(!(fseeko(diskimage_interpoled_,_116i_*(off_t)dnsdata_72i+iy_*(off_t)dnsdata_73i+(off_t)((ssize_t)sizeof(struct dnsdata_s74)-dnsdata_79st+(ssize_t)(char*)(struct dnsdata_s74*)(0))+dnsdata_78st,SEEK_SET)==0&&fwrite(_116i_*_107i+velbuf_+dnsdata_78st,(ssize_t)sizeof(struct VELOCITY_),dnsdata_71h-dnsdata_70l+1,diskimage_interpoled_)==dnsdata_71h-dnsdata_70l+1))ioerr(diskimage_interpoled_);}else{  {int _117i_=dnsdata_70l;do{{if(!(fseeko(diskimage_interpoled_,_117i_*(off_t)(ssize_t)sizeof(struct VELOCITY_)+_116i_*(off_t)dnsdata_72i+iy_*(off_t)dnsdata_73i+(off_t)((ssize_t)sizeof(struct dnsdata_s74)-dnsdata_79st+(ssize_t)(char*)(struct dnsdata_s74*)(0)),SEEK_SET)==0&&fwrite((struct VELOCITY_*)(_117i_*(ssize_t)sizeof(struct VELOCITY_)+_116i_*_107i+velbuf_),(ssize_t)sizeof(struct VELOCITY_),1,diskimage_interpoled_)==1))ioerr(diskimage_interpoled_);}_117i_++;}while(_117i_<=dnsdata_71h);}};}_116i_--;}while(_116i_>=0);}
iy_+=1;};}
/*!DO WRITE i,header(i) FOR i=0 TO 1023*/
errfclose(&diskimage_);
if( !(next_==NULL) ){  putc('\n', next_);};
  {int iy_=(-1);do{{ { struct VELOCITY_ *_118w;
_118w=(struct VELOCITY_ *)(iy_*(ssize_t)sizeof(struct VELOCITY_)+new_V_);
{register double temp=(*_118w).u_.REAL_+u_conv_;(*_118w).u_.IMAG_=(*_118w).u_.IMAG_;(*_118w).u_.REAL_=temp;}; {register double temp=(*_118w).w_.REAL_+w_conv_;(*_118w).w_.IMAG_=(*_118w).w_.IMAG_;(*_118w).w_.REAL_=temp;};}}iy_++;}while(iy_<=dnsdata_31h);}
}freemem(es);}}

