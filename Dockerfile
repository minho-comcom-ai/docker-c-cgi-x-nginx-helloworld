# XXX(minho): Inherited from https://medium.com/@lojorider/docker-with-cgi-perl-a4558ab6a329

FROM nginx:1.10
RUN apt-get update
RUN apt-get install -y spawn-fcgi fcgiwrap
RUN apt-get install -y gcc
RUN sed -i 's/www-data/nginx/g' /etc/init.d/fcgiwrap
RUN chown nginx:nginx /etc/init.d/fcgiwrap
RUN mkdir -p /var/log/nginx/web
ADD ./vhost.conf /etc/nginx/conf.d/default.conf

WORKDIR /var/www
COPY ./www/*.c ./
RUN gcc -o index.out ./index.c
RUN gcc -o about.out ./about.c

EXPOSE 80

CMD /etc/init.d/fcgiwrap start \
    && nginx -g 'daemon off;'
