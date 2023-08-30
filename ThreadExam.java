package threadExam;

public class ThreadExam {
	public static void main(String[] args) {
		
		Room room = new Room();
		
		CleanThreadEmp thread1 = new CleanThreadEmp(room);
		thread1.start();
		
		CleanRunnableEmp crcup = new CleanRunnableEmp(room);
		Thread thread2 = new Thread(crcup);
		thread2.start();
		
//		cleanByBose();
		
		
	}

	private static void cleanByBose() {
		
		for(int i = 1; i <= 10; i += 2) {
			System.out.println("사장이" + i + "번 방 청소를 합니다.");
		}
		
		
	}
}
