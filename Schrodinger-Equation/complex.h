#include <math.h>

typedef struct FCOMPLEX {double r;double i;} fcomplex;

fcomplex Cadd(fcomplex a, fcomplex b)
// Output c=a+b
{
	fcomplex c;
	c.r=a.r+b.r;
	c.i=a.i+b.i;
	return c;
}

fcomplex Csub(fcomplex a, fcomplex b)
// Output c=a-b
{
	fcomplex c;
	c.r=a.r-b.r;
	c.i=a.i-b.i;
	return c;
}

fcomplex Cmul(fcomplex a, fcomplex b)
// Output c=a*b
{
	fcomplex c;
	c.r=a.r*b.r-a.i*b.i;
	c.i=a.i*b.r+a.r*b.i;
	return c;
}

fcomplex Complex(double re, double im)
// Output c=(re, im)
{
	fcomplex c;
	c.r=re;
	c.i=im;
	return c;
}

fcomplex Conjg (fcomplex z)
// Output c=conjudado(z)
{
	fcomplex c;
	c.r=z.r;
	c.i=-z.i;
	return c;
}

fcomplex Cdiv (fcomplex a, fcomplex b)
// Output c=a/b
{
	fcomplex c;
	double r,den;
	if (fabs(b.r)>=fabs(b.i)){
		r=b.i/b.r;
		den=b.r+r*b.i;
		c.r=(a.r+r*a.i)/den;
		c.i=(a.i-r*a.r)/den;
	} else {
		r=b.r/b.i;
		den=b.i+r*b.r;
		c.r=(a.r*r+a.i)/den;
		c.i=(a.i*r-a.r)/den;
	}
	return c;
}

double Cabs (fcomplex z)
//output c=|z|
{
	double x,y,ans,temp;
	x=fabs(z.r);
	y=fabs(z.i);
	if (x==0.0)
		ans=y;
	else if (y==0.0)
		ans=x;
	else if (x > y) {
		temp=y/x;
		ans=x*sqrt(1.0+temp*temp);
	} else {
		temp=x/y;
		ans=y*sqrt(1.0+temp*temp);
	}
	return ans;
}

fcomplex Csqrt(fcomplex z)
// output c=sqrt(z)
{
	fcomplex c;
	double x,y,w,r;
	if ((z.r==0.0)&&(z.i==0.0)) {
		c.r=0.0;
		c.i=0.0;
		return c;
	} else {
		x=fabs(z.r);
		y=fabs(z.i);
		if (x>=y) {
			r=y/x;
			w=sqrt(x)*sqrt(0.5*(1.0+sqrt(1.0+r*r)));
		} else {
			r=x/y;
			w=sqrt(y)*sqrt(0.5*(r+sqrt(1.0+r*r)));
		}
		if (z.r>= 0.0) {
			c.r=w;
			c.i=z.i/(2.0*w);
		} else {
			c.i=(z.i>=0.0) ? w : -w;
			c.r=z.i/(2.0*c.i);
		}
		return c;
	}
}

fcomplex RCmul (double x, fcomplex a)
// output: x=a*x
{
	fcomplex c;
	c.r=x*a.r;
	c.i=x*a.i;
	return c;
}


fcomplex Cpow(fcomplex x, int n)
// output x=x^n
{
	fcomplex c;
	int i;
	c=Complex(x.r,x.i);
	for (i=1;i<n;i++)
	{
		c=Cmul(c,x);
	}
	return c;
}


fcomplex Cgauss (double x,double y)
// Devuelve el nœmero complejo correspondiente al modulo y y la fase x 
{
	fcomplex c;
	c=Complex(cos(x),sin(x));
	c=RCmul(y,c);
	return c;
}

