/*������������ ������ �5
��������� ������ � ������� SQL-��������
� ������ ������ ���� ����������� ����� SQL-�������� ��� �������� ���� ������ ������������� ���� ������.
����� � CREATE TABLE ������ ���� ���������� �������� ����� �� ���������, 
����������� ������������ � ����������� ����������� (� CREATE TABLE ��� ���� ������ ������ ���� ���������� ���� �� �� ������ ����������� ������� ����). 
�������� ����� �� ���������, ����������� ������������ � ����������� ����������� �� ������� � ������� �� ����������� � 
���������� � ������������ �� �����������.*/

Drop Table ����������
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

Drop Table ���������
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

Drop Table �������
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

Drop Table ������
GO
Create Table ������
(��� int Identity Primary Key
, [��� �������] int Not NULL
, [��� �����] int Not NULL
, ���� int Not NULL Default 1
)
GO

Drop Table ������
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

Drop Table ����
GO
Create Table ����
(��� int Identity Primary Key
, ���� date Not NULL
, [��� ����������] int Not NULL
)
GO

Drop Table �������
GO
Create Table �������
(��� int Identity Primary Key
, ���������� varchar(50) Not NULL
)
GO

Drop Table �����
GO
Create Table �����
(��� int Identity Primary Key
, ����� varchar(8) Not NULL
)
GO

Drop Table �������
GO
Create Table �������
(��� int Identity Primary Key
, ����� varchar(8) Not NULL unique
)
GO

Drop Table ���������
GO
Create Table ���������
(��� int Identity Primary Key
, ��������� varchar(50) Not NULL
)
GO
