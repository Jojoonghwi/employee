#include <iostream>
#include <cstring>

using namespace std;

/*
- �������� ����̴�						(���)
- �����, ������ �����ϴ� Ŭ���� ������	(ĸ��ȭ)
- ����� �����ϴ� Ŭ����				(������)
- ����� ������ �� ��					(virtual)
- ������ �λ���� ���α׷� �ۼ�
*/

class Employee
{
private:
	char name[100];
public:
	//������
	Employee(const char * name)
	{
		strcpy(this->name, name);
	}
	//��� �̸� ��� �Լ�
	void ShowYourName() const
	{
		cout << "�̸� : " << name << endl;
	}
	//�޿��� ��ȯ�ϴ� �����Լ�
	virtual int GetSalary() const
	{
		return 0;
	}
	//��� ������ ����ϴ� �����Լ�
	virtual void ShowEmployeeInfo() const
	{

	}
};

class PermanentWorker : public Employee
{
private:
	int salary;
public:
	//������
	PermanentWorker(const char * name, int money) : Employee(name), salary(money)
	{}
	//������ ��ȯ�ϴ� �Լ�
	int GetSalary() const //const: ���� ���ϰԲ�
	{
		return salary;
	}
	//������ ����� ����ϴ� �Լ�
	void ShowEmployeeInfo() const
	{
		ShowYourName();
		cout << "���� : " << GetSalary() << endl;
	}
};

class EmployeeHandler
{
private:
	Employee * empList[50]; //������
	int empNum;
public:
	//������
	EmployeeHandler() : empNum(0)//empNum�ʱ�ȭ
	{

	}
	//������ �Լ�
	void AddEmployee(Employee * emp)
	{
		empList[empNum++] = emp;
	}
	//��ü��� ���� ���� ��� �Լ�
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowEmployeeInfo();
	}
	//�̹��� �� ���� �հ� �Լ�
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetSalary();

		cout << "���� �հ� : " << sum << endl;
		empList[0]->GetSalary();
	}
	//�Ҹ���
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	EmployeeHandler handler;
	handler.AddEmployee(new PermanentWorker("ȫ�浿", 200));
	handler.AddEmployee(new PermanentWorker("������", 300));
	handler.ShowAllSalaryInfo();
	handler.ShowTotalSalary();

	return 0;
}