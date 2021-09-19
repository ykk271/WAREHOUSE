library(ggplot2) 

age<-c(2,4,5,5,6,6,6,10,15,15,16,16,17,18,19,19,23,25,28,31,32,32,32,33,35,37,44,45,46,46,54,55,55,65,66)
sex <-c(2,2,1,2,1,2,2,2,1,1,1,2,1,2,2,2,1,1,2,2,1,2,2,2,2,1,1,1,1,1,1,1,1,1,1)
data <- data.frame(age, sex) 

G<-ggplot(data, aes(x=age)) + geom_dotplot() + theme_classic() +scale_x_continuous(breaks=seq(0, 70, 10))
G+theme(axis.text=element_text(size=20,face="bold"), axis.title=element_text(size=20,face="bold"))

#성별 변수를 factor(범주형) 변수로 변환
data$sex <- factor(data$sex, levels=c("1","2"), labels=c("male","female"))
#성별에 따른 점도표 작성
GR <- ggplot(data, aes(x=age, fill = factor(sex))) + geom_dotplot(stackgroups = TRUE,binpositions = "all") + theme_classic() +scale_x_continuous(breaks=seq(0, 70, 10))
GR+theme(axis.text=element_text(size=20,face="bold"), axis.title=element_text(size=20,face="bold")) + scale_fill_manual(values = c("#3399FF", "#66CC33"))+ theme(legend.title =element_blank ()) + theme(legend.text = element_text(size = 16))

