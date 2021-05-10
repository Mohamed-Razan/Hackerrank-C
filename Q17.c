// Question: https://www.hackerrank.com/challenges/students-marks-sum/problem


 int marks_summation(int *marks, int n, char g){
     int i, sum = 0;
     if(g == 'b'){
         for(i = 0; i < n; i+=2){
             sum = sum + marks[i];
         }
     }
     else if(g == 'g'){
         for(i = 1; i < n; i+=2){
             sum = sum + marks[i];
         }
     }
     return sum;
 }



