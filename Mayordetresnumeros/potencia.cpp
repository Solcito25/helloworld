#include <iostream>
using namespace std;
/*int main(){
  int a;
  int e=1;

  cin>>a;

 while(e<a){
    e=e*2;
 }
 if (e == a)
        cout<<"Es potencia de dos";
 else
        cout<<"No es potencia de dos";
 return 0;


 }
 /*int main(){
 int a;
 float c;
 float b=2;
 cin>>a;
  while(b<a)
    c = a%b
    b=b+1
*/

int main (){
	int a,d,c=0,e=0;
	int b=1;
    cin>>a;
    while(b<a){
        d=a%b;
        b=b+1;
        //cout<<"modulo"<<d<<endl;
        if (d !=0){
           c=c+1;
         //  cout<<"residuo"<<d<<endl;
        }
        if (d==0) {
            e=e+1;
         //   cout<<"ceros"<<e<<endl;
        }

    }
    if (c==a-2)
        cout<<"es primo"<<endl;
    else
        cout<<"no es primo"<<endl;

}

/*int main(){
int a,d,c=0,e=0;
	int b=1;
    cin>>a;

 for(b;b<a;b=b+1){
        d=a%b;

        //cout<<"modulo"<<d<<endl;
        if (d !=0){
           c=c+1;
         //  cout<<"residuo"<<d<<endl;
        }
        if (d==0) {
            e=e+1;
         //  cout<<"ceros"<<e<<endl;
        }
}
 if (c==a-2)
        cout<<"es primo"<<endl;
 else
        cout<<"no es primo"<<endl;
}*/
