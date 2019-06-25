package unit_1;

import java.sql.*;
import java.util.*;

public class MySQLConnect {

public static void main(String[] args) {

	Connection con= null;
	Statement stmt = null;
	ResultSet rs=null;
	Boolean b = null;
	String str1 = null;
	PreparedStatement preparedStatement = null;
	Scanner sc = new Scanner(System.in);
	String str2 = "Insert into std_info values(7,'vikram')";
	
	try {
		con = DriverManager.getConnection("jdbc:mysql://localhost:3306/","student","student");
		stmt = con.createStatement();
		stmt.execute("create database second");
		stmt.execute("use second");
		System.out.println("successfully selected");
		stmt.executeUpdate(str2);
	}
	catch(Exception e) {
		System.out.println(e.getMessage());
	}

}

}	
