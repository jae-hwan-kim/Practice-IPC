# IPC

프로세스간 통신을 IPC(Inter-Process Communication) 라고 한다.

# Siganl
IPC 를 위한 방법에는 Signal, Pipe, Socket 이 있는데, 이번 프로젝트에서는 Signal 에 대해 공부한다.

# minitalk?
클라이언트와 서버 프로그램을 구현했다. 클라이언트가 터미널에 메세지를 입력하면 서버는 메시지를 터미널에 출력한다.

서버와 클라이언트가 대화하는 구조이며 텍스트밖에 전송하지 못하는 작은 프로그램이기 때문에 minitalk 이라고 한다.

# How?
1. 터미널에 `man signal` 을 입력하면 signal 넘버를 볼 수 있다. 30 과 31 번은 사용자가 지정할 수 있기 때문에 이를 활용한다.
2. 터미널에 `man 2 kill` 을 입력하면 특정 프로세스에 시그널을 보내는 방법을 알 수 있다.
3. 30 과 31 을 사용자 설정해주고, kill 함수로 클라이언트 <-> 서버 사이에서 시그널 통신을 할 수 있다.

# 버전
1.3 버전이 최종 버전이며, mintalk 디렉토리와 minitalk_bonus 디렉토리가 있다.
bonus 디렉토리에는 ack 기능까지 추가가 되어있다. 클라이언트가 보낸 메시지를 서버가 잘 받았을 경우 서버는 클라이언트에게 잘받았다고 확인 메시지를 보낸다.

(❗️ 1.0, 1.1, 1.2, 1.3 버전이 있다. 깃을 잘 사용하지 않았던 나의 흔적이다.)

# 실행방법
1. minitalk 또는 minitalk_bonus 디렉토리로 이동한다.
2. `make` 를 입력한다.
3. server 폴더에 들어가서 `./server` 를 입력하면, 서버 프로그램이 실행된다.
4. 터미널을 하나 더 열어서 client 폴더에 들어가서 `./client [ server pid ] "메시지"` 를 입력한다.
5. 메시지가 보내진다. 

다음은 minitalk_bonus 를 실행한 이미지이다.
<img src="https://user-images.githubusercontent.com/85930183/236651243-06c5e1dc-c7d6-4792-a38a-409172d59676.png" width="100%">


