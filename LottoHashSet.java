package lottoExam;

import java.util.HashSet;

public class LottoHashSet {
	public void getRandomBall() {
		HashSet<Integer> set = new HashSet<>();
		
		
		while(set.size() < 6) {
			
			int randnum = (int)(Math.random()*45)+1;
			
			set.add(randnum);
			
		}
		System.out.println("HashSet : ");
		for(Integer i : set) {
			System.out.print(i + " ");
		}
		
		
	}
}
