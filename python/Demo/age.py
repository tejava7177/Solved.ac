from datetime import datetime

year, month, date = input().split(".")
year = int(year)


print("만 나이는 " , (datetime.today().year)-year , "입니다")