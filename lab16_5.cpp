#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int x[4]={*a,*b,*c,*d};
	int Y[4]={0,0,0,0};

	for(int i =0;i<4;i++){
		Y[i]=rand()%4;
		for(int j=0;j<i;j++){
			if(Y[i]==Y[j]){
				i--;
			}
		}
	}
	*a = x[Y[0]];
	*b = x[Y[1]];
	*c = x[Y[2]];
	*d = x[Y[3]];
}
//Write definition of shuffle() using pointer here 
