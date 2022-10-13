//1
//_________________________________________
#include <iostream>
using namespace std;
int sum(int a, int b)
{
  int sum=a+b;
  cout<<"sum of a and b is:"<<sum <<endl;
}
int main() {

  int a, b;
  cout<<"enter the num1 value:"<<endl;
  cin>>a;
  cout<<"enter the num2 value::"<<endl;
  cin>>b;
 sum(a,b);
  
}

//2_---------------------------------------------

#include <iostream>
using namespace std;
float weight(float a, float b, float c) {
  float weight = a + b + c;
  cout << "The sum of weight of the 3 persons is:" << weight << endl;
  float avg = (a + b + c) / 3;
  cout << "The avg weight of the 3 persons is:" << avg << endl;
}
int main() {

  float a, b, c;
  cout << "enter the weight of the 1st person:" << endl;
  cin >> a;
  cout << "enter weight of the 2nd person:" << endl;
  cin >> b;
  cout << "enter weight of the 3rd person:" << endl;
  cin >> c;
  weight(a, b, c);
}


//3------------------------------------------------------


#include <iostream>
using namespace std;

int main() {

  int empno;
  string empname;
  float salary;
  
  cout << "enter the empno:" << endl;
  cin >> empno;
  cout << "Enter the employee name:" << endl;
  cin >> empname;
  cout << "Enter the monthly salary:" << endl;
  cin >> salary;
  float yearly=(salary*12);
  cout<<"hi "<<empname<<", Your employee id is:"<<empno<<", Your monthly salary is "<<salary<<" and yearly salary is: "<<yearly<<endl;
  
}



//4----------------------------------------------------------------

#include <iostream>
using namespace std;

int swap(int a, int b){
  int temp;
  temp=a;
  a=b;
  b=temp;
 cout<<"After swap, the values of num1="<<a<<" and num2="<<b<<endl;
  
}

int main() {
  int num1, num2;
  cout << "Enter the first number num1:" << endl;
  cin >> num1;
  cout << "Enter the second number num2:" << endl;
  cin >> num2;
  cout<<"Before swap, the values of num1:"<<num1<<" and num2="<<num2<<endl;
  swap(num1, num2);
  
  
}

//5---------------------------------------------------------------------
#include <iostream>
using namespace std;

float si(float pa,float roi,float time){
  float SI=(pa*time*roi)/100;

  cout<<"Simple interest is:"<<SI <<endl;
  
  
}
int main() {
 float pa,roi,time;
  cout << "Enter the principal amount:" << endl;
  cin >> pa;
  cout << "Enter the rate of interest:" << endl;
  cin >> roi;
  cout<<"Enter the time (years):"<<endl;
  cin>>time;

  si(pa,roi,time);
  
 
  
}

//6-------------------------------------------------------------------
#include <iostream>
using namespace std;
  
int main() {
  int num;
 cout<<"enter a number:"<<endl;
  cin>>num;
  if(num<0)
  {
    num=num*-1;
    cout<<"The result is:"<<num<<endl;
  }
  
}

//7-------------------------------------------------------------------

#include <iostream>
using namespace std;
  
int main() {
  int amt,discount,total;
  cout<<"Enter the billing amount:"<<endl;
  cin>>amt;
  if(amt>6000)
  {
    discount=(amt/100)*10;
    total=amt-discount;
    cout<<"Your net billing amount:"<<total;
  }
  else{
    cout<<"Your net billing amount:"<<amt;
  }
  
}

//8---------------------------------------------------------------


#include <iostream>
using namespace std;
  
int main() {
  string name;
  int num, age;
  cout<<"Enter the name:";
  cin>>name;
  cout<<"Enter the mobile number:";
  cin>>num;
  cout<<"Enter the age:";
  cin>> age;
  if(age>18)
  {
    cout<<"Congratulations!! "<<name<< " for your successful registration";
  }
  else{
    cout<<"Sorry! You need to be at least 18 years old to get membership.";
  }
  
}

//9---------------------------------------------------------------------

#include <iostream>
using namespace std;
  
int main() {
  int num;
  cout<<"enter a number:";
  cin>> num;
  if(num%2==0)
  {
    cout<<num<< " is even";
  }
  else{
    cout<<num<< " is odd";
  }
}

//10-------------------------------------------------------------------

#include <iostream>
using namespace std;
  
int main() {
  int num1,num2;
  cout<<"enter a number1:";
  cin>> num1;
   cout<<"enter a number2:";
  cin>> num2;
  if(num1>num2)
  {
    cout<<"The bigger of the two numbers entered ("<<num1<< " and "<< num2 <<") is: "<< num1;
  }
  else{
   cout<<"The bigger of the two numbers entered ("<<num1<< " and "<< num2 <<") is: "<< num2;
  }
}

//11-----------------------------------------------------------------------



#include <iostream>
using namespace std;
  
int main() {
  int diff=0;
  int num1,num2;
  
  cout<<"Enter the first number num1:";
  cin>>num1;
  cout<<"Enter the second number num2:";
  cin>>num2;
  if(num1>num2)
  {
    diff=num1-num2;
    cout<<"The result (difference) is:"<<diff;
  }
  else{
    diff=num2-num1;
    cout<<"The result (difference) is:"<<diff;
  }
 
  
}



//12--------------------------------------------------------------------------

#include <iostream>
using namespace std;
  
int main() {
  float amt, discount, payable;
  string answer;
  cout<<"Enter the bill amount:";
  cin>>amt;
  cout<<"Do you have a membership card? ENTER 'YES' or 'NO':";
  cin>>answer;
  if(answer=="yes")
  {
    discount=(amt/100)*10;
     payable=amt-discount;
    
    cout<<"Thank you! Your total bill amount is Rs "<<amt<< ", discount is Rs "<<discount<<" and net amount payable is Rs "<<payable<<endl;
  }
  else if(answer=="no")
    {
    discount=(amt/100)*3;
    payable=amt-discount;
    cout<<"Thank you! Your total bill amount is Rs "<<amt<< ", discount is Rs "<<discount<<" and net amount payable is Rs "<<payable<<endl;
    }
  
  
}



//13----------------------------------------------------------------------------
#include <iostream>
using namespace std;
  
int main() {
 int num1,num2,num3,biggest;
  cout<<"Enter the 1st  number num1:";
  cin>>num1;
  cout<<"Enter the 2nd  number num2:";
  cin>>num2;
  cout<<"Enter the 3rd  number num3:";
  cin>>num3;
  if(num1>num2&&num1>num3)
  {
    biggest=num1;
  }
  else if(num2>num1&&num2>num3)
  {
    biggest=num2;
  }
  else{
    biggest=num3;
  }
  cout<<"The biggest of the 3 numbers entered is:"<<biggest<<endl;
  }


//14----------------------------------------------------------------------------------

#include <iostream>
using namespace std;
  
int main() {
 float s1,s2,s3, avg,total;
  cout<<"Enter the marks scored in 1 st subject:";
  cin>>s1;
  cout<<"Enter the marks scored in 2 nd  subject:";
  cin>>s2;
  cout<<"Enter the marks scored in 3rd subject:";
  cin>>s3;
  total=s1+s2+s3;
  avg=total/3;
  cout<<"Total marks:"<<total<<endl;
  cout<<"average is:"<<avg<<endl;
  if(avg<35)
  {
    cout<<"Grade:'C' "<<endl;
  }
  else if(avg>35||avg<60)
  {
    cout<<"Grade:'B' "<<endl;
  }
  else{
    cout<<"Grade:'A' "<<endl;
  }
  
  }

//15------------------------------------------------------------------------------

#include <iostream>
using namespace std;
  
int main() {
  int num;
 cout<<"Enter the number of natural numbers to be generated:";
  cin>>num;
  for(int i=1;i<=num;i++)
    {
      cout<<i<<endl;
    }
  
  
  }
  //16----------------------------------------------------------------------------

  #include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter any number:";
  cin >> n;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << "The entered number " << n << " is not a prime number";
      break;
    }

    else {
      cout << "The entered number " << n << " is a prime number";
      break;
    }
  }
}

//17--------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of natural numbers to be generated:";
  cin>>n;
  for(int i=n;i>=1;i--)
  {
    cout<<i<<endl;
  }
 
}

//18--------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
  int min, max;
  cout<<"Enter the lower bound value:";
  cin>>min;
  cout<<"Enter the upper bound value:";
  cin>>max;
  for(int i=min;i<=max-1;i++)
    {
      if(i%2!=0)
      {
        cout<<i<<" is prime"<<endl;
       
      }
      else{
        {
        cout<<i<<" is not prime"<<endl;
          
      }
      }
    }
  
}

//19-------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
	int num = 1, pre_num = 0, sum, n;
	
		cout << "Enter number of terms 'n'of Fibonacci series: ";
		cin >> n;
		cout << "Fibonacci series: ";
		for (int i = 0; i < n; i++)
		{
      if(i==0||i==1)
      {
        cout<<i<<" ";
      }
			sum = num + pre_num;
			pre_num = num;
			num = sum;
			cout << num << " ";
		}
}
  
//20-------------------------------------------------------------------------

#include<iostream>
using namespace std ;
int main ( ) {
  int num;
  cout<<"Enter the number to generate its multiplication table:";
  cin>>num;
  
  for(int i=1;i<=num;i++)
    {
      cout<<num<<" X "<<i<<" = "<<num*i<<endl;
      if(i>=10)
      {
        break;
      }
    }
  
}

//21--------------------------------------------------------------------


#include<iostream>
using namespace std ;
int main ( ) {
  int num,fact=1;
  cout<<"Enter any number:";
  cin>>num;
  for(int i=1;i<=num;i++)
    {
       fact=fact*i;
       
    }
  cout<<fact;

  
}


//22---------------------------------------------------------------

#include <iostream>
using namespace std;
float series(int n){
   float sum = 0.00;
   for(float i = 1; i <= n; i++){
      sum += (1/i);
   }
   return sum;
}
int main(){
  int n;
   cout<<"enter a number:";
  cin>>n;
   cout<<"The sum of series till "<<n<<" is "<<series(n);
   return 0;
}
      
//23-----------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=1;
    cout<<"Enter the number:";
    cin>>n;

    while(i<=n)
    {
        sum+=i;
        i+=2;
    }
    cout<<"The sum of the series = "<<sum;
}

//24--------------------------------------------------------------------



#include <bits/stdc++.h>
using namespace std;
double Series(int n) {
  int i;
  double sums = 0.0, ser;
  for (i = 1; i <= n; ++i) {
    ser = 1 / pow(i, 3);
    sums += ser;
  }
  return sums;
}

int main() {
  int n;
  cout << "enter a number:";
  cin >> n;
  double res = Series(n);

  cout << res;
  return 0;
}

//25----------------------------------------------------------
#include <iostream> 
using namespace std;
int main()  
{ 
   int n; 
  cin>>n;
   int num = 1; 
   for (int i = 1; i <= n; i++)  
   { 
        for (int j = 1; j <= i; ++j)  
        { 
            cout<<num; 
            ++num; 
        } 
        cout<<endl; 
   } 
   return 0; 

} 

//27---------------------------------------------------------------
#include <iostream> 
using namespace std;
int main()  
{ 

   int n; 
   cout<<n;
   cin>>n; 
   for (int i = 1; i <= n; ++i)  
   { 
        for (int j = 1; j <= i; ++j)  
        { 
            cout<<j; 
        } 
        cout<<endl; 
   } 
   return 0; 
} 

//28----------------------------------------------------------
#include <iostream> 
using namespace std;
int main() 
{ 
  int i,j; 
  for(i=5;i>=1;i-=1) 
  { 
    for(j=1;j<=i;j++) 
    { 
      cout<<j; 
    } 
    cout<<endl; 
  } 
  return 0; 
} 

//29--------------------------------------------------------------
#include <iostream> 
using namespace std;
int main() 
{ 
    int i, j; 
    for(i=1;i<=5;i++) 
    { 
        for(j=1;j<=i;j++) 
        { 
            cout<<j; 
        } 
        cout<<endl; 
    } 
 
    return 0; 
} 
//30------------------------------------------------------------------
int main() 
{ 
  int i,j; 
  for(i=1;i<=4;i++) 
  { 
    for(j=1;j<=i;j++) 
      cout<<j; 

    for(j=i-1;j>=1;j--) 

      cout<<j;  

    cout<<endl;
  } 
  return 0; 
} 

//35---------------------------------------------------------------0-
#include<iostream> 
using namespace std;

void main() 

{ 
    int i, j ,height; 

    for (i = 0; i < height; i++) { 

        for (j = 0; j < height; j++) { 
            if (i == 0 || i == height - 1) 
                cout<<"*"; 
            else if (j == height / 2) 
                cout<<"*"; 
            else 
                cout<<" "; 
        } 
        cout<<endl;
    } 

} 

//36-----------------------------------------------------------
 #include<iostream> 
using namespace std;


void main() 

{ 
    int i, j ,height; 
    int n =  width / 2, i, j; 
    for (i = 0; i < height; i++) { 
        for (j = 0; j < height; j++) { 
            if (i == 0 || i == (width - n) 
                            || (i == height / 2 && j > n 

                    && j < (width - n))) 
                  cout<<"@"; 
            else 
                cout<<" "; 
        } 
        cout<<endl; 
        n--; 
    } 
} 
//37--------------------------------------------------------------


int main() 
{ 
     int i,j,n; 
     cout<<"Enter Swastik Size(n):"; 
     cin>>n; 
     cout<<"*";
     for(i=0; i<n-2; i++) 
           cout<<"  ";
     for(i=0; i<n; i++)   
           cout<<"*";
     cout<<endl;
     for(j=0; j<n-2; j++) 
     { 
           cout<<"* "; 
           for(i=0; i<n-2; i++) 
                cout<<"  "; 
           cout<<endl;
     } 
     for(i=0; i<n*2-1; i++)     
           cout<<"* "; 
     cout<<endl;
     for(j=0; j<n-2; j++) 
     { 
           for(i=0; i<=n-2; i++) 
                cout<<"  "; 
           cout"* "; 
           for(i=0; i<n-2; i++) 
                cout"  "; 
           cout<<"* "<<endl;; 
     } 
     for(i=0; i<n; i++)   
           cout<<"* "; 
     for(i=0; i<n-2; i++) 
           cout<<"  "; 
     cout<<"* ";   
     return 0; 

} 

//41----------------------------------------------------------------
#include <iostream> 
using namespace std;
int main()
{
   
    int i,number, count=0;
    cout<<"enter a number";
    cin>>number;
while(number>0)
  { 
    number=number/10;
    count++;
  }
  cout<<count<<endl;
  }

//42----------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"enter a number:";
  cin>>n;
  int sum = 0;
  while (n != 0) {
    sum = sum + n % 10;
    n = n / 10;
  }
  cout << sum;
}

//43--------------------------------------------------------------------

#include <iostream>
using namespace std;
 
int main()
{
    int num,rev=0;
    cout << "Enter a Number: ";
    cin >> num;
    while(num>0){
        rev = rev*10 + num%10;
        num = num/10;
    }
    cout << "Reverse: " << rev;
    
}

//44---------------------------------------------------------------------

#include <iostream>  
using namespace std;  
int main()  
{  
int n,r,sum=0,temp;    
cout<<"Enter the Number=  ";    
cin>>n;    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
cout<<"Armstrong Number."<<endl;    
else    
cout<<"Not Armstrong Number."<<endl;   
return 0;  
}  

//45-----------------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
    int n;
  cout<<"enter number:";
  cin>>n;
    int sum = 0;
    while(n > 0 || sum > 9)
      {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
  cout<<sum;
}

//46-----------------------------------------------------------------------

#include <iostream>
using namespace std;
int main() {

	int N, temp;
	int hash[10];
 cout<<"Enter a Number: ";
  cin>>N;
	cout<<"Prime Digits:"<<endl;
	while (N > 0) {
		temp = N % 10;
		N = N / 10;
		if ((temp == 2 || temp == 3 || temp == 5 || temp == 7) && hash[temp] == 0) {
			cout<<temp<<" ";
			hash[temp] = 1;
		}

	}

}

//47-------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main() {
  int i = 1, fact = 1, number;
  cout << "Enter any Number: ";
  cin >> number;
  while (i <= number) {
    fact = fact * i;
    i++;
  }
  cout << "Factorial of " << number << " is: " << fact << endl;
  return 0;
}

//48---------------------------------------------------------------------


#include <iostream>
using namespace std;
#define SIZE 6
int main() {
  int amount, notes;
  int denom[SIZE] = {500, 100, 50, 20, 10, 1};
  cout << "Enter amount: ";
  cin >> amount;
  for (int i = 0; i < SIZE; i++) {
    notes = amount / denom[i];
    if (notes) {
      amount = amount % denom[i];
      cout << notes << " * " << denom[i] << " = " << notes * denom[i] << endl;
    }
  }
}

//49--------------------------------------------------------------------

#include <iostream>
using namespace std;
int main() {
  int n, m = 0, a;
  cout << "Enter any number:";
  cin >> n;
  while (n > 0) {
    a = n % 10;
    a++;
    m = m * 10 + a;
    n = n / 10;
  }
  n = m;
  m = 0;
  while (n > 0) {
    a = n % 10;
    m = m * 10 + a;
    n = n / 10;
  }
  cout << "Result:" << m;
}


//50-----------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
  int n;
  float m, result = 1;

  cout << "Enter m" << endl;
  cin >> m;
  cout << "Enter n" << endl;
  cin >> n;

  cout << m << "^" << n << " = ";

  while (n != 0) {
    result *= m;
    --n;
  }

  cout << result;
}

//51------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {

  char c;
  int lowercase_vowel, uppercase_vowel;
  cout<<"Enter an alphabet: ";
  cin>>c;
  lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

  uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  if (lowercase_vowel || uppercase_vowel){
  cout<<c<<" is a vowel.";
    }
  else
  {
    cout<<c<<" is a consonant";
    }
  return 0;
}

//52-----------------------------------------------------------------
#include <iostream> 
using namespace std;

int main() { 
  char op; 
  double first, second; 
  cout<<"Enter an operator (+, -, *, /):"; 
  cin>>op; 
  cout<<"Enter two operands: "; 
  cin>>first>>second;

  switch (op){ 

    case '+': 
      cout<<first+second;
      break; 

    case '-': 
     cout<<first-second;
      break; 

    case '*': 
      cout<<first*second;
      break; 

    case '/': 
      cout<<first/second;
      break; 

    default: 
      cout<<"Error! operator is not correct"; 

  } 

 

  return 0; 

} 
//54------------------------------------------------------------

#include <iostream> 
using namespace std;

void main() 

{ 
   int i,n,sum=0; 
   cout<<"Input number of terms : "; 
   cin>>n;
   cout<<"\nThe odd numbers are :"; 
   for(i=1;i<=n;i++) 
   { 
     cout<<2*i-1; 
     sum+=2*i-1; 
   } 
   cout<<"The Sum of odd Natural Number upto "<<n<< "terms :"<<sum; 
} 

//55------------------------------------------------------------



#include <iostream> 
using namespace std; 

void main() 

{

    int i; 

    char ch=1;  

 

    for(i=0;i<2000;i++) 

    {
        cout<<ch; 
    } 

} 

 
