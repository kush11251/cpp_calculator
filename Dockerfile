# Dockerfile
FROM gcc:latest

WORKDIR /app

COPY . .

RUN cmake .
RUN cmake --build .

CMD ["./cpp_calculator"]