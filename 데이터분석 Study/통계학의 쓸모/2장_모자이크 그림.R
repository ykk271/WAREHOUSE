library('ggmosaic')
library('ggplot2')


data<-read.csv("2강_분할표.csv",header = T, fileEncoding="UTF-8-BOM")
#비타민, 위약 변수를 factor(범주형) 변수로 변환
data$vitamin <- factor(data$vitamin, levels = c(1,2), labels = c("예", "아니오")) 
data$cold <- factor(data$cold, levels = c(0,1), labels = c("발생하지 않음", "발생"))
#모자이크 그림 작성
ggplot(data=data) + geom_mosaic(aes(weight=1,x=product(vitamin), fill=cold))+ xlab("비타민C 복용")+ labs(fill = "감기발생여부")+ ylab("감기발생여부")



