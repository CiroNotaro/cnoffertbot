import java.util.Scanner;

public class SommaElementiMatrice {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int rig;
		int col;
		
		System.out.print("Inserisci numero righe: ");
		rig = scan.nextInt();
		
		System.out.print("Inserisci numero colonne: ");
		col = scan.nextInt();
		
		int mat[][] = new int[rig][col];
		
		for(int i = 0; i < rig; i++)
		{
			for(int j = 0; j < col; j++)
			{
				System.out.print("Inserisci un numero: ");
				mat[i][j] = scan.nextInt();
			}
		}
		int somma = 0;
		for(int i = 0; i < rig; i++)
		{
			for(int j = 0; j < col; j++)
			{
				somma += mat[i][j];
			}
		}
		
		System.out.println("\nSomma = "+somma+"\n");
		
	}

}

/////////////////////////////////////////////////////////////

import java.util.Scanner;

public class CalcoloDeterminante3x3 {
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		float mat[][] = new float[3][3];
		float determinante;
		
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				System.out.print("Inserisci un numero: ");
				mat[i][j] = scan.nextInt();
			}
		}
		
		determinante = mat[0][0]*mat[1][1]*mat[2][2]+mat[0][1]*mat[1][2]*mat[2][0]+mat[0][2]*mat[1][0]*mat[2][1]-mat[0][2]*mat[1][1]*mat[2][0]-mat[0][0]*mat[1][2]*mat[2][1]-mat[0][1]*mat[1][0]*mat[2][2];
		
		System.out.println("Determinante = "+determinante);
		
	}
}


/////////////////////////////////////////////////

import java.util.Scanner;

public class InizializzaMatrice {

	public static void main(String[] args) {
		
		//DICHIARO VARIABILI
		Scanner scan = new Scanner(System.in);
		int mat[][];
		int righe;
		int colonne;
		
		//INSERISCO NUMERO COLONNE
		System.out.print("Inserisci numero righe: ");
		righe = scan.nextInt();
		
		//INSERISCO NUMERO COLONNE
		System.out.print("Inserisci numero colonne: ");
		colonne = scan.nextInt();
		
		//INIZIALIZZA MATRICE
		mat = new int[righe][colonne];
		
		//PRENDI VALORI
		for(int i = 0; i < righe; i++)
		{
			
			for(int j = 0; j < colonne; j++)
			{
				
				System.out.print("Inserisci un numero: ");
				mat[i][j] = scan.nextInt();
				
			}
			
		}
		
		
		//STAMPA
		for(int i = 0; i < righe; i++)
		{
			
			for(int j = 0; j < colonne; j++)
			{
				
				System.out.println(i+" - "+j+": "+mat[i][j]);
				
			}
			
		}
		
	}

}

///////////////////////////////////////

import java.util.Scanner; //Importo la Libreria Scanner

public class ShiftVerso_Destra{

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in); //Inizializzo la variabile scan di tipo Scanner
		int vett[]; //Vettore di interi
		int max; //massimo
		
		System.out.print("Inserisci grandezza vettore: ");
		max = scan.nextInt(); //assegno il massimo
		
		vett = new int[max];
		
		//Caricamento vettore
		for(int i = 0; i < vett.length; i++)
		{
			
			System.out.print("Inserisci il " + (i + 1) + "a elemento: ");
			vett[i] = scan.nextInt();
		
		}
		
		int temp; //Variabile temporanea
		
		System.out.println("\n");
		
		for(int i = vett.length-1; i > 0; i--){
		      
	         temp = vett[i];
	         vett[i] = vett[i-1];
	         vett[i-1] = temp;
	     
	     }
		
		for(int i = 0; i < vett.length; i++)
		{
			
			System.out.println(vett[i]);
		}
		
		
	}
	
}

///////////////////////////////////////////////////////////////

import java.util.Scanner; //Importo la Libreria Scanner

public class ShiftVerso_Sinistra{

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in); //Inizializzo la variabile scan di tipo Scanner
		int vett[]; //Vettore di interi
		int max; //massimo
		
		System.out.print("Inserisci grandezza vettore: ");
		max = scan.nextInt(); //assegno il massimo
		
		vett = new int[max];
		
		//Caricamento vettore
		for(int i = 0; i < vett.length; i++)
		{
			
			System.out.print("Inserisci il " + (i + 1) + "a elemento: ");
			vett[i] = scan.nextInt();
		
		}
		
		int temp; //Variabile temporanea
		
		System.out.println("\n");
		
		//Calcoli
		for(int i = 0; i < vett.length-1; i++){
		      
	         temp = vett[i];
	         vett[i] = vett[i+1];
	         vett[i+1] = temp;
	     
	     }
		
		//Stampa
		for(int i = 0; i < vett.length; i++)
		{
			System.out.println(vett[i]);
		}
		
		
	}
	
}
