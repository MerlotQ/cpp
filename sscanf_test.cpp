#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string>
#include<cstdio>

using namespace std;

int main(int argc, char** argv){


char sentence[] = "1.3 1.2 20.0 2.0 2.0";
char str [20];
char str1 [20];
float i1, i2, i3, i4, i5;

 sscanf(sentence, "%f %f %f %f %f", &i1, &i2, &i3, &i4, &i5);
 printf("%f -> %f -> %f\n", i1, i2, i3);

 const char *filename = argv[1];
 cout<< "The imported file is "<<filename <<endl;
 string line;
 ifstream infile;
 double ts, d[3];
 infile.open ( filename );
 if ( infile.is_open() ) cout<<"File is opened successfuly" <<endl;

 char format[266];
 sprintf ( format,"%%lf %%lf %%lf %%lf" );


    int l = 0;
    while ( getline ( infile,line ) )
    {
      int res = sscanf ( line.data(), format, &ts, &d[0], &d[1], &d[2] );
      if ( res != 4 )
      {
        cout<<"importAsciiData(): error importing data in line "<<l<<", exit"<<endl;
      }
     /* else
      {
        ts /= unit;
        samples.push_back ( TriadData_<_T> ( _T ( ts ), _T ( d[0] ), _T ( d[1] ), _T ( d[2] ) ) );
      } */
      l++;
    } //while
    infile.close(); cout<<"There are "<<l<<" sample points" <<endl;

 return 0;

}









