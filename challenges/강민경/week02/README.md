# Week 2

## Challenge 1. 자료형 크기 확인하기

### 실습 내용

`sizeof` 연산자로 C의 기본 자료형이 차지하는 메모리 크기를 확인하고, 정수형의 `signed`와 `unsigned` 크기를 비교했다.

### 실행 환경 및 방법

- 환경: Windows WSL (Linux)
- 컴파일러: GCC

```bash
gcc challenge1.c -o challenge1
./challenge1
```

### 실행 결과
![Challenge 1 실행 결과](week02_challenge1.png)
크기 단위는 byte이다.

| 자료형 | 크기 | signed 크기 | unsigned 크기 |
|---|---:|---:|---:|
| char | — | — | — |
| short | — | — | — |
| int | — | — | — |
| long | — | — | — |
| long long | — | — | — |
| float | — | 해당 없음 | 해당 없음 |
| double | — | 해당 없음 | 해당 없음 |
| long double | — | 해당 없음 | 해당 없음 |

### 결과 분석

자료형의 크기는 C 언어에서 모두 고정되어 있지 않으며, 사용하는 시스템과 컴파일러에 따라 달라질 수 있다. 이번 결과는 WSL의 Linux 환경에서 GCC로 컴파일해 확인한 값이다.

같은 정수형에서 `signed`와 `unsigned`의 크기는 같았다. 두 자료형은 사용하는 메모리 크기보다 **표현할 수 있는 값의 범위**에서 차이가 난다. `signed`는 음수와 양수를 표현하고, `unsigned`는 0 이상의 값만 표현한다.
