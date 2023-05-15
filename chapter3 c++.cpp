// 3.1
//a  program that explain the concept of overfow and underflow
// method 1
//#include<iostream>
//using namespace std;
//int  main(){
//	int testVar=32767;
//	cout<<testVar<<endl;
//	testVar=testVar+1;
//	cout<<testVar<<endl;
//	testVar=testVar-1;
//    cout<<testVar<<endl;
//    return 0;
//}


//method 2
//#include<iostream>
//using namespace std;
//int main(){
//	int n= 2500;
//    cout<<n<<endl;
//    n++;
//    cout<<n<<endl;
//    n--;
//    cout<<n<<endl;
//	return 0;
//	
//}









//3.2
//method 1
//input the radius of a circle and display the circumference by using formula 2*3.14*r
//sto0re teh value of pi in constant

//#include<iostream>
//using namespace std;
//int  main(){
//	int r;
//	float circle;
//	const float PI=3.141;
//	cout<<"enter the radius of a circle";
//	cin>>r;
//   circle =2*PI*r;
//   cout<<"the circumferece of a circle is"<<circle; 
//   return 0;
//}






//method 2
//input the radius of a circle and display the circumference by using formula 2*3.14*r

//#include<iostream>
//using namespace std;
//int  main(){
//	int r;
//	float circle;
//	cout<<"enter the radius";
//	cin>>r;
//	circle=2.0*3.141*r;
//	cout<<"circumference = "<<circle;
//	return 0;
//}


//3.3
//a program that input the radius of a circle and display thr circumference by using formula 2PIr 
//the program should use define directive to store the value  of pi


//#include<iostream>
//using namespace std;
//#define PI 3.141
//int  main(){
//	int r;
//	float circle;
//	cout<<"enter the radius";
//	cin>>r;
//	circle=2.0*3.141*r;
//	cout<<"circumference = "<<circle;
//	return 0;
//}


//operator= perform certain ooperation
//types= arithmetic, relationa;l,logical
//categorized
//unary = single operrand a- a++;
//binary = two operand eg.a+b

//arithmetic operator = + - // * %;
//arithmeic expression a+b;
//assignment operator  assign value to a variable




//3.4
//perform all mathematical operation on two variables
//#include<iostream>
//using namespace std;
//int main(){
//	int a =10;
//	int b =5;
//	cout<<"a+b= "<<a+b<<endl;
//	cout<<"a-b= "<<a-b<<endl;
//	cout<<"a*b= "<<a*b<<endl;
//	cout<<"a/b= "<<a/b<<endl;
//	cout<<"a%b= "<<a%b<<endl;
//	return 0;
//}



//3.5
//perform all compound assignmnent operations on an integer
//#include<iostream>
//using namespace std;
//int main(){
//	int a = 10;
//	cout<<"the value of a is "<<a<<endl;
//	a+=5;
//	cout<<"value of a after a=a+:5"<<a<<endl;
//	return 0;
//}


//3.6
//a programm  that explain the difference of postfix operator
// and prefix increment opertaor  used as independent expression

//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,x,y;
//	a=b=x=y=0;
//    a++;
//    b=a;
// 	cout<<"a="<<a<<endl;
// 	cout<<"b="<<b<<endl;
//    x++;
//    y=x;
//    cout<<"x="<<x<<endl;
//    cout<<"y="<<y<<endl;
// 	return 0;
//}


//3.7
//a programm  that explain the difference of postfix operator
// and prefix increment opertaor  used as a larger expression


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,x,y;
//	a=b=x=y=0;
//    b=a++;
//    y=++x;
// 	cout<<"a="<<a<<endl;
// 	cout<<"b="<<b<<endl;
//    cout<<"x="<<x<<endl;
//    cout<<"y="<<y<<endl;
// 	return 0;
//}









//3.8
//a programm  that explain the difference of postfix  decrement operator
// and prefix decrement opertaor  used as independent expression


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,x,y;
//	a=b=x=y=0;
//    a--;
//    b=a;
// 	cout<<"a="<<a<<endl;
// 	cout<<"b="<<b<<endl;
//    x--;
//    y=x;
//    cout<<"x="<<x<<endl;
//    cout<<"y="<<y<<endl;
// 	return 0;
//}



//3.7
//a programm  that explain the difference of postfix operator
// and prefix increment opertaor  used as a larger expression


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,x,y;
//	a=b=x=y=0;
//    b=a--;
//    y=--x;
// 	cout<<"a="<<a<<endl;
// 	cout<<"b="<<b<<endl;
//    cout<<"x="<<x<<endl;
//    cout<<"y="<<y<<endl;
// 	return 0;
//}





//operator precedence
//! logical not
//*/% mul div
//+ -  add sub
//< <= > >= relational oper
//== !=  relat oper
//&& logical and
//|| logical or
//+= -+ *= /= %=  compound assignmnt
//= assignmnt operator




//increment and decrement operator


//#include<iostream>
//using namespace std;
//int main(){
//	int a=10;
//	 a++;
//	 cout<<a<<endl;
//	 a--;
//	 cout<<a<<endl;
//	 a++;
//	 cout<<a<<endl;
//	 cout<<a<<endl;
//	 a++;
//	cout<<a<<endl;
//    ++a;
//    cout<<a<<endl;
//    ++a;
//    cout<<a<<endl;
//    a++;
//    cout<<a<<endl;
//	
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//int main(){
//	int b=5;
//	 b++;
//	 cout<<b<<endl;
//	 b--;
//	 cout<<b<<endl;
//	 b++;
//	 cout<<b<<endl;
//	 b--;
//	 cout<<b<<endl;
//	 --b;
//	cout<<b<<endl;
//    ++b;
//    cout<<b<<endl;
//    ++b;
//    cout<<b<<endl;
//	return 0;
//}
//



//#include<iostream>
//using namespace std;
//int main(){
//	int c=6;
//	 c--;
//	 cout<<c<<endl;
//	 c++;
//	 cout<<c<<endl;
//	 c--;
//	 cout<<c<<endl;
//	 c--;
//	 cout<<c<<endl;
//	 c++;
//	cout<<c<<endl;
//    c--;
//    cout<<c<<endl;
//    --c;
//    cout<<c<<endl;
//	return 0;
//}




//#include<iostream>
//using namespace std;
//int main(){
//	int a=21;
//	int b=4;
//	cout((2.14)a / (3.1)b);
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int main(){
//  int a=2;
//  int b=3;
//  int c=5;	
//  b=a++ + b++;
//  cout<<a<<b<<c;
//  	
//}



//#include<iostream>
//using namespace std;
//int main(){
//	int x=3;
//	cout<<x;
//	cout<<x++;
//	cout<<++x;
//	return 0;
//}
//
//













//chapter 4
//display a msg and value of integer and charcter variable
//#include<iostream>
//using namespace std;
//int main(){
//	int a=10;
//	char ch='+';
//   cout<<"the  output is ";
// 	cout<<a;
//	cout<<ch;
//	return 0;
//}



//add two float nummbers and also sum
//#include<iostream>
//using namespace std;
//int main()
//{
//	float a= 10.5;
//	float b= 4.5;
//	float r;
//	r=a+b;
//	cout<<r;
//	return 0;
//}

////calculate and print the area of  rectangle with height and width
//#include<iostream>
//using namespace std;
//int main(){
//	float w,a,h;
//	cout<<"enter the height"<<endl;
//	cin>>h;
//	cout<<"enter the width"<<endl;
//	cin>>w;
//	a=h*w;
//	cout<<"the area of rectangle is "<<a;
//	return 0;
//}





///a
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"hello \aworld";
//}

///b
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"hello\bworld";
//}

//\f
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"hello \fworld";
//}

///n
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"hello \nworld";
//}



//\r
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"hello \rworld";
//}
//




//\t
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"hello \tworld";
//		
//}



////\`
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"helloworld";
//}
//#include<iostream>
//using namespace std;
//int main(){
//	cout<<"hello \aworld";
//}


