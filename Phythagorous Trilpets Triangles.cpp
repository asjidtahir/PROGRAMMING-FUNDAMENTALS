#include<iostream>

using namespace std ;
int main()

    {

    float s1,s2,s3;
    double i,j,k;

    cout<<"Enter the length of base of triangle: ";
    cin>>s1;
    cout<<"Enter the length of perpendicular of triangle: ";
    cin>>s2;
    cout<<"Enter the length of hypotenuse of triangle: ";
    cin>>s3;
    for(i=1;i<=s1;i++)
    {
    i=s1;
    for(j=1;j<=s2;j++)
    j=s2;
    for(k=1;k<=s3;k++)
    k=s3;
    if(s1*s1+s2*s2==s3*s3)
    cout<<s1<<", "<<s2<<" and "<<s3<<" sides satisfy the pythogorean triples"<<endl;
    else
    cout<<"Do not satisfy the puthagorean triples"<<endl;
    }
    //getch();
    system ("pause");
    return 0 ;
    }

