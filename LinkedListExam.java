package collectionExam;

import java.util.Collections;
import java.util.LinkedList;

public class LinkedListExam {
	public static void main(String[] args) {
		
		LinkedList<String> list = new LinkedList<>();
		
		list.add("유재석");
		list.add("지석진");
		list.add("김종국");
		list.add("송지효");
		list.add("하하");
		
		System.out.println(list.get(0) + " " + list.get(2));
		
		System.out.println(list.getFirst() + " " + list.getLast());
		
		list.add(3, "김영철");
		
		list.addFirst("서장훈");
		list.addLast("김영철");
		
		for (String wjdakfajtwlsdbdnjfdlduTtmqslek : list) {
			System.out.print(wjdakfajtwlsdbdnjfdlduTtmqslek + " ");
		}System.out.println();
		
		list.remove(list.size() - 1);
		
		list.removeFirst(); list.removeLast();

		for (String wjdakfajtwlsdbdnjfdlduTtmqslek : list) {
			System.out.print(wjdakfajtwlsdbdnjfdlduTtmqslek + " ");
		}System.out.println();
		
		list.set(0, "이수근");
		
		if(list.contains("송지효")) System.out.println("ok");
		
		list.clear();
		
		if(list.isEmpty()) System.out.println(list.size());
		
		list.add("유재석");
		list.add("지석진");
		list.add("김종국");
		list.add("송지효");
		list.add("하하");
		
		Collections.sort(list);

		for (String wjdakfajtwlsdbdnjfdlduTtmqslek : list) {
			System.out.print(wjdakfajtwlsdbdnjfdlduTtmqslek + " ");
		}System.out.println();
		
		
	}
}
