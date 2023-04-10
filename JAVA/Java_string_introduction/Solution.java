package JAVA.Java_strings_introduction;

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int len_1=A.length();
        int len_2=B.length();
        System.out.println(len_1+len_2);
        if (A.compareTo(B)>B.compareTo(A))
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
        String s1=A.substring(0,1);
        String s2=B.substring(0,1);
        String a=s1.toUpperCase();
        String b=s2.toUpperCase();
        String s3=b+B.substring(1,len_2);
        System.out.println(a+A.substring(1,len_1)+" "+s3);
        sc.close();
        
    }
}




