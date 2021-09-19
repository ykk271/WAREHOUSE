Time<-c(4,7,5,8,6,4,2,9)
Score<-c(55,85,63,92,73,58,43,87)
data<-cbind(Time, Score)
#산점도 작성
plot(Time, Score)
#상관게수 산출
cor.test(Time, Score)

