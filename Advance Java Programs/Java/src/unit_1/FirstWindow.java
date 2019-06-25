package unit_1;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JTextField;
import java.awt.BorderLayout;
import java.awt.Color;

public class FirstWindow {

	private JFrame frame;
	private JTextField txtName;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					FirstWindow window = new FirstWindow();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public FirstWindow() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 953, 588);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		txtName = new JTextField();
		txtName.setBackground(Color.PINK);
		txtName.setText("Name:");
		frame.getContentPane().add(txtName, BorderLayout.NORTH);
		txtName.setColumns(10);
	}

}
