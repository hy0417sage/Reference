/*
언어 : C++
메신저를 주제로 상속을 구현해 보자.
*/

#include <iostream>
#include <string>

using namespace std;


class Message{
public:
    Message(int sendTime, string sendName){
        this->sendTime = sendTime;
        this->sendName = sendName;
    }
    int GetTimeTime() const {return sendTime;}
    string GetSendName() const {return sendName;} 
private:
    int sendTime;
    string sendName;
};


class TextMessage : public Message {
public:
    TextMessage(int sendTime, string sendName, string text)
    : Message(sendTime, sendName){
        this->text = text;
    }
    string GetText() const {return text;}
private:
    string text;
};


class ImageMessage : public Message{
public:
    ImageMessage(int sendTime, string sendName, string img)
    : Message(sendTime, sendName){
        this->img = img;
    }
    string GetImg() const {return img;}
private:
    string img;
};

int main(){
    Image *p_dogImage = new Image();
    TextMessage *hello = new TextMessage(10, "hy0417sage", "Hi");
    ImageMessage *dog = new ImageMessage(20, "hy0417sage", p_dogImage);

    cout << "send time : " << hello->GetSendTime() << endl;
    cout << "send person : " << hello->GetSendName() << endl;
    cout << "message : " << hello->GetText() << endl;
    cout << endl;

    cout << "send time : " << dog->GetSendTime() << endl;
    cout << "send person : " << dog->GetSendName() << endl;
    cout << "message : " << dog->GetText() << endl;
    cout << endl;

    delete hello;
    delete dog;
    delete p_dogImage;

    return 0;
}