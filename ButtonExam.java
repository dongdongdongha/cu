package eventExam;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class ButtonExam extends JFrame implements ActionListener{
	
	JPanel p = new JPanel();
	JButton btn1 = new JButton("주황색");
	JButton btn2 = new JButton("파란색");
	
	
	ButtonExam(){
		
		add(p);
		p.add(btn1);
		p.add(btn2);

		btn1.addActionListener(this);
		btn2.addActionListener(this);
		
		
		setTitle("패널 색 바꾸기");
		setSize(700, 400);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
		
	}
	
	
	
	public static void main(String[] args) {
		new ButtonExam();
	}
	
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == btn1) {
			p.setBackground(Color.orange);
		}else if(e.getSource() == btn2) {
			p.setBackground(Color.blue);
		}
	}
	
	
	
}
