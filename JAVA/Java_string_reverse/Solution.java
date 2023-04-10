package JAVA.Java_string_reverse;

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        A=A.toLowerCase();
        StringBuffer sb=new StringBuffer(A);
        sb=sb.reverse();
        String B=sb.toString();
            
        if(A.equals(B))
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");   
        }
        sc.close();
    }
}




