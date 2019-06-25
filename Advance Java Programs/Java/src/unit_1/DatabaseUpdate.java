package unit_1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;

public class DatabaseUpdate {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Connection con= null;
		PreparedStatement pst = null;
		Scanner sc = new Scanner(System.in);
		Statement stmt = null;
		ResultSet rs=null;
		String str = "Select * from std_info";
		String str3 = "update std_info set name=? where ID=?";
		try {
			con = DriverManager.getConnection("jdbc:ucanaccess://D://Programs//Programs//DataBaseAdv_Java//Database1.accdb");
			pst = con.prepareStatement(str3);
			stmt = con.createStatement();
			System.out.println("Enter name and ID to update the values from database");
			pst.setString(1, sc.next()); 
			pst.setInt(2, sc.nextInt()); 
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

