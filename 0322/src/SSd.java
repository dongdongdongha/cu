import java.util.*;
import java.io.*;
public class SSd {
	public static void main(String args[]) throws IOException{
//		int[] a = new int[3];
//		a[0] = 10; a[1] = 20; a[2] = 30;
//		System.out.println(a.length); 
		
//		int a[] = new int[] {1,2,3,4,5,6,7,8,9,10};
//		for(int i = 0; i < a.length; i++) {
//			System.out.println("a["+i+"]"+a[i]);
//		}
		
//		String str[] = new String[3];
//		str[0] = "Hello";
//		str[1] = "Java";
//		str[2] = "World";
//		for(int i = 0; i < str.length; i++)
//				System.out.println(str[i]);
				
		int a[][] = new int[2][3];
		a[0][0] = 1; a[0][1] = 2; a[0][2] = 3;
		a[1][0] = 10; a[1][1] = 20; a[1][2] = 30;
		for(int i = 0; i < a.length; i++)
			for(int j = 0; j < a[i].length; j++)
				System.out.print(a[i][j] + "\t");
		
		
		
		
	}	
}