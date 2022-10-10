def check_score(score):
    if score >=90: #90점 이상이면
        grade = "A"
    elif score >=80:
        grade = "B"
    elif score >=70:
        grade = "C"
    elif score >=60:
        grade = "D"
    else:
        grade = "F"
    return grade

grade = check_score(int(input("점수를 입력하세요:")))
print("성적 :" , grade)