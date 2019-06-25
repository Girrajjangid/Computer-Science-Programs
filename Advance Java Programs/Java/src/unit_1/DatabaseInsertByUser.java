package unit_1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;

public class DatabaseInsertByUser {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Connection con= null;
		PreparedStatement pst = null;
		Scanner sc = new Scanner(System.in);
		Statement stmt = null;
		ResultSet rs=null;
		String str = "Select * from std_info";
		String str2 = "Insert into std_info values(?,?,?,?)";
		try {
			con = DriverManager.getConnection("jdbc:ucanaccess://D://Programs//Programs//DataBaseAdv_Java//Database1.accdb");
			//con = DriverManager.getConnection("jdbc:mysql://localhost:3306/","student","student");
			
			pst = con.prepareStatement(str2);
			stmt = con.createStatement();
			
			 pst.setInt(1, sc.nextInt()); 
			 pst.setString(2, sc.next()); 
			 pst.setString(3,sc.next()); 
			 pst.setString(4, sc.next());
			 
			pst.execute();
			rs = stmt.executeQuery(str);
			
			while(rs.next()) 
			  { System.out.print(rs.getInt(1)+ "  ");
			  System.out.print(rs.getString(2)+"  ");
			  System.out.print(rs.getString(3)+"  "); 
			  System.out.println(rs.getString(4));
			  
			  }
		}catch(Exception e) {
			System.out.println(e.getMessage());
		}
		}

	}