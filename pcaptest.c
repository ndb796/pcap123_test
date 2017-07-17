
#include <stdio.h>
#include <pcap.h> // PCAP 라이브러리 가져오기
#include <arpa/inet.h> // inet_ntoa 등 함수 포함
#include <netinet/in.h> // in_addr 등 구조체 포함

pcap_t *handle; // 핸들러
char *dev = "eth0"; // 자신의 네트워크 장비
char errbuf[PCAP_ERRBUF_SIZE]; // 오류 메시지를 저장하는 버퍼
struct bpf_program fp; // 필터 구조체
char *filter_exp = "port 80"; // 필터 표현식
bpf_u_int32 mask; // 서브넷 마스크
bpf_u_int32 net; // 아이피 주소
struct pcap_pkthdr *header; // 패킷 관련 정보
const u_char *packet; // 실제 패킷
struct in_addr addr; // 주소 정보

#define ETHER_ADDR_LEN 6

struct sniff_ethernet {
        u_char ether_dhost[ETHER_ADDR_LEN]; // 목적지 MAC 주소
        u_char ether_shost[ETHER_ADDR_LEN]; // 출발지 MAC 주소
        u_short ether_type;
};

#define IP_HL(ip) (((ip)->ip_vhl) & 0x0f)
#define IP_V(ip) (((ip)->ip_vhl) >> 4)

struct sniff_ip {
        u_char ip_vhl;
        u_char ip_tos;
        u_short ip_len;
        u_short ip_id;
        u_short ip_off;
        #define IP_RF 0x8000
        #define IP_DF 0x4000
        #define IP_MF 0x2000
        #define IP_OFFMASK 0x1fff
        u_char ip_ttl;
        u_char ip_p; // IP 프로토콜 유형
        u_short ip_sum;
        struct in_addr ip_src; // 출발지 IP 주소
        struct in_addr ip_dst; // 목적지 IP 주소
};

int main(void) {
	return 0;
}
