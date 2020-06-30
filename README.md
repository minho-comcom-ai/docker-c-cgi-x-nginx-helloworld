# docker-c-cgi-x-nginx-helloworld

[![Run on Ainize](https://ainize.ai/static/images/run_on_ainize_button.svg)](https://ainize.web.app/redirect?git_repo=github.com/minho-comcom-ai/docker-c-cgi-x-nginx-helloworld)
- Docker Hub: [minhocomcomai/helloworld-c](https://hub.docker.com/r/minhocomcomai/helloworld-c)

## Build

```bash
docker build -t helloworld-c
```

## Run

```bash
docker run -it -p 80:80 helloworld-c
```

## Upload to Docker Hub

```bash
docker tag helloworld-c $YOURID/helloworld-c
docker push $YOURID/helloworld-c
```
