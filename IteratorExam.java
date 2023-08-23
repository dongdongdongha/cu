package collectionExam;

import java.util.ArrayList;
import java.util.Iterator;

public class IteratorExam {
	public static void main(String[] args) {
		ArrayList<String> list = new ArrayList<>();

		list.add("유재석");
		list.add("아무개");
		list.add("지석진");
		list.add("아무개");
		list.add("김종국");
		list.add("아무개");
		list.add("송지효");
		list.add("아무개");
		list.add("하하");
		
		Iterator<String> it = list.iterator();
		System.out.println(it.next());
		System.out.println(it.next());
		
		it = list.iterator();
		while(it.hasNext()) {
			System.out.print(it.next() + " ");
		}System.out.println();
		
		it = list.iterator();
		while(it.hasNext()) {
			if(it.next().contains("아무개"))
				it.remove();
		}

		it = list.iterator();
		while(it.hasNext()) {
			System.out.print(it.next() + " ");
		}System.out.println();
		
		
		
	}

}
