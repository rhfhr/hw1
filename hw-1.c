#include <iostream>

using namespace std;
int main()
{
int num1,num2,Choose,sum,sub,divide,multp;
cout<<"Enter first number: "<< endl;
cin>>num1;
cout<<"Enter second number: "<< endl;
cin>>num2;
cout<<"Choose the operation: \n 1- Sum \n 2- Subtract \n 3- Dividing \n 4- Multiplying: "<< endl;
cin>>Choose;
///
sum = num1+num2;
sub  = num1-num2;
divide = num1/num2;
multp = num1 * num2;
///
if (Choose == 1) {
  printf("Sum of two numbers: %d",sum);
} else if (Choose == 2){
  printf("Subtract of two numbers: %d",sub);
}
else if (Choose == 3){
  if (num2 == 0)
    printf("Can't be divided by ZERO!");
  else
    printf("Dividing of two numbers: %d",divide);
}
else if (Choose == 4){
  printf("Multiplying of two numbers: %d",multp);
}


}

