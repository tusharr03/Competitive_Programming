package JAVA.Java_loops_2;

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;



public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(bufferedReader.readLine().trim());
        for(int i=1;i<=10;i++)
        {
            int Result=N*i;
            System.out.print(N);
            System.out.print(" x ");
            System.out.println(i + " = " +Result);
        }

        bufferedReader.close();
    }
}

