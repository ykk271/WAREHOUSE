library('packcircles')
library('ggplot2')

car <- c("Çö´ë","±â¾Æ","½¦º¸·¹","½Ö¿ë","¸£³ë»ï¼º")

N <- c(551, 388, 132, 59, 56)

df <- data.frame(car,N)

packing <- circleProgressiveLayout(df$N, sizetype='area')
data <- cbind(df, packing)
dat.gg <- circleLayoutVertices(packing, npoints=50)
ggplot() + geom_polygon(data = dat.gg, aes(x, y, group = id, fill=as.factor(id)), colour = "black", alpha = 0.6) + geom_text(data = data, aes(x, y, size=N, label = car)) + scale_size_continuous(range = c(6,18)) + theme_void() + theme(legend.position="none") + coord_equal()

