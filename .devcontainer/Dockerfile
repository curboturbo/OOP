FROM gcc:14-bookworm

RUN apt-get update && apt-get upgrade -y \
    && apt-get install -y cmake libgtest-dev googletest \
    && apt-get clean && rm -rf /var/lib/apt/lists/*
    