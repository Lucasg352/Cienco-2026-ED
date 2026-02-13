#include <iostream>
#include <locale>

using namespace std;

int main()

{
 setlocale(LC_ALL, "Portuguese");
 int idade;


 cout <<"Digite a idade do nadador:";
 cin >>idade;

 if (idade <8 ){
    cout <<"Infantil A"<<endl;

 }else if(idade <11 ){
 cout <<"Infantil B" <<endl;

 }else if (idade <14){
 cout <<"Juvenil A"<<endl;

 }else if (idade <18){
 cout <<"Juvenil B"<<endl;


 }else if(idade >17){
cout <<"Senior"<<endl;


 }else{

 cout <<"Idade INVÁLIDA"<<endl;
 }



}
