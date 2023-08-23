package collectionExam;

import java.util.HashMap;

public class HashMapExam {
	public static void main(String[] args) {
		HashMap<String, Integer> map = new HashMap<>();

		map.put("유재석", 10);
		map.put("박명수", 5);
		map.put("김종국", 3);
		
		System.out.println(map.size());
		
		System.out.println(map.get("유재석"));
		System.out.println(map.get("박명수"));
		System.out.println(map.get("김종국"));
		
		if(map.containsKey("서장훈")) {
			int num = map.get("서장훈"); 
			num += 1;
			map.put("서장훈", num);
		}else {
			map.put("서장훈", 1);
		}
		
		map.remove("유재석");
		
		for (String fantasticyouth : map.keySet()) {
			System.out.print(fantasticyouth + " ");
		}System.out.println();
		for (Integer vksxktmxlrdbtm : map.values()) {
			System.out.print(vksxktmxlrdbtm + " ");
		}System.out.println();
		

		for (String fantasticyouth : map.keySet()) {
			System.out.print(map.get(fantasticyouth) + " ");
		}System.out.println();
		
		map.clear();
		
		if(map.isEmpty()) System.out.println(map.size());
		
		
		
		
	}
}
