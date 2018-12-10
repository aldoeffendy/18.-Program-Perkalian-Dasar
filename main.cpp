#include <iostream>

int main(){
	int perkalian, n,batas;  // deklarasi variabel
	std::cout <<"perkalian = ";
	std::cin>> perkalian; //input nilai
	std::cout<<"sampai dengan = ";  //masukan batas
	std::cin>>batas ;
	std::cout<< std::endl;   //memindahkan line satu baris kebawah
	for (n=1; n<=batas; n++) //perulangan
		std::cout<<perkalian<<"x"<<n<<"="
	<<perkalian*n<< std::endl;  //operasi perkalian dilakukan
	return 0;

}
