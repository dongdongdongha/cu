package threadExam;

public class CleanThreadEmp extends Thread{

	Room room;
	
	public CleanThreadEmp(Room room) {
		this.room = room;
	}
	
	
	
	public void run() {
		for(int i = 1; i <= 5; i += 1) {
			room.cleanRoom();
//			System.out.println("직원이(thread)" + i + "번 방 청소를 합니다.");
		}
	}
}
