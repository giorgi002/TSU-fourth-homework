// first task 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     double A,B,distance;
//     cout << "enter the x coordinate of A\n";
//     cin >> A;
//     cout << "enter the x coordinate of B\n";
//     cin >> B;
//     distance = abs(A - B);
//     cout << "the distance is equal to " << distance << endl;
// }


// second task 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     double x1 = -1.5, y1 = 2.0;
//     double x2 = 1, y2 = -2.5;
//     double distance = sqrt(((x2 -x1) * (x2-x1)) + ((y2-y1) * (y2 - y1)));
//     cout << "distance between two points is equal to " << distance <<endl;
// }



// third task 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     double x1 = -1.5, y1 = 2.0, z1 = 1.2;
//     double x2 = 1, y2 = -2.5, z2 = 0.5;
//     double distance = sqrt(((x2 -x1) * (x2-x1)) + ((y2-y1) * (y2 - y1)) + ((z2-z1) * (z2-z1)));
//     cout << "distance between two points is equal to " << distance <<endl; 
// }



// fourth task 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     double x1 = 2, y1 = 3;
//     double x2 = 1, y2 = -2.5;
//     double x3 = 4, y3 = 0.5;
//     double dis1 =  sqrt(((x2 -x1) * (x2-x1)) + ((y2-y1) * (y2 - y1)));
//     double dis2 =  sqrt(((x3 -x2) * (x3-x2)) + ((y3-y2) * (y3 - y2)));
//     double dis3 =  sqrt(((x3 -x1) * (x3-x1)) + ((y3-y1) * (y3 - y1)));
//     if(dis1 < dis2+dis3 && dis2 < dis1 + dis3 && dis3 < dis1 + dis2){
//         double p = (dis1 + dis2 + dis3)/ 2;
//         double s = sqrt(p*(p-dis1)*(p-dis2)*(p - dis3));
//         cout << "area is equal to " << s << endl;
//     } else {
//         cout << "this size of triangle doesnt exist " << endl;
//     }
// }



// fifth task 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     double x = 2.1;
//     double res = 2 * pow(x,5) + 3 *  pow(x,3) -7;
//     cout << "the result is " << res << endl;
// }


// sixth task 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     int year;
//     cout << "enter year\n";
//     cin >> year;
//     if(year%4 ==0 && year%100 !=0 || year% 400 ==0){
//         cout << year << " is leap year \n";
//     } else{
//         cout << year << " is not leap year \n";
//     }
// }



// seventh task 👇(1) 
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     int n,m;
//     cout << "type one integer ";
//     cin >> n;
//     switch(n){
//         case 1: m = n + 1; cout << "m = " << m <<endl; break;
//         case 2: m = 3 * n ; cout << "m = " << m <<endl; break;
//         default : m = n /5 ; cout << "m = " << m <<endl; break;
//     }
// }


// seventh task 👇(2)
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     int n,m;
//     cout << "type one integer ";
//     cin >> n;
//     switch(n){
//         case 1: m = n + 1; break;
//         case 2: m = 3 * n;
//         default: m = n / 5;
//     }
//     cout << "m = " << m << endl;
// } 


// seventh task 👇(3)
// #include <iostream>
// using namespace std;
// int main(){
// 	int n, m;
// 	cout << "Type one integer ";
// 	cin >> n;
// 	switch (n)	{
// 		case 1: m = n + 1; 
// 		case 2: m = 3 * n;   break;
// 		default: m = n / 5;
// 	}
// 	cout << "m = " << m << endl;
// }



// seventh task 👇(4)
// #include <iostream>
// using namespace std;
// int main(){
// 	int n, m;
// 	cout << "Type one integer ";
// 	cin >> n;
// 	switch (n)	{
// 	    default: m = n / 5;  break;
// 	    case 1: m = n + 1;  break;	   
// 	    case 2: m = 3 * n;  break;		
// 	}
// 	cout << "m = " << m << endl;
// }


// seven task 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
// int n, m;
// cout << "n = ";
// cin >> n;
// switch(n + 1){
//     case 5: m = 3 * n + 1 % 5; cout << "m = " << m << endl; break;
//     case 3: m = (n + 5)/ 2 - 1; cout << "m = " << m << endl; break;
//     default: m = 10 + n * 2;  cout << "m = " << m << endl; break;   
// }
// }


// task eight 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     int a,b,d;
//     cout << "type two integers\n";
//     cin >> a >> b;
//     switch( 2 * a + b){
//         case 8: d = a % b + 10; break;
//         case 10:
//         case 11: d  = a/2 + 3 * b%5; break;
//         default: d = a + (b +=3); break;
//     } 
//     cout << "d = " << d <<  endl;
// } 



// task nine 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     int a,b;
//     char op;
//     cout << "enter two integer numbers\n";
//     cin >>a >>b;
//     cout <<"enter arithmetic operation \n";
//     cin >> op;
//     switch(op){
//         case '+': cout << a + b << endl; break;
//         case '-': cout << a - b << endl; break;
//         case '*': cout << a * b << endl; break;
//         case '/': cout << a + b << endl; break;
//         default: cout << "this kind of operation is not valid\n ";break;
//     }
// }



// task ten 👇
// #include <iostream>
// using namespace std;
// int main() {	   
//    const double cm_per_inch = 2.54; // number of centimeters in an inch
//    int length;  // length in inches or centimeters
//    char unit;
//    cout << "Please enter a length followed by a letter (c or i):\n";
//    cin >> length >> unit;
//    switch (unit) {
//        case 'i' :
//           cout << length << " in == " << cm_per_inch*length << " cm\n";
//           break;
//        case 'c' :
//           cout << length << " cm == " << length/cm_per_inch << " in\n";
//           break;
//        default:
//           cout << "Sorry, I don't know a unit called '" << unit<< "'\n";
//           break;
//    }
// }



// task eleven 👇
// #include <iostream>
// using namespace std;
// #include <string>
// int main(){
//     string traffic_light;
//     cout << " what color is on a traffic\n";
//     cin >> traffic_light;
//     switch(traffic_light[0]){
//         case 'Y': cout << "Be ready\n"; break;
//         case 'R': cout << "Stop\n"; break;
//         case 'G': cout << "Go\n";
//     }
// }



// task twelve 👇
// #include <iostream>
// using namespace std;
// #include <string>
// int main(){
//     string month;
//     cout << "enter any month\n";
//     cin >> month;
//     if(month == "December" || month == "January" || month =="February"){
//         cout << "it is the season of winter\n";
//     } else if( month == "March" || month == "April" || month =="May"){
//         cout << "it is the season of spring\n";
//     } else if(month == "June" || month == "July" || month =="August"){
//         cout << "it is the season of summer\n";
//     } else if(month == "September" || month == "October" || month =="November"){
//         cout << "it is the season of autumn\n";
//     } else{
//         cout << "invalid month\n";
//     }
//     }



// task thirteen 👇
// #include <iostream>
// using namespace std;
// int main(){
//     double amount,convert;
//     char letter;
//     cout << "enter amount in GEL: ";
//     cin >> amount;
//     cout << "Enter the first letter of currency\n" 
//             "you wish to convert to (D, E or P): ";
//     cin >> letter;
//     switch(letter){
//         case 'D': convert = amount * 0.373106; cout << amount << "GEL ==" << convert << " US DOLLAR\n"; break;
//         case 'E': convert = amount * 0.35591; cout << amount << "GEL ==" << convert << " EURO\n"; break;
//         case 'P': convert = amount * 0.309224; cout << amount << "GEL ==" << convert << " BRITISH POUND \n"; break;
//         default: cout << "Unknown currency unit called" << letter << "\n";
//     }
// }


// task fourteen 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     double a,b,c,d,x1,x2;
//     cout << "enter three numbers for coeficients\n";
//     cin >> a >> b>>c;
//     if(a == 0){
//         cout << " \na=0, kvadratuli gantoleba ar gvaqvs. "
//           	    "sheitanet koreqtuli monacembi\n";
//                 return 0;
//     }
//     d = b * b - 4*a*c;
//     if(d == 0){
//         x1= -b/ (2*a);
//         cout << "\ngantolebis amonaxsnebia: x1 = x2 = " << x1 << '\n';
//         return 0;
//     }
//     if(d < 0){
//         cout << "\ngantolebas namdvili amonaxsni ar gaaCnia\n";
// 	    return 0;
//     }
//     x1 = (-b + sqrt(d)/(2*a));
//     x2 = (-b - sqrt(d)/(2*a));
//     cout << "\ngantolebis amonaxsnebia:  " 
//            "x1 = " << x1 << '\t' << "x2 = " << x2 << '\n';
//    return 0;
//     }



// task fourteen 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     int x;
//     cout << "enter number\n";
//     cin >> x;
//     switch(x){
//         case 1 : cout << "you got gold medal\n"; break;
//         case 2 : cout << "you got silver medal\n"; break;
//         case 3 : cout << "you got bronze medal\n"; break;
//         default: cout << "unfortunetally, you didn't get medal\n";
//     }
// }


// task fifteen 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     int a,b,c,d;
//     cout << "enter three integers\n";
//     cin >> a >> b >> c;
//     switch(a-c){
//         case 3: d = a%b+10; break;
//         case 6: d = a+b-b/4; break;
//         case 9: d = a-b+2*c; break;
//     }
//     cout << d << endl;
// }



// task sixteen 👇
// #include <iostream>
// using namespace std;
// #include <cmath>
// int main(){
//     int x,y,u;
//     cout << "enter two numbers\n";
//     cin >> x >> y;
//     switch(x+ 2*y){
//         case 1: u = 3 * x -y;break;
//         case 2: u = y - x;break; 
//         case 3: u = x + y ;break; 
//         default: u = x - y; break;
//     }
//     cout << "u = " << u << "\n";
// }



// TWELVE ვერ გავიგე !!!!!!!!!
// TWELVE ვერ გავიგე !!!!!!!!!
// TWELVE ვერ გავიგე !!!!!!!!!
// TWELVE ვერ გავიგე !!!!!!!!!


