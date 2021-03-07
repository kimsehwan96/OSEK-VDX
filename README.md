# OSEK/VDX


## OSEK
- 자동차의 분산 제어 장치를 위한 개방된 산업 표준
- 독일 자동차 산업계의 공동 프로젝트로 시작

## VDX

- 프랑스 자동차 산업계의 공동 프로젝트
- PSA, Renault가 OSEK과 유사한 프로젝트 진행
- 1995년 OSEK과 조정
- 1997년 OSEK/VDX

## OSEK/VDX
- 자동차 산업의 공동 프로젝트
- 차량의 Distributed Control Units(제어기)를 위한 Open-Ended Architecture를 산업 표준화 목표

## 구조

- OSEK/VDX OS (Required)
    - 멀티태스킹 OS, RTOS
    - Task, Interrupt, Event, Resource, Alarm management
    - OSEK/VDX의 가장 핵심적인 모듈

- OSEK/VDX Communication (Optional)
    - 차량 내/외부 데이터 통신 interface
    - 제어기 내 내부 통신
    - 제어기 밖 다른 제어기와의 외부 통신

- OSEK/VDX NM (Optional)
    - 네트워크 상의 제어기들 모니터링 (Sleep/ Wake up)

- OSEK/VDX OSEKtime OS (Optional)
    - OSEK/VDX OS에서 `동기화`를 추가한 OS

- OSEK/VDX FT-Com (Optional)

- OSEK/VDX OIL (Required)
    - OSEK Implementation Language
    - XML 형태의 Configuratiuon 파일이라고 생각하면 된다.

- OSEK/VDX ORTI
