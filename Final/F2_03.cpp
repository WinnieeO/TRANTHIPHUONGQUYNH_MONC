#include <math.h>
#include <stdio.h>

class Function {
    public:
        virtual double Value(double x)=0;
        virtual double Derive(double x)=0;
};

class Sin:public Function {
    public:
        double Value(double x) {
            return sin(x);
        }
        double Derive(double x) {
            return cos(x);
        }
};

class Cos: public Function
{
	public:
  		double Value(double x){
		    return cos(x);}
  		double Derive(double x){
		    return -sin(x);}
};

double DeriveProduct(Function* f, Function* g, double x)
{
    if (f != NULL && g != NULL) {
        return f->Derive(x)*g->Value(x) + f->Value(x)*g->Derive(x);
    }
    return 0;
}

double DeriveSum(Function* f, Function* g, double x)
{
    if (f != NULL && g != NULL) {
        return f->Derive(x) + g->Derive(x);
    }
    return 0;
}

double DeriveDivision(Function *f, Function *g, double x)
{
    if (f != NULL && g != NULL){
        float gValue = g->Value(x);

        if (gValue)
            return f->Derive(x) * g->Value(x) - g->Derive(x) * f->Value(x) / (gValue * gValue);
    }
    return 0;
}

double DeriveChain(Function *f, Function *g, double x)
{
  if (f != NULL && g != NULL){
    return f->Derive(g->Value(x)) * g->Derive(x);
  }
  return 0;
}

int main() {
    double x = 3.14/6; // PI/6
    Cos* s = new Cos();

    double y = DeriveChain(s, s, x);
    printf("y = %f\n", y);
    double z = DeriveDivision(s, s, x);
    printf("cos(x) = %f; cos'(x) = %f\n", s->Value(x), s->Derive(x));
    printf("z = %f\n", z);
}