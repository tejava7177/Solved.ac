package 자바자료구조기초편;

import static sun.security.pkcs11.wrapper.Functions.getId;

//아이디를 부여하는 클래스
class Id{
    private static int count = 0;
    private int id;

    //생성자
    public Id(){
        id = ++count;
    }

    //인스턴스 메서드
    public int getId(){
        return id;
    }

    public static int getCount(){
        return count;
    }
}

public class 클래스메서드와인스턴스메서드 {
    public static void main(String[] args){
        Id a = new Id();
        Id b = new Id();

        System.out.println("a의 아이디: " + a.getId());
        System.out.println("a의 아이디: " + b.getId());

        System.out.println("부여한 아이디의 개수 :" + Id.getCount());

    }
}
