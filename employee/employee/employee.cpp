#include <iostream>
#include <cstring>

using namespace std;

/*
- �������� ����̴�
- �����, ������ �����ϴ� Ŭ���� ������
- ����� �����ϴ� Ŭ����
- ����� ������ �� ��
- ������ �λ���� ���α׷� �ۼ�
*/

class Employee
{
private:
	char name[100];
public:
	//������
	//��� �̸� ��� �Լ�
};

class PermanentWorker : public Employee
{
private:
	int salary;
public:
	//������
	//������ ��ȯ�ϴ� �Լ�
	//������ ����� ����ϴ� �Լ�
};

class EmployeeHandler
{
private:
	Employee * empList[50];
	int empNum;
public:
	//������
	//������ �Լ�
	//��ü��� �޿����� ��� �Լ�
	//�̹��� �� ���� �հ� �Լ�
	//�Ҹ���
};

int main(void)
{
	EmployeeHandler handler;
	//handler.AddEmpolyee(new PermanentWorker("ȫ�浿", 200));
	//handler.ShowAllSalaryInfo();
	//handler.ShowTotalSalary

	return 0;
}