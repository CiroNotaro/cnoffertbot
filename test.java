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
		
		determinante = mat[0][0]*mat[1][1]*mat[2][2]+ //Diagonale principale 1
				  mat[0][1]*mat[1][2]*mat[2][0]+ //Diagonale principale 2
				  mat[0][2]*mat[1][0]*mat[2][1]- //Diagonale principale 3
				  mat[0][2]*mat[1][1]*mat[2][0]- //Diagonale secondaria 1
				  mat[0][0]*mat[1][2]*mat[2][1]- //Diagonale secondaria 2
				  mat[0][1]*mat[1][0]*mat[2][2];//Diagonale secondaria 3
		
		System.out.println("Determinante = "+determinante);
		
	}
}
