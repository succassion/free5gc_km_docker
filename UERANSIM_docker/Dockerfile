FROM debian:latest as builder

ARG version=3.1.0

ENV VERSION=$version

RUN apt-get update && \
    apt-get install -y  \
    make \
    git \
    wget \
    gcc \
    g++ \
    libssl-dev \
    libsctp-dev \
    cmake 

RUN cd /tmp && git clone https://github.com/aligungr/UERANSIM.git && \
    cd UERANSIM 

# && git checkout tags/v$VERSION 
RUN cd /tmp/UERANSIM && echo "cmake --version" && make

FROM debian:stable-slim

RUN apt-get update \
    && apt-get install -y dnsutils gettext-base iproute2 libsctp1 gettext-base curl iputils-ping traceroute tcpdump \ 
    && rm -rf /var/lib/apt/lists/*
    
COPY --from=builder /tmp/UERANSIM/build/* /usr/local/build/
COPY /config/free5gc-gnb.yaml /config/free5gc-gnb.yaml
COPY /config/free5gc-ue.yaml /config/free5gc-ue.yaml
COPY entrypoint.sh /entrypoint.sh

ENV UE_HOSTNAME=ue \
    GNB_HOSTNAME=gnb \
    AMF_HOSTNAME=amf

ENTRYPOINT ["/entrypoint.sh"]
CMD ["/bin/sh"]
