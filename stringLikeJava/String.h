#include"define.h"

namespace myCode
{
    class String
    {
    private:
        char* data;
    public:
        Uint Length;
        String();
		String(long);
		String(double);
        String(const char* str);
        String(const String &str);
        String(Byte* bt,Uint len);
        ~String(); 
        void operator+=(const char *str);
        void operator+=(const String &str);
        void operator=(const char *str);
        void operator=(const String &str);//ֻ�ܱ���4λ������
        void operator+=(double);
        void operator+=(long);
		bool operator==(const String& str);
		void Free();
		char* Str();
		double ToDouble();
		long ToLong();
		bool Equals(const String &str);
		Uint FindFirst(Uint start, Uint end, const char* str);//��Χ����
		Uint FindFirst(Uint start, const char* str);//��ʲô�з���ʼ����
		Uint FindFirst(Uint start, Uint end, const String &str);
		Uint FindFirst(Uint start, const String &str);
		String& SubStr(Uint start, Uint end);//���±�start��ʼ���±�end���������ַ���
		String& SubStrNotCutSelf(const char* start, const char* end);//�����ַ���,��������
		String& SubStr(const char *start, const char* end);//�����ַ���,��start��ʼ,��end����
		String& SubStrNotCutSelf(const String &start, const String &end);//�����ַ���,��������
		String& SubStr(const String &start, const String &end);//�����ַ���,��start��ʼ,��end����
		String* Split(const char *str,Uint *size);//��str�и��ַ���,size�Ƿ����ַ������鳤��
		String* Split(const String& str, Uint *size);//��str�и��ַ���,size�Ƿ����ַ������鳤��
		void Replace(const char* wheres, const char* what);//�滻���е�wheres�ַ���
		void ReplaceOne(const char* wheres, const char *what);//ģ��java��sql���ռλ���滻
		void Replace(const String& wheres, const String& whats);
		void ReplaceOne(const String &wheres, const String &whats);
		Byte* GetBytes();//�����ֽ�����
    };
}

