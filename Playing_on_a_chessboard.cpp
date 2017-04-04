#include <iostream> // Only to check outputs
#include <string>
#include <cmath>

class Suite2
{
    public:
	  static std::string game(unsigned long long n);
};

std::string Suite2::game(unsigned long long n)
{
  long double number=(long double)n*n*0.5;

  if(number-floor(number)>0)
    return("["+std::to_string((long long unsigned)round(2*number))+", " + "2" +"]");
  else
    return("["+std::to_string((long long unsigned)round(number))+"]");
}

/*
  for(unsigned long long i=0; i<n; ++i)
  {
    unsigned cont=1;
    for(unsigned long long j=i+2; j<i+n+2; ++j)
    {
      number+= (long double) (cont) / j;
      ++cont;
    }
  }
  unsigned long long numerator, denominator;
  std::cout<<std::fixed<<number<<" "<<floor(number)<<std::endl;

  long double factor;
  long double cumulative=1.0;
  long double decimal_part= number-floor(number+0.001);
  // decimal_part=static_cast<long double>( static_cast<int>(decimal_part*10000) ) / 10000;
  // std::cout<<"*"<<number<<" "<<decimal_part<<"*";
  // std::cout<<"*"<<"number:"<<number<<" n: "<<n;
  if(decimal_part<0.0001)
    return("["+std::to_string((int)round(number))+"]");

  // std::cout<<number<<"---"<<round(number);

  // if(number>500 && (int)roundf(number)%2)      // a first trial of making it faster
  // {
  //   return("["+std::to_string((int)round(2*number))+", " + "2" +"]");
  // }
  do
  {
    factor= (long double) 1.0 / decimal_part;
    cumulative*=factor;
    decimal_part= factor-floor(factor);
    // cout<<"*"<<decimal_part<<" "<<floor(decimal_part)<<std::endl;
  }while(decimal_part > 0.00001);


  denominator=round(cumulative);
  numerator=round(cumulative*number);

  // if(denominator!=1)
    return "["+std::to_string(numerator) + ", " + std::to_string(denominator)+"]";
  // else
  //   return "["+std::to_string(numerator)+"]";
}
*/

int main()
{
  for(unsigned i=0; i<30000; ++i)
  {
    std::cout<<i<<" "<<Suite2::game(i)<<std::endl;
  }

  return 0;
}
