//#include<iostream>
//using namespace std;
//#define packsize 2
//
//class StackException :public exception
//{
//public:
//	StackException(char * msg) :exception(msg)
//	{
//	}
//};
//
//struct MyStruct
//{
//	int data[5];
//};
//
//class Stack
//{
//	int datatop, packtop;
//	int val;
//	MyStruct packet[packsize];
//public:
//	Stack() :datatop(-1), packtop(0)
//	{
//	}
//
//	void push()
//	{
//		cout << "enter elemnet is to be insertted:";
//
//		fflush(stdin);
//		cin >> val;
//		fflush(stdin);
//
//		if (isPackFull() && isDataFull())
//		{
//			throw StackException("stack overflow");
//		}
//		else
//		{
//			increaseDataTop();
//			packet[packtop].data[datatop] = val;
//
//			cout << endl <<"packet number "<< packtop << "...." << datatop << endl;
//		}
//	}
//
//	void increaseDataTop()
//	{
//		datatop++;
//		if (datatop == 5)
//		{
//			packtop++;
//			datatop = 0;
//		}
//	}
//
//	void decreaseDataTop()
//	{
//		datatop--;
//		if (datatop == -1)
//		{
//			if (packtop != 0)
//			{
//				packtop--;
//				datatop = 4;
//			}
//			else
//			{
//				//datatop = -1;
//			}
//		}
//	}
//
//	bool isPackFull()
//	{
//		return packtop == packsize - 1;
//	}
//	bool isDataFull()
//	{
//		return datatop == 4;
//	}
//	bool isDataEmpty()
//	{
//		return datatop == -1;
//	}
//	bool isPackEmpty()
//	{
//		return packtop == 0;
//	}
//	void pop()
//	{
//		if (isPackEmpty() && isDataEmpty())
//		{
//			throw StackException("stack underflow");
//		}
//		else
//		{
//			cout << "\n popped element is" << endl << packet[packtop].data[datatop] << endl;
//			decreaseDataTop();
//		}
//	}
//
//	void list() {
//		cout << endl << "the list of elements in stack:" << endl;
//		int tempdatatop = datatop;
//		for (int i = packtop; i >= 0; i--)
//		{
//			for (int j = tempdatatop; j >= 0; j--)
//			{
//				cout << packet[i].data[j] << endl;
//			}
//			tempdatatop = 4;
//		}
//	}
//};
//void menu()
//{
//	cout << "p->Push\no->pop\nl->list\nx->exit\nenter your choice:"
//		;
//}
//void main()
//{
//	char ch;
//	Stack stk;
//	menu();
//	cin >> ch;
//	fflush(stdin);
//	while (ch != 'x')
//	{
//		fflush(stdin);
//		try
//		{
//			switch (ch)
//			{
//			case 'p':
//			case 'P':
//				stk.push();
//				fflush(stdin);
//				break;
//			case 'O':
//			case 'o':
//				stk.pop();
//				break;
//			case 'L':
//			case 'l':
//				stk.list();
//				break;
//
//			default:
//				throw StackException("invalid key");
//				break;
//			}
//		}
//		catch (StackException &exp)
//		{
//			cout << exp.what() << endl;
//		}
//		menu();
//		cin >> ch;
//		fflush(stdin);
//	}
//}
