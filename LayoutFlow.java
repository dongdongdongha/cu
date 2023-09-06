package helloswing;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

import eventExam.ButtonExam;

public class LayoutFlow extends JFrame implements ActionListener{
	JPanel p = new JPanel();
	JButton btn1 = new JButton("버튼1");
	JButton btn2 = new JButton("버튼2");
	JButton btn3 = new JButton("버튼3");
	JButton btn4 = new JButton("버튼4");
	JButton btn5 = new JButton("버튼5");
	
	
	LayoutFlow(){
		
		
		add(p);
		
/*		p.setLayout(new GridLayout(0,5));
		p.setLayout(new FlowLayout());*/
		p.setLayout(new BorderLayout());
		
		p.add(btn1, BorderLayout.EAST);
		p.add(btn2, BorderLayout.WEST);
		p.add(btn3, BorderLayout.NORTH);
		p.add(btn4, BorderLayout.SOUTH);
		p.add(btn5, BorderLayout.CENTER);

		btn1.addActionListener(this);
		btn2.addActionListener(this);
		
		
		setTitle("패널 색 바꾸기");
		setSize(700, 400);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
		
	}
	
	
	
	public static void main(String[] args) {
		new LayoutFlow();
	}
	
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == btn1) {
			p.setBackground(Color.orange);
		}else if(e.getSource() == btn2) {
			p.setBackground(Color.blue);
		}
	}
	
	
}
