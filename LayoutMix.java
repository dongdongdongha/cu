package helloswing;

import java.awt.BorderLayout;
import java.awt.FlowLayout;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class LayoutMix extends JFrame{

	JPanel p1 = new JPanel();
	JPanel p2 = new JPanel();
	JPanel p3 = new JPanel();
	

	JButton btn1 = new JButton("버튼1");
	JButton btn2 = new JButton("버튼2");
	JButton btn3 = new JButton("버튼3");
	JButton btn4 = new JButton("버튼4");
	JButton btn5 = new JButton("버튼5");
	JButton btn6 = new JButton("버튼6");
	
	
	LayoutMix(){
		
		setLayout(new BorderLayout());
		p1.setLayout(new FlowLayout());
		p2.setLayout(new GridLayout(0,2));
		p3.setLayout(new FlowLayout());
		

		p1.add(btn1);
		p1.add(btn2);

		p2.add(btn3);
		p2.add(btn4);

		p3.add(btn5);
		p3.add(btn6);

		add(p1, BorderLayout.NORTH);
		add(p2, BorderLayout.CENTER);
		add(p3, BorderLayout.SOUTH);
		
		
		setTitle("레이아웃섞기");
		setSize(400, 300);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setLocationRelativeTo(null);
		setVisible(true);
		
		
	}
	
	
	
	
	
	public static void main(String[] args) {
		new LayoutMix();
	}
}
