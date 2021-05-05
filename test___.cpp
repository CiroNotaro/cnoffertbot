                                                                   //calcola somma e media, minimo e massimo elementi di un vettore//
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	double somma=0;
	double media;
	int max;
	
	cout<<"inserisci cardinalita': ";
	cin>>max;
	int v[max];//dichiarazione  vettore
	for(int i=0; i<max; i++)//carico  vettore
	{
		cout<<"inserisci valore elemento";
		cin>>v[i];
		
		
	}
		
		for(int i=0; i<max; i++)//minimo e massimo e somma
	{ 

	    somma+=v[i];
 		
	}
	media=somma/max;
	cout<<"media: "<<media<<endl;
	cout<<"somma: "<<somma<<endl;	

	system("pause");
	return 0;								
}
                                         //calcola somma mdia minoimo e massimo vettore
//calcola somma e media, minimo e massimo elementi di un vettore//
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	int somma=0;
	double media;
	int max;
	
	cout<<"inserisci cardinalita'";
	cin>>numelementi;
	int v[numelementi];//dichiarazione  vettore
	for(int i=0; i<numelementi; i++)//carico  vettore
	{
		cout<<"inserisci valore elemento";
		cin>>v[i];
		
		
	}
		
		for(int i=0; i<numelementi; i++)//minimo e massimo e somma
	{ 

	    somma+=v[i];
		if(v[i]>max){
			max=v[i];
			
		}else if(v[i]<min){
			min=v[i];
		}
		
	
		
	}
	media=somma/numelementi;
	cout<<"media"<<media<<endl;
	cout<<"somma"<<somma<<endl;	
	cout<<"massimo "<<max<<endl;
	cout<<"minimo"<<min<<endl;
	system("pause");
	return 0;								
}
                                                 //Left shift vettore//
                  
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{ 
int qtshift;
	int max;
	cout<<"quante volte shiftare?";
	cin>>qtshift;
	cout << "Inserisci cardinalita': ";
	cin >> max;
	
	int v[max];
	
	for(int i = 0; i < max; i++)
	{
		cout << "Inserisci il numero di cella ["<<i<<"]"<<": ";
		cin >> v[i];
	}
	for(int i=0; i<qtshift; i++)
	{
		int temporanea = v[0];
	
	
									for(int i = 0; i < max-1; i++)
									{
										v[i] = v[i+1]; 
									}
	v[max-1] = temporanea;           
	}
	cout<<"vettore shiftato: ";
	for(int i = 0; i < max; i++)
	{
		cout << v[i];
	}
	cout<<endl;
	system("pause");
	return 0;
}

                                                        //right shift vettore//

 #include <iostream>
#include <stdio.h>

using namespace std;

int main()
{ 
	int qtshift;
	int max;
	cout<<"quante volte shiftare?";
	cin>>qtshift;
	cout << "Inserisci massimo: ";
	cin >> max;
	
	int v[max];
	
	for(int i = 0; i < max; i++)
	{
		cout<<"inserisci elemento di indice "<<i<<" nell'array : ";
		cin >> v[i];
	}
	cout<<"stampa vettore: "<<endl;
	for(int i = 0; i < max; i++)
	{
		
		cout<< v[i];
	}
	for(int i=0; i<qtshift; i++)
	{
		int temporanea = v[max-1];
	
	
									for(int i = max-1; i >= 0; i--)
									{
										v[i+1] = v[i]; 
									}
	v[0] = temporanea;           
	}
	cout<<endl;
		cout <<"vettore shiftato: "<<endl;
	for(int i = 0; i < max; i++)
	{
		cout << v[i];
	}
	cout<<endl;
	system("pause");
	return 0;
}
           
                                               //Verificare se un vettore contiene tutti elementi uguali.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	int max;
	bool uguali=true;
	cout<<"inserire cardinalita' vettore: ";
	cin>>max;
	int v[max];//dichiarazione vettore
	int vet[max];


	for(int i=0;i<max;i++)//caricamento il vettore
	{
		cout<<"inserisci elemento "<<i<<"nell'array : ";
		cin>>vet[i];
		cout<<endl;
		
		
    }
    /* NEL CICLO FOR SI CONFRONTA OGNI CELLA DEL VETTORE 
	CON LA CELLA PRECEDENTE. LA CELLA CON INDICE 0  
	NON PUO’ ESSERE CONFRONTATA CON LA CELLA PRECEDENTE (I -1).*/
/*	for(int i=1;i<max;i++)
	{ 
			if (vet[i] != vet[i-1] )
			{        // se le due celle contengono valore diverso, il booleano è falso" 
			uguali=false ;
			i=max;
			} 
	}
	/* STAMPA IL RISULTATO */
	if (uguali==true)
	{
	cout<<("La sequenza contiene numeri tutti uguali\n") ;
	}
	else 
	{
	 cout<<("La sequenza non contiene numeri tutti uguali\n") ;
	}
	

	system("pause");
	return 0;
}                       
                                                                                 //matrice trasposta//
                                                                                
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	
	int r;
	int c;
	cout<<"inserisci qt righe:";
	cin>>r;
	cout<<"inserisci qt colonne:";
	cin>>c;
	int vet[r][c];
	int v[r][c];
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{	
			v[j][i]=0;
			
				
		}
	}
		for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<v[i][j]<<"\t";	
		}
		cout<<endl;
	}
	
				for(int i=0; i<r; i++) 
			{
				for(int j=0; j<c; j++)
				{	
					cout<<"inserire numero: "<<"cella "<<i<<" "<<j<<" ";
					cin>>v[i][j];
					cout<<"\t";
					cout<<endl;
						
				}
			}
			cout<<"matrice: "<<endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<v[i][j]<<"\t";	
		}
		cout<<endl;
	}
	
 
 cout<<"\nCalcoliamo la matrice trasposta \n";
		for (int i=0;i<r;i++)
		{
		 
		    for(int j=0;j<c;j++) {
		        vet[j][i]=v[i][j];
		    }
		}
			for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<vet[i][j]<<"\t";	
		}
		cout<<endl;
	}
		
			system("pause");
	return 0;
}

                                                         //stampa matrice//
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	int r;
	int c;
	cout<<"inserisci qt righe:";
	cin>>r;
	cout<<"inserisci qt colonne:";
	cin>>c;
	int mat[r][c];
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{	
			mat[j][i]=0;
			
				
		}
	}
				for(int i=0; i<r; i++)
			{
				for(int j=0; j<c; j++)
				{	
					cout<<"inserire numero: "<<"cella "<<i<<" "<<j<<":  ";
					cin>>mat[i][j];
					cout<<"\t";
					cout<<endl;
						
				}
			}
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<mat[i][j]<<"\t";	
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
/*dichiarare un array di interi di 10 elementi, popolare ciascun elemento con indice pari compreso lo zero con il numero 0 e quelli con l'indice dispari con il numero 1*/

#include <iostream>
#include <stdio.h>
using namespace std;
main(){
	int max;
	cout<<"inserire cardinalita' vettore: ";
	cin>>max;
	int v[max];//dichiarazione vettore



	for(int i=0;i<max;i++)//caricamento il vettore
	{
		 	
		 
		  if(i%2==0)
		  { //l'elemento da considerare è pari allora:
		  	v[i]=0;	
		  }else //se l'elemento da considerare è dispari allora:
		   {
				v[i]=1;
	}
		
		
		
    }
    //stampa vettore
	for(int i=0;i<max;i++)
	{ 
			cout<<"l'elemento di posizione "<<i<<" \212 "<<v[i]<<endl;;
	}
	

	system("pause");
	return 0;
}


//shift a destra e a sinistra

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{ 
while(true)
{

    int qtshift,max,vleft[max],vright[max],direzione;
	
	cout<<"quante volte shiftare?";
	cin>>qtshift;
	cout << "Inserisci cardinalita': ";
	cin >> max;


	
	for(int i = 0; i < max; i++)
	{
		cout << "Inserisci il valore della cella ["<<i<<"]"<<": ";
		cin >> vright[i];//carico array
	vleft[i]=vright[i];
	}
	cout<<"inserire direzione shift( 1=SINISTRA, 2=DESTRA): ";
	cin>>direzione;
	switch(direzione){
			case 1:	
			for(int i=0; i<qtshift; i++)
			{
				int temporanea = vleft[0];
	
	
											for(int i = 0; i < max-1; i++)
											{
												vleft[i] = vleft[i+1]; 
											}
			vleft[max-1] = temporanea;           
			}
			for(int i = 0; i < max; i++)
			{
				cout << vleft[i] << endl;
			}
			break;
		case 2:
		for(int i=0; i<qtshift; i++)
			{
				int temporanea = vright[max-1];
	
	
											for(int i = max-1; i >= 0; i--)
											{
												vright[i+1] = vright[i]; 
											}
			vright[0] = temporanea;           
			}
	
			for(int i = 0; i < max; i++)//stampa
			{
				cout << vright[i] << endl;
			}break;
					default:
					cout<<"errore (  inserire 1 per shift verso sinistra o inserire 2 per shift verso destra)";
		    }
		    system("pause");
		    system("cls");
}
	system("pause");
	return 0;
}
 
                                         //somma di due matrici//
 
 #include <iostream>
#include <stdio.h>
using namespace std;
main(){
	while (true){
	
	int r;
	int c;
	cout<<"inserisci qt righe prima matrice:";
	cin>>r;
	cout<<"inserisci qt colonne prima matrice:";
	cin>>c;
	int r1;
	int c1;
	cout<<"inserisci qt righe seconda matrice:";
	cin>>r1;
	cout<<"inserisci qt colonne seconda matrice:";
	cin>>c1;
	
	float vet[r][c];
	float v[r1][c1];
	float somma[r][c];
	if(r==r1&&c==c1)
			{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{	
				cout<<"inserire numero: "<<"cella "<<i<<" "<<j<<" della prima matrice:  ";
					cin>>vet[i][j];
						cout<<endl;
				
		}
	}
		
	
				for(int i=0; i<r1; i++) 
			{
				for(int j=0; j<c1; j++)
				{	
					cout<<"inserire numero: "<<"cella "<<i<<" "<<j<<" della seconda matrice:  ";
					cin>>v[i][j];
					cout<<"\t";
					cout<<endl;
						
				}
			}
			
			
			cout<<"prima matrice: "<<endl;
	for(int i=0; i<r; i++)//
	{
		for(int j=0; j<c; j++)
		{
			cout<<vet[i][j]<<"\t";	
		}
		cout<<endl;
	}
			cout<<"seconda matrice: "<<endl;
	for(int i=0; i<r; i++)//
	{
		for(int j=0; j<c; j++)
		{
			cout<<v [i][j]<<"\t";	
		}
		cout<<endl;
	}
	
 
 cout<<"\nCalcoliamo la somma \n";
		for (int i=0;i<r;i++)
		{
		 
		    for(int j=0;j<c;j++) {
		        somma[i][j] = vet[i][j]+v[i][j];
		    }
		}
			for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<somma[i][j]<<"\t";	
		}
		cout<<endl;
	}
		}	
		else
		{
			cout<<"la somma tra le 2 matrici non si puo' fare! Devono avere la stessa cardinalita'!"<<endl;
		}	
		 system("pause");
		    system("cls");	
			
			
			}
			system("pause");
	return 0;
}
                                         //cramer 2x2
                                          
#include <iostream>//cramerserve alla risoluzione di un sistema equazioni lineari(di primo grado) vediamo un'esempio
#include <stdio.h>

using namespace std;

int main()
{
	while(true){
	
	
	float mat1[2][2];//matrice per calcolo d
	float mat2[2][2]; //Matrice per calcolo dx
	float mat3[2][2]; //Matrice per calcolo dy
	
	for(int i = 0; i < 2; i++)//caricamento delle 3 matrici tramite 2 for annidati: il primo "scorre" le righe e il secondo le colonne
	{
		for(int j = 0; j < 2; j++)
		{
				cout<<"inserire numero: "<<"cella "<<i<<" "<<j<<" ";//chiediamo all'utente di inserire il numero di riga i e colonna j
			cin >> mat1[i][j];//l'utente inserisce il numero di riga i e colonna j
			mat2[i][j] = mat1[i][j];//mettiamo in posizione riga i, colonna j di mat 2 l'elemento di mat 1 alla posizione: riga i, colonna:j 
			mat3[i][j] = mat1[i][j];//mettiamo in posizione riga i, colonna j di mat 3 l'elemento di mat 1 alla posizione: riga i, colonna:j 
		}
	}//ora abbiamo 3 matrici uguali ma le ultime 2 dovranno essere successivamente modificate tramite assegnazione
		for(int i = 0; i < 2; i++)//stampa matrice coefficienti(mat1), 
	{
		for(int j = 0; j < 2; j++)
		{
			cout << mat1[i][j] << "\t";
		}
		cout << endl;
	}
		//calcolo d(determinante) sottraendo il prodotto fra i valori della diagonale principale  e successivamente sottraendo ad esso il prodotto tra i valori della diagonale secondaria
	float d = (mat1[0][0]*mat1[1][1]) - (mat1[0][1]*mat1[1][0]);  //questo è il calcolo
	
	cout << "D = " << d << endl;//stampo il determinante
	if(d!=0){//se il determinante non è nullo
	//allora si esegue questo blocco di codice che mi calcola dx, x, dy e y. Ora vediamo come:
	
	float c1;//termini noto prima equazione
	float c2;//termini noto seconda equazione
	
	cout << "Inserisci termine noto prima equazione: ";//chiedo all'utente di inserire il termine noto della prima equazione,il valore inserito verrà messo in c1
	cin >> c1;
	
	cout << "Inserisci termine noto seconda equazione: ";//chiedo all'utente di inserire il termine noto della seconda equazione,il valore inserito verrà messo in c2
	cin >> c2;
	//sostituisco gli elementi della prima colonna con i termini noti 
	mat2[0][0] = c1;
	mat2[1][0] = c2;
		cout<<"stampa matrice 2(per calcolo dx)"<<endl;
	for(int i = 0; i < 2; i++)//stampo la matrice 2 con la prima colonna modificata
	{
		for(int j = 0; j < 2; j++)
		{
			cout << mat2[i][j] << "\t";
		}
		cout << endl;
	}
	//calcolo dx
	float dx = (mat2[0][0]*mat2[1][1]) - (mat2[0][1]*mat2[1][0]);  
	
	cout << "Dx = " << dx << endl;
	
	//sostituisco gli elementi della seconda colonna con i termini noti 
	mat3[0][1] = c1;
	mat3[1][1] = c2;
	
cout<<"stampa matrice 2(per calcolo dy)"<<endl;
		for(int i = 0; i < 2; i++)//stampo la matrice 3 con la prima colonna modificata
	{
		for(int j = 0; j < 2; j++)
		{
			cout << mat3[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;
	//calcolo dy
	float dy = (mat3[0][0]*mat3[1][1]) - (mat3[0][1]*mat3[1][0]);  
	
	cout << "Dy = " << dy << endl;
 float x=dx/d;//mi calcolo x usando la formula:detX diviso : ) determinante 
 cout<<"x= "<<x<<endl;
  float y=dy/d;//mi calcolo y usando la formula:detY diviso : ) determinante 
 cout<<"y= "<<y<<endl;
 }
 else
 { 
 	//altrimenti se il determinante è nullo...
	 cout<<"il sistema \212 impossibile o indeterminato(se anche dy=0)"<<endl;//...stampa "il sistema \212 impossibile o indeterminato(se anche dy=0)"
 } 
 system("pause");
 system("cls");
	  
}	



system("pause");
return 0; 
}
                                      //cramer 3x3//
                                      #include <iostream>
#include <stdio.h>

using namespace std;

int main()
{ 
while(true)
{

    int qtshift,max,vleft[max],vright[max],direzione;
	
	cout<<"quante volte shiftare?";
	cin>>qtshift;
	cout << "Inserisci cardinalita': ";
	cin >> max;


	
	for(int i = 0; i < max; i++)
	{
		cout << "Inserisci il valore della cella ["<<i<<"]"<<": ";
		cin >> vright[i];//carico array
	vleft[i]=vright[i];
	}
	cout<<"inserire direzione shift( 1=SINISTRA, 2=DESTRA): ";
	cin>>direzione;
	switch(direzione){
			case 1:	
			for(int i=0; i<qtshift; i++)
			{
				int temporanea = vleft[0];
	
	
											for(int i = 0; i < max-1; i++)
											{
												vleft[i] = vleft[i+1]; 
											}
			vleft[max-1] = temporanea;           
			}
			for(int i = 0; i < max; i++)
			{
				cout << vleft[i] << endl;
			}
			break;
		case 2:
		for(int i=0; i<qtshift; i++)
			{
				int temporanea = vright[max-1];
	
	
											for(int i = max-1; i >= 0; i--)
											{
												vright[i+1] = vright[i]; 
											}
			vright[0] = temporanea;           
			}
	
			for(int i = 0; i < max; i++)//stampa
			{
				cout << vright[i] << endl;
			}break;
					default:
					cout<<"errore (  inserire 1 per shift verso sinistra o inserire 2 per shift verso destra)";
		    }
		    system("pause");
		    system("cls");
}
	system("pause");
	return 0;
}
                                 //somma diagonali principali//
/*progetta un algoritmo che calcoli la somma degli elementi della diagonale principale di una matrice quadrata i cui elementi sono scelti e caricati da tastiera dall'utente*/ 
#include<iostream>
#include <stdio.h>

using namespace std;
int main() {
int r;
int c;
cout << "inserisci il numero di righe";
cin >> r;
cout << "inserisci il numero di righe";
cin >> c;
int mat[r][c];

for (int i = 0; i < r; i++) {
  for (int j = 0; j < c; j++) {
  	cout<<"inserisci l'elemento in posizione ["<<i<<"] ["<<j<<"]: ";
    cin >> mat[i][j];
  }
}
for (int i = 0; i < r; i++) {
  for (int j = 0; j < c; j++) {
    cout << mat[i][j];
  }
  cout<<endl;
}
int somma = 0;
for (int i = 0; i < r; i++) {
  for (int j = 0; j < c; j++) {
    if (i == j) {
      somma += mat[i][j];
    }
  }
}
  cout << "sommma: " << somma<<endl;
  system("pause");
  return 0;
}
