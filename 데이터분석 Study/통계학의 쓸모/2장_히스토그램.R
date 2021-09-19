library(ggplot2) 

age<-c(2,4,5,5,6,6,6,10,15,15,16,16,17,18,19,19,23,25,28,31,32,32,32,33,35,37,44,45,46,46,54,55,55,65,66)
data <- data.frame(age) 
#x축 기준 설정
bins1 <- c(0, 10, 20, 30, 40, 50, 60, 70)
bins2 <- c(0,20, 40, 60, 80)
bins3 <- c(0,35, 70)

#10단위로 x축 나누어진 히스토그램 작성
G1<-ggplot(data)+geom_histogram(aes(x=age, y=100*(..count..)/sum(..count..)), breaks=bins1, fill='white', color='black') + theme_classic() +scale_x_continuous(breaks=seq(0, 70, 10)) + scale_y_continuous(limits = c(0, 80), breaks=seq(0, 80, 20))
#히스토그램 폰트 수정
G1+theme(axis.text=element_text(size=24,face="bold"),axis.title=element_text(size=24,face="bold"))

#20단위로 x축 나누어진 히스토그램 작성
G2<-ggplot(data)+geom_histogram(aes(x=age, y=100*(..count..)/sum(..count..)), breaks=bins2, fill='white', color='black') + theme_classic() +scale_x_continuous(breaks=seq(0, 80, 20)) + scale_y_continuous(limits = c(0, 80), breaks=seq(0, 80, 20))


#히스토그램 폰트 수정
G2+theme(axis.text=element_text(size=24,face="bold"),axis.title=element_text(size=24,face="bold"))

#35단위로 x축 나누어진 히스토그램 작성
G3 <- ggplot(data)+geom_histogram(aes(x=age, y=100*(..count..)/sum(..count..)), breaks=bins3, fill='white', color = 'black') + theme_classic() +scale_x_continuous(breaks=seq(0, 70, 35)) + scale_y_continuous(limits = c(0, 80), breaks=seq(0, 80, 20))
#히스토그램 폰트 수정
G3+theme(axis.text=element_text(size=24,face="bold"),axis.title=element_text(size=24,face="bold"))





