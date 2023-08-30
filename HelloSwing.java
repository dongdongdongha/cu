package helloswing;

import javax.swing.JFrame;

public class HelloSwing extends JFrame{
	
	HelloSwing(){
		
		setTitle("안녕 스윙!");
		setSize(300, 500);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setLocationRelativeTo(null);
		setVisible(true);
		
		
	}
	
	public static void main(String[] args) {
		
		new HelloSwing();
		
		
	}
}
