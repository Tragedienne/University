/*������������ ������ �5
��������� ������ � ������� SQL-��������
� ������ ������ ���� ����������� ����� SQL-�������� ��� �������� ���� ������ ������������� ���� ������.
����� � CREATE TABLE ������ ���� ���������� �������� ����� �� ���������, 
����������� ������������ � ����������� ����������� (� CREATE TABLE ��� ���� ������ ������ ���� ���������� ���� �� �� ������ ����������� ������� ����). 
�������� ����� �� ���������, ����������� ������������ � ����������� ����������� �� ������� � ������� �� ����������� � 
���������� � ������������ �� �����������.*/

Alter Table ����
Drop FK_����_����������
GO

Alter Table ���������
Drop FK_���������_�������
, FK_���������_�������
, FK_���������_������
GO

Alter Table �������
Drop FK_�������_���������
, FK_�������_�������
GO

Alter Table ����������
Drop FK_����������_�������
, FK_����������_�������
, FK_����������_�������
, FK_����������_�����
GO

Alter Table ������
Drop FK_������_�����
GO

Alter Table ������
Drop FK_������_�������
, FK_������_����
GO

Drop Table ����������
GO
Drop Table ���������
GO
Drop Table �������
GO
Drop Table ������
GO
Drop Table ������
GO
Drop Table ����
GO
Drop Table �������
GO
Drop Table �����
GO
Drop Table �������
GO
Drop Table ���������
GO

Create Table ����������
(��� int Identity Primary Key
, [����� �����] int Not NULL
, [��� �������] int Not NULL
, [��� ��������] int Not NULL
, [��� ��������] int Not NULL
, [��� ������] int Not NULL
, ����� time Not NULL
)
GO

Create Table ���������
(��� int Identity Primary Key
, �������� varchar(50) Not NULL
, [��� �������] int Not NULL
, [��� ��������] int Not NULL
, ���� date Not NULL
, [��� �������] int Not NULL
, ��������� int Not NULL Check (��������� >= 0 AND ��������� <= 100) 
)
GO

Create Table �������
(��� int Identity Primary Key
, ��� varchar(50) Not NULL
, ����� varchar(50) Not NULL
, ������� varchar(50) Not NULL
, [��� ���������] int Not NULL
, [��� ��������] int Not NULL
)
GO

Create Table ������
(��� int Identity Primary Key
, [��� �������] int Not NULL
, [��� �����] int Not NULL
, ���� int Not NULL Default 1
)
GO

Create Table ������
(��� int Identity Primary Key
, ��� varchar(50) Not NULL
, ��� varchar(8) Not NULL
, [���� ��������] date Not NULL
, ����� varchar(50) Not NULL
, [��� ������] int Not NULL
, [��� �����������] int Not NULL
, [��� �������] int 
)
GO

Create Table ����
(��� int Identity Primary Key
, ���� date Not NULL
, [��� ����������] int Not NULL
)
GO

Create Table �������
(��� int Identity Primary Key
, ���������� varchar(50) Not NULL
)
GO

Create Table �����
(��� int Identity Primary Key
, ����� varchar(8) Not NULL
)
GO

Create Table �������
(��� int Identity Primary Key
, ����� varchar(8) Not NULL unique
)
GO

Create Table ���������
(��� int Identity Primary Key
, ��������� varchar(50) Not NULL
)
GO

/*������������ ������ �7
������������ ������ ����� ��������� � ������� SQL ��������
� ������ ������ ���� ����������� ����� SQL-�������� ��� ����������� ������ ����� ��������� (ALTER TABLE + CONSTRAINT).
����� � ALTER TABLE ������ ���� ���������� ����������� ������������ � ����������� ����������� 
(� ALTER TABLE ��� ���� ������ ������ ���� ���������� ���� �� �� ������ ����������� ������� ����).
����������� ������������ � ����������� ����������� �� ������� � ������� �� ����������� � ���������� 
� ������������ �� �����������.*/

Alter Table ����
Add Constraint FK_����_���������� Foreign Key ([��� ����������]) References ����������(���)
GO

Alter Table ���������
Add Constraint FK_���������_������� Foreign Key ([��� �������]) References �������(���)
, Constraint FK_���������_������� Foreign Key ([��� ��������]) References �������(���)
, Constraint FK_���������_������ Foreign Key ([��� �������]) References ������(���)
, Constraint ����������_�������� Unique (��������)
GO

Alter Table �������
Add Constraint FK_�������_��������� Foreign Key ([��� ���������]) References ���������(���)
, Constraint FK_�������_������� Foreign Key ([��� ��������]) References �������(���)
GO

Alter Table ����������
Add Constraint FK_����������_������� Foreign Key ([��� �������]) References �������(���)
, Constraint FK_����������_������� Foreign Key ([��� ��������]) References �������(���)
, Constraint FK_����������_������� Foreign Key ([��� ��������]) References �������(���)
, Constraint FK_����������_����� Foreign Key ([��� ������]) References �����(���)
GO

Alter Table ������
Add Constraint FK_������_����� Foreign Key ([��� ������]) References �����(���)
GO

Alter Table ������
Add Constraint FK_������_������� Foreign Key ([��� �������]) References ������(���)
, Constraint FK_������_���� Foreign Key ([��� �����]) References ����(���)
, Constraint ��������_������ Check (���� >= 1 AND ���� <= 10)
GO
