package com.mavendemo.ws;

public class StackDemo {

    static int a[]=new int[5];
    static int top=-1;
    public  static void push(int value) {
        if (top != a.length-1) {
            top=top+1;
            a[top]=value;
        }
        else {
            System.out.println("stack overflow");
        }
    }

      static  int pop(

      ) {
            if (top != -1) {
                return a[top--];
            } else {
                System.out.println("stack underflow");
                return 0;
            }

        }
      static  void display(){

            for(int i=0;i<=top;i++){
                System.out.println(a[i]);
            }
    }
    public static void main(String args[]){
        push(10);
        push(20);
        push(30);
        display();
        pop();
        display();
        pop();
        display();
        pop();
        display();
        pop();
        push(10);
        push(20);
        push(30);
        push(40);
        push(50);
        display();
        push(10);
    }

    }


