#데이터 입력
x<-c(1,2,2,3,3,3,4,4,5)
#히스토그램 작성
hist(x, breaks=0:5) # 0에서 5까지 그리기
hist(x, breaks=0:5, freq=F) 
#정규곡선 그리기
curve(dnorm(x, mean=mean(x), sd=sd(x)), add=T)
#평균을 나타내는 선 그리기
abline(v=mean(x), lwd=2, col="red")
mean(x)

x<-c(x,20)

hist(x, breaks=0:20, freq=F) 
curve(dnorm(x, mean=mean(x), sd=sd(x)), add=T)
abline(v=mean(x), lwd=2, col="red")
mean(x)
