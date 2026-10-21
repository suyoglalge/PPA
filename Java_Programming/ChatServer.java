import java.net.*;
import java.io.*;

class ChatServer
{
    public static void main(String[] args) throws Exception
    {
       ServerSocket ssobj = new ServerSocket(5100);   //port number given by user(server)
       System.out.println("Server is running at port 5100");
       Socket sobj = ssobj.accept();   //connection completed...accepted by server
       System.out.println("Client Request get accepted succesfully");
       
       PrintStream pobj = new PrintStream(sobj.getOutputStream());  
       BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));//ekache kaan
       BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));

       System.out.println("Marvellous Server is Running");
       String str1=null , str2=null; //till this connection is donw with all streams

       while((str1=bobj1.readLine())!=null)
       {
        System.out.println("Client Says : "+str1);
        System.out.println("Enter messege for client:");
        str2=bobj2.readLine();
        pobj.println(str2);
       }
    }
}

//here most important note is to match all lines from server and client both.