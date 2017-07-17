
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

int main(void) {
	return 0;
}
