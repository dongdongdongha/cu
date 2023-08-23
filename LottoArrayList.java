package lottoExam;

import java.util.ArrayList;

public class LottoArrayList {
	public void getRandomBall() {
		
		ArrayList<Integer> list = new ArrayList<>();
		
		
		while(list.size() < 6) {
			
			int randnum = (int)(Math.random()*45)+1;
			
			if(list.contains(randnum)) continue;
			
			list.add(randnum);
			
		}
		
		
		
	}
}
