#표준 입출력
print("python", "java", sep = " vs ", end = "?")
print("무엇이 더 재밌을까요?")

import sys
print("Python" "Java", file=sys.stdout)
print("Python" "Java", file=sys.stderr)

scores = {"수학":0, "영어":50, "코딩":100}

for subject, score in scores.items():
    #print(subject, score)
    print(subject.ljust(8), str(score).rjust(4), sep = ":")


for num in range(1, 21):
    print("대기번호 : " + str(num).zfill(3))

#answer = input("아무 값이나 입력하세요: ")
#print("입력하신 값은 " + answer + "입니다.")
#print(type(answer))

# 빈 자리는 빈공간으로 두고, 오른쪽 정렬, 총 10자리 공간 확보
print("{0: > 10}". format(500))
# 양수일때는 +표시, 음수일 땐 -표시
print("{0: >+10}". format(500))
print("{0: >-10}". format(-500))
# 왼쪽 정렬, 빈칸을 _로 채움
print("{0:_<10}". format(500))
# 세자리 마다 콤마 찍기
print("{0:,}". format(1000000000))
# 세자리 마다 콤마 찍기 +- 부호 붙이기
print("{0:+,}". format(1000000000))
# 세자리 마다 콤마 찍기, 부호 붙이기, 자리수 확보
# 빈자리는 ^ 채우기
print("{0:^<+30,}".format(10000000000000))
# 소수점 출력
print("{0:f}".format(5/3))
# 소수점 특정 자리수까지만 표시
print("{0:.2f}".format(5/3))


#파일 입출력
score_file = open("score.txt","w",encoding = "utf8")
print("수학 : 0", file = score_file)
print("영어 : 50", file = score_file)
score_file.close()

#모든 줄 다 읽기
score_file = open("score.txt","r",encoding = "utf8")
print(score_file.read())
score_file.close()

#줄별로 읽기
score_file = open("score.txt","r",encoding = "utf8")
print(score_file.readline(), end="")
print(score_file.readline(), end="")
score_file.close()

score_file = open("score.txt","r",encoding = "utf8")
while True:
    line = score_file.readline()
    if not line:
        break
    print(line, end = "")
score_file.close()

score_file = open("score.txt","r",encoding = "utf8")
lines = score_file.readlines()
for line in lines:
    print(line, end = "")
score_file.close()


#피클
import pickle
profile_file = open("profile.pickle", "wb")
profile = {"이름": "박명수", "나이":30, "취미":["농구","축구","야구"]}
print(profile)
pickle.dump(profile, profile_file)
profile_file.close()

profile_file = open("profile.pickle", "rb")
profile = pickle.load(profile_file)
print(profile)
profile_file.close()  

#with는 close 필요 없음
with open("profile.pickle", "rb") as profile_file:
    print(pickle.load(profile_file))


with open("study.txt", "w", encoding = "utf8") as study_file:
    study_file.write("파이썬을 공부중")

with open("study.txt", "r", encoding = "utf8") as study_file:
    print(study_file.read())


#퀴즈
for i in range(1,51):
    fileName = str(i)+"주차.txt"
    with open(fileName, "w", encoding = "utf8") as report:
        report.write("\n부서 :")
        report.write("\n이름 :")
        report.write("\n업무 요약: ")

