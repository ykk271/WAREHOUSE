.libPaths("D:/DS")

install.packages("mlbench")
install.packages("AppliedPredictiveModeling")
install.packages("PerformanceAnalytics") 
install.packages("caret")

library("AppliedPredictiveModeling")
library(help = "AppliedPredictiveModeling")
library("PerformanceAnalytics") 
library("caret")

#Data import
data <- read.csv('2019.csv')


#Data type
X <- data[c(1,3,4,6,7,8,9)]
str(X)

#Data cleaning
sum(is.na(X))

chart.Correlation(X, histogram=T)

M <- findCorrelation(cor(X), cutoff=0.95, verbose = T) 
newX <- X[,-1]
chart.Correlation(newX, histogram=T)

boxplot(newX[,6])

tmp <- summary(data[,6])

newX2 <- newX[which(newX$Generosity < tmp[5] + 1.5*(tmp[5]-tmp[2])),] 
newX2 <- newX[which(newX$Generosity > tmp[1] - 1.5*(tmp[5]-tmp[2])),] 

boxplot(newX2[,6])

model <- lm(Score ~ . , data=newX2)

summary(model)
coef(model)


