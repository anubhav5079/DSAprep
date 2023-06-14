// #include <iostream>
// using namespace std;
// int main(){
// string s;
// getline(cin,s);
// cout<<s;
// return 0;
// }


//IF ELSE
// #include <iostream>
// using namespace std;
// int main(){
//     int s;
//     cout<<"Enter the age of the person"<<"\n";
//     cin>>s;
//     if(s>=18){
//         cout<<"You are an adult now "<<"\n";
//     }
//     else{
//         cout<<"You are a kid "<<"\n";
//     }
// return 0;
// }


//IF ELSE
// #include <iostream>
// using namespace std;
// int main(){
//     int s;
//     cout<<"Enter your marks"<<"\n";
//     cin>>s;
//     if(s<25){
//         cout<<"Your grade is F"<<"\n";
//     }
//     else if(s>=25 && s<=44){
//         cout<<"Your grade is E"<<"\n";
//     }
//     else if(s>=45 && s<=49){
//         cout<<"Your grade is D"<<"\n";
//     }
//     else if(s>=50 && s<=59){
//         cout<<"Your grade is C"<<"\n";
//     }
//     else if(s>=60 && s<=79){
//         cout<<"Your grade is B"<<"\n";
//     }
//     else if(s>=80 && s<=100){
//         cout<<"Your grade is A"<<"\n";
//     }
//     else{
//         cout<<"Invalid Marks"<<"\n";

//     }
// return 0;
// }


//IF ELSE
// #include <iostream>
// using namespace std;
// int main(){
//     int s;
//     cout<<"Enter the age of the employee"<<"\n";
//     cin>>s;
//     if(s<18){
//         cout<<"not eligible for job";
//     }
//     else if (s>=18 && s<55)
//     {
//         cout<<"eligible for job";
//     }
//     else if(s>=55 && s <= 57){
//         cout<<"eligible for job, but retirement soon.";
//     }
//     else {
//         cout<<"retirement time";
//     }
// return 0;
// }


//IF ELSE
// #include <iostream>
// using namespace std;
// int main()
// {
//     int s;
//     cout << "Enter the age of the employee"
//          << "\n";
//     cin >> s;
//     if (s < 18)
//     {
//         cout << "not eligible for job";
//     }
//     else if (s >= 18 )
//     {
//         cout << "eligible for job";
//         if (s >= 55 && s <= 57)
//         {
//             cout << ", but retirement soon.";
//         }
//         if(s>57)
//         {
//             cout << ", retirement time";
//         }
//     }

//     return 0;
// }



//SWITCH
// #include <iostream>
// using namespace std;
// int main(){
//     int s;
//     cout<<"Enter the day"<<"\n";
//     cin>>s;
//     switch (s)
//     {
//     case 1:
//         cout<<"Monday";
//         break;
    
//     case 2:
//         cout<<"Tuesday";
//         break;
    
//     case 3:
//         cout<<"Tuesday";
//         break;
    
//     case 4:
//         cout<<"Thursday";
//         break;
    
//     case 5:
//         cout<<"Friday";
//         break;
    
//     case 6:
//         cout<<"Saturday";
//         break;
    
//     case 7:
//         cout<<"Sunday";
//         break;
    
//     default:
//     cout<<"Invalid"<<"\n";
//         break;
//     }
// 
// return 0;
// }


//TAKING MATRIX IN 2D
// #include <iostream>
// using namespace std;
// int main(){
//     int m=3,n=2;
//     cout<<"Enter matrix dimension "<<"\n";
//     cin>>m>>n;
//     int arr[m][n];

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<"Enter the value of disp["<<i<<"]["<<j<<"] ";
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//             if(j==m){
//             cout<<endl;
//             }
            
//         }
//         cout<<endl;
//     }  
// return 0;
// }

//FUNCTION  PARAMETERISED FUNCTION
// #include <iostream>
// using namespace std;
// void printname(string name){
//     //When we give the data type of the fn. it parameterized
//     cout<<"Hey "<< name <<endl;
// }
// int main(){
//     string a;
//     cin>>a;
//     printname(a);
// return 0;
// }



// #include <iostream>
// using namespace std;

// void sum(int a,int b){
//     cout<<"The output is " <<a+b<<endl;
// }
// int main(){
//     int s,r;
//     cout<<"Enter the two numbers ";
//     cin>>s>>r;
//     sum(s,r);

// return 0;
// }


// MINIMUM AND MAXIMUM
// #include <iostream>
// using namespace std;
// void maxmin(int a, int b){
//     int s=min(a,b);
//     int r=max(a,b);
//     cout<<"The minimum value is "<<s<<" and the maximum value is "<<r<<endl;
// }
// int main(){
//     int p,q;
//     cout<<"Enter two numbers"<<endl;
//     cin>>p>>q;
//     maxmin(p,q);

// return 0;
// }
