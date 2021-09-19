x <- c(1,2,3,4,5)
x

quantile(x,0.25)
quantile(x,0.75)

y <- c(x, 20)
quantile(y,0.25)
quantile(y,0.75)


boxplot(y)
