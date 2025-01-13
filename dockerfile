# Folosim imaginea oficială LLVM/Clang
FROM ubuntu:latest
RUN apt-get update && apt-get install -y clang


# Setează directorul de lucru
WORKDIR /app

# Copiază fișierele proiectului
COPY . .

# Compilează proiectul folosind clang++
RUN clang++ main.cpp -o main

# Rulează aplicația
CMD ["./main"]
