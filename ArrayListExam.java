package collectionExam;

import java.util.ArrayList;
import java.util.Collections;

public class ArrayListExam {
	public static void main(String[] args) {
		
		ArrayList<String> list = new ArrayList<>();
		
		list.add("유재석");
		list.add("지석진");
		list.add("김종국");
		list.add("송지효");
		list.add("하하");

		System.out.println(list.get(0));
		System.out.println(list.get(2));//2번 값 출력
		
		list.add(3, "김영철");//리스트에 추가
		
		for (String s : list) {//list를 s에 넣으면서 for문 실행
			System.out.print(s + " ");
		}
		
		list.remove("김종국");// 리스트 값 삭제
		
		System.out.println(list.size());// 크기 출력
		
		list.remove(list.size()-1);//마지막 값
		
		list.set(0, "이수근");// 리스트 값바꾸기
		
		System.out.println(list.indexOf("송지효"));//인덱스 값 위치 출력
		
		if(list.contains("송지효")) System.out.println("ok");// contains = 리스트에 값이 있으면 True 반환
		
		list.clear();//값 전부 삭제
		
		if(list.isEmpty()) System.out.println("값이 없다");// isEmpty = 값이 비어있으면 True 반환

		list.add("유재석");
		list.add("지석진");
		list.add("김종국");
		list.add("송지효");
		list.add("하하");
		
		Collections.sort(list, Collections.reverseOrder());
		
		for (String s : list) {//list를 s에 넣으면서 for문 실행
			System.out.print(s + " ");
		}
		
		
	}
}
