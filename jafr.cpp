#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;


int randomnumber(int from, int to){

int randnumber = rand() % (to-from+1)+from;
return randnumber; }


void fillarya(int arri[100],int &arrlength){
cout << "Enter number of elemants you want: ";
cin >> arrlength;
cout << endl;
for (int i=0;i<arrlength;i++)
    {arri[i]=randomnumber(-100,100);}}



    int countpositivenumbers(int arri[100],int arrlength){
    int counter=0;
    for (int i=0;i<arrlength;i++)
        if(arri[i]>0){
        counter++;
    }
    return counter; }



 void printarri(int arri[100],int arrlength){
for(int i=0;i<arrlength;i++)

    cout << arri[i] << " ";
    cout << "\n"; }


    int main(){

int arri[100],arrlength=0;

fillarya(arri,arrlength);


printarri(arri,arrlength);
cout << "\nnumber of positive numbers in this array: " << countpositivenumbers(arri,arrlength);

return 0;}
