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

/*������������ ������ �8
�������������� SQL-�������� ��� ����������� �������
� ������ ������ ���� ����������� ����� SQL-�������� ��� ��������� ������ � ���� ������ � INSERT INTO�VALUES, 
����������� ������� � �����-���� ����� ������� � UPDATE, �������� ������� �� �����-���� ����� ������� � DELETE 
(������� ����������� � �������� ������� ��� ������ � ������� �� ����������� ��� ���������� � ������������ �� �����������).
� ���������� ���������� ������ � ������ ������� ������ ���� �������� �� ����� 2-� �������, 
� ������ �������� ������� ������ ���� �������� ������ �������, ��� � ����� �� � ������������ ������.*/

Insert Into �������
Values('������� ����')
,('����������')
,('�����������')

Insert Into ���������
Values('������� �������� �����')
,('������� ����������')
,('������� �����������')

Insert Into �������
Values('�������� ����� ����������','��.�������� 71-53', '+375299761795', 1, 1)
,('��������� ������� ����������', '��.����������� 17-12', '+375445712470', 2, 2)
,('��������� ����� ����������', '��.��������� 1-46', '+375258457125', 3, 3)
,('������� ��������� ���������', '��.����������� 29-56', '+375299012673', 1, 1)

Insert Into �������
Values('2-3')
,('2-14')

Insert Into �����
Values('2�')
,('11�')

Insert Into ������
Values('�������� ���������� ���������', '�������', '20021219', '��. �������� 7-2-52', 2, 2009, 2020)
,('�������� �������� ���������', '�������', '20021110', '��. ����������� 32-56', 1, 2009, 2020)
,('���������� ���� ��������', '�������', '20150512', '��. ��������� 15-27', 2, 2021, Null)

Insert Into ���������
Values('�������', 2, 2, '20220212', 1, 45)
,('��������', 3, 2,'20220111', 2, 60)
,('���������', 3, 3,'20220301', 3, 12)
,('��������', 1, 2, '20211202', 3, 4)
,('���� �����', 2, 2,'20211015', 1, 98)
,('������������', 2, 2, '20221125', 1, 32)
,('�������', 1, 2, '20211202', 3, 37)
,('���������', 2, 2,'20211015', 1, 100)
,('������', 2, 2, '20221125', 1, 29)

Insert Into ����������
Values(1, 3, 3, 2, 1, '8:00:00')
,(2, 1, 1, 1, 2, '9:00:00')
,(3, 2, 2, 1, 1, '10:00:00')
,(4, 2, 2, 2, 1, '11:00:00')
,(5, 3, 3, 2, 2, '12:00:00') 

Insert Into ����
Values('20211210', 1)
,('20211212', 2)
,('20220302', 2)
,('20220208', 5)
,('20220218', 4)
,('20211217', 3)

Insert Into ������
Values(2, 2, 4)
,(2, 4, 1)
,(3, 6, 5)
,(1, 1, 8)
,(1, 3, 8)
,(2, 5, 3)
,(3, 6, 10)

Update �������
Set ���������� = '�����������'
Where ���������� = '����������'

Delete ���������
Where ��������� < 20

/*������������ ������ �9
��������� ������������� (view)�
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� �������������.
������ � ������������� ������ ���������� ������ �� ����� ��� �� 2-� ������ ���� ������ 
(������������� �� ������ ������ � ������� �� ����������� � ���������� � ������������ �� �����������).
����� ����� ������ ��������� �������� �� ���������� ������� � �������������� ������������� � ����� Management Studio.*/


Drop view �������������������
Go

--��������� - ���������� �� �������, ���������� ���������� �� �������� � ������.

Create view �������������������
As select ���, [��� ������], ����, ����
From ������, ������, ����
Where ������.[��� �������] = ������.��� AND ������.[��� �����] = ����.���
GO

Select *
From �������������������
Go