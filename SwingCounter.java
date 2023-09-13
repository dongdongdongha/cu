package helloswing;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class SwingCounter extends JFrame implements ActionListener {
	
	JPanel p = new JPanel();

	JButton btnInc = new JButton("증가");
	JButton btnDec = new JButton("감소");
	JButton btnCls = new JButton("초기화");
	
	JLabel lb = new JLabel("카운터값", JLabel.CENTER);
	JTextField tfCounter = new JTextField("0", 5);
	
	
	SwingCounter(){
		
		add(p);
		
		p.add(lb);
		p.add(tfCounter);
		p.add(btnInc);
		p.add(btnDec);
		p.add(btnCls);

		btnInc.addActionListener(this);
		btnDec.addActionListener(this);
		btnCls.addActionListener(this);
		
		
		
		setTitle("간단카운터");
		setSize(400,150);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setLocationRelativeTo(null);
		setVisible(true);
	}
	
	public static void main(String[] args) {
		new SwingCounter();
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == btnInc) {
			int count = Integer.parseInt(tfCounter.getText().trim()) + 1;
			tfCounter.setText(Integer.toString(count));
		}else if(e.getSource() == btnDec) {
			int count = Integer.parseInt(tfCounter.getText().trim()) - 1;
			tfCounter.setText(Integer.toString(count));
		}else if(e.getSource() == btnCls) {
			tfCounter.setText("0");
		}
			
	}
}
