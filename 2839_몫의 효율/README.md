# 문제
> 설탕 봉지 3kg과 5kg이 있다. 설탕을 배달하기 위해 가장 적은 봉지로 들고 가려고 한다.
설탕을 정확하게 Nkg을 배달해야 할 때, 봉지 몇 개를 가져가면 되는지 그 수를 구하는 프로그램을 작성하시오.

# 입력
> 첫째 줄에 N이 주어진다.(3 <= N <= 5000)

#출력
> 상근이가 배달하는 봉지의 최소 개수를 출력한다 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.

## 접근 방식
> + N이 5의 배수인지 확인하고 맞다면 몫을 구하고 끝
> + 아니라면 ***3을 빼주면서 5의 배수를 유도***
> + 위 과정을 반복
