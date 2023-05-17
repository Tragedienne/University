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
,('��������', 2, 1, '20211202', 3, 4)
,('���� �����', 1, 2,'20211015', 1, 98)
,('������������', 2, 2, '20221125', 1, 32)
,('�������', 1, 2, '20211202', 3, 37)
,('���������', 2, 1,'20211015', 1, 100)
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


/*������������ ������ � 11
��������� ���������� �������� ��������� �� SQL-�������
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� ����������������� �������� ���������. 
��������� ������ ������������ �������� � ��� ������� �� �����-���� ������������ ������� ���� ������ � 
���������� ��������������� ������ �� �����-���� �������� ������� (��������, �������� ��� �������� � 
���������� ��� ������).
��������� �� ������ ������ � ������� �� ����������� � ���������� � ������������ �� �����������.
����� � ������ ������ ���� ����������� �������� �� ������ ������������� ��������� � ����� Management Studio.*/

Drop Proc �������������
GO

-- �������� - ��� ������
-- ��������� - ������� ������

Create Proc ������������� @��� int
AS
Select ���
  From ������
  Where @��� = ������.[��� ������]
Go

Exec ������������� 2


/*������������ ������ � 13
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� ����������������� �������� ���������. 
��������� ������ ������������ 2 ��������� � �������� �� �������� ����� ���� ������������ ������, 
�� ������� ����������� ����� ������� �������� �������, � ���������� ��������������� ������ �������� ������� 
(��������, �������� ������� ������������� � ������� ��������, � ���������� ������, 
������������ �������� �������������� ���������� ��������).
��� ���������� ������ ���� ������� �������� �� ��������� (�� NULL).
���� ��� ������ ��������� ������ �������� ��������� NULL, ����� ������� �� ����� ��������� ����������� �� ������ 
(��������, ���� � �������� ������� ������������� ������ �������� NULL, �� ������ ���� ���������� ��� ������ 
��������� ��������). �������� �������� NULL � ���������� ������ ����������� � ���������� IF, � �� � �������� ��������.
�������������� ����� ������ ������ ��������� ��� ���� �������� ������� � ���� ������������ ������, 
�� ������� ����������� ����� ������� (������ ���� � ��� �� ����� �����, ���� ���� ����� �� ����� �� �����������).
��������� �� ������ ������ � ������� �� ����������� � ���������� � ������������ �� �����������.
� ������ ����� ������ ���� ������������ ��������� �� ������ ������������� ��������� � ����� Management Studio. 
������ ���� �������� ���������� ��� ���� ���������� NULL / NOT NULL � ����������, ������������ �����������, 
�������� � ��������� ����� ������� ����������, ������������ ������� �������� �� ���������.*/

Drop proc ����������������������
GO

-- �������� - �������� ��������, ��� �������
-- ��������� - ���������� �� ��������� � ���������� �����������

Create proc ���������������������� @���������� varchar(50) = '������� ����', @��� varchar(80) = '�������� ���������� ���������'
AS
If @��� is not null AND @���������� is not null
  Select ���������.���, ��������, [��� ��������], ����������, ����, [��� �������], ���, [��� �������], ���������
	From ���������, �������, ������
	  Where ���������.[��� ��������] = �������.��� AND ���������.[��� �������] = ������.���
AND ���������� = @���������� AND ��� = @���
Else 
  If @��� is not null
    Select ���������.���, ��������, [��� ��������], ����������, ����, [��� �������], ���, [��� �������], ���������
	  From ���������, �������, ������
	    Where ���������.[��� ��������] = �������.��� AND ���������.[��� �������] = ������.���
AND ��� = @���
  Else
	If @���������� is not null
	  Select ���������.���, ��������, [��� ��������], ����������, ����, [��� �������], ���, [��� �������], ���������
	    From ���������, �������, ������
	      Where ���������.[��� ��������] = �������.��� AND ���������.[��� �������] = ������.���
AND ���������� = @����������
    Else
	  Select ���������.���, ��������, [��� ��������], ����������, ����, [��� �������], ���, [��� �������], ���������
	    From ���������, �������, ������
	      Where ���������.[��� ��������] = �������.��� AND ���������.[��� �������] = ������.���
GO

Exec ���������������������� '������� ����', '�������� ���������� ���������'

Exec ���������������������� Null, '�������� ���������� ���������'

Exec ���������������������� '�����������', Null

Exec ���������������������� Null, Null

Exec ���������������������� @���������� = '�����������', @��� = '�������� ���������� ���������'

Exec ���������������������� '�����������', @��� = '���������� ���� ��������'

Exec ���������������������� '�����������'


/*������������ ������ � 14
����������� ����� ��������� ������� � �������� ���������
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� �������� ���������, �������������� ������������ �������� 
��������� ���� �����-���� ������� ���� ������. � ��������� ������ ���� ����������� ���� ��������� ������� ������� 
(��� ������������� �������) � ������������ ��������� �������� �������������� �� ������������ �������� ����. 
�������� �������������� ������ ���� ���������� �� ��������� � ������� ��������� RETURN.
�������� ������� ������������ ������ ��������� �����. ���� ������� ������ ������������� ��������� ��������������� ������� ������� 
(��������, ������ ����� ������� �������� �������� ������������������), �� ���������������, 
��� ������ ����������� �� ����������� �������� ���������� ����� �������.
��������� ����� ���� ���������������, � ���� ������ �������� � ������� ������ ������������ @P.
���� ���� ������������� � ����� �� �������. �� ������ ���� �������� � �������������� �������������� ������� �� ��������� �������, 
�� ����������� ������ ID ��������� ������.
� ������, ����� ��������� ������� ������, ������ ���� ������ ����� ��������, �������� ����� ������� � ������������ � ������� �������� 
� ���� ���������, ����� �������� ���� �� ����� ������� ��������������.
����� � ������ ������ ���� ������������ ��������� �� ���������� ��������� ��������:
1) ���������� ������� ��� ��������� �������� ������ �� ������� ���� ������: ���� ���������� ����� � ��������� ���� � 
���������� ������������������. ������ ������ ���� ����������� �� �������� ���������� �����;
2) ����� ������������� ��������� � ����� Management Studio � ����������� � ���������� ��������, ������������� ����������, 
� ������������ ����� ��������.*/

Drop Proc Summa
Go

--��������� - ����� ��������� ������������������ ��� ���� ���������������� ��������� � ����������� ������ ����� ���� ��� ���������������� ���������

Create Proc Summa As
  Declare @��� int, @���������� int, @������� int, @���_����� int = null, @����� int
  Select @��� = min(���)
    From ������
  While @��� is not null
  Begin
    Set @���������� = @�������
    Select @������� = ����
      From ������
      Where ��� = @���
    If @���_����� is null
      Set @���_����� = @������� + @����������
    Else 
      If @������� + @���������� < @���_�����
        Set @���_����� = @������� + @����������
    Select @��� = min(���)
      From ������
      Where ��� > @���
  End
  Select @����� = sum(����) - @���_����� 
    From ������
  Return @�����
Go

Select ���, ���� 
  From ������
GO

Declare @result int
Exec @result = Summa
Select @result As ���������
GO

/*������������ ������ � 15
�������������� ��������� ������ � �������� �����������
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� ����������������� �������� ���������. 
��������� ������ ������������ �������� � ��� ������� �� �����-���� ������������ ������� ���� ������ � ���������� ��������������� ������ 
�� �����-���� �������� ������� (��������, �������� ��� �������� � ���������� ��� ������).
������������ �������� ������ � ��������� ������ ����������� � ��� �����:
1) ��������� �������� ������ �� ��������� ������� � ������� SELECT � INTO (��������, ������ ��������);
2) ����������� ��������� ������� (��������, �������� ������) c ������� UPDATE ��� DELETE �������;
3) ������� ����������� ��������� ������� ��� ���������� ������ ���������.
��������� �� ������ ������ � ������� �� ����������� � ���������� � ������������ �� �����������.
� ������ ����� ������ ���� ����������� �������� �� ������ ������������� ��������� � ����� Management Studio.*/

Drop Proc ������_�������
GO

--�������� - ��� �������
--��������� - ������ �������, ������� ������ 5 ������

Create Proc ������_������� @���_������� int As
  Select ���, [��� �������], [��� �����], ���� Into #result
    From ������
    Where [��� �������] = @���_�������
  DELETE #result Where ���� <= 5
  Select * From #result
GO

Exec ������_������� 3
GO

/*������������ ������ � 16
��������� ��������� ������ � �������� �����������
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� ����������������� �������� ���������. 
��������� ������ ������������ �������� � ��� ������� �� �����-���� ������������ ������� ���� ������ � ���������� 
��������������� ������ �� �����-���� �������� ������� (��������, �������� ��� �������� � ���������� ��� ������).
������������ �������� ������ � ��������� ������ ����������� � ������ �����:
1) ��������� ������� ������ ���� ������� � ������� CREATE TABLE. ��������� ������� ������ ��������� 
��� ���� �������� ������� � ������������� ���� �� ���� ���� �� ������������ ������� (��������, ��� ���� ������� ������ + ������� ��������);
2) ���������� ��������� ������� ����������� � ������� INSERT INTO � SELECT, ������ � �������������� ���� ��������� NULL;
3) ��������� �������� ��������������� ���� � ������ ��������� ������� � ������� ��������� UPDATE;
4) ������� ����������� ��������� ������� ��� ���������� ������ ���������.
��������� �� ������ ������ � ������� �� ����������� � ���������� � ������������ �� �����������.
� ������ ����� ������ ���� ����������� �������� �� ������ ������������� ��������� � ����� Management Studio.*/

Drop Proc �������������
Go

--�������� - ��� �������
--��������� - ������ �������

Create Proc ������������� @���������� int As
  Create Table #result
    (��� int Primary Key
    , [��� �������] int
    , ��� varchar(80)
    , [��� �����] int
    , ���� int
    )
  Insert Into #result (���, [��� �������], [��� �����], ����) 
    Select * From ������
      Where [��� �������] = @����������
  Update #result
    Set ��� = (
      Select ���
        From ������
        Where ��� = @����������
    ) 
  Select * From #result
Go

Exec ������������� 3


/*������������ ������ � 17
�������������� �������� � �������� �����������
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� ����������������� �������� ���������. 
��������� ������ ������������ �������� � ��� ������� �� �����-���� ������������ ������� ���� ������ � 
���������� ��������������� ������ �� �����-���� �������� ������� (��������, �������� ��� �������� � ���������� ��� ������).
������������ �������� ������ � ��������� ������ ����������� � ���� ������:
1)      �������� ��������� ������� � ������� CREATE TABLE. ��������� ������� ������ ��������� ��� ���� �������� ������� � 
������������� ���� �� ���� ���� �� ������������ ������� (��������, ��� ���� ������� ������ + ������� ��������);
2)      ���������� ������� ��� ��������� �������� ���� ������������ ������� (������� ��������);
3)      �������� �������, ������������� ������ �������� �������;
4)      ���� ����� ������� � ������� �������. � ���� ����� ��� ������ ��������� ������ ����������� ������ INSERT INTO � VALUES 
��� ��������� ��������� ������ �� ��������� �������;
5)      ������� ����������� ��������� ������� ��� ���������� ������ ���������.
��������� �� ������ ������ � ������� �� ����������� � ���������� � ������������ �� �����������.
� ������ ����� ������ ���� ����������� �������� �� ������ ������������� ��������� � ����� Management Studio.*/

Drop Proc �����������
GO
 
--�������� - ��� �������
--��������� - ������ �������

Create Proc ����������� @��� int AS
  Create Table #res
  (��� int Primary Key
  ,[��� �������] int
  ,[��� �������] varchar(80)
  ,[��� �����] int
  ,���� int
  )
Declare @��� varchar(80) = (
  Select ��� 
    From ������
    Where ��� = @���
  )
Declare ������ Cursor for
  Select ���, [��� �����], ����
    From ������
    Where @��� = [��� �������]

Open ������
Declare @���1 int, @���_����� int, @���� int
Fetch ������ Into @���1, @���_�����, @����
While @@FETCH_STATUS = 0
Begin
  Insert Into #res Values(@���1, @���, @���, @���_�����, @����)
  Fetch ������ Into @���1, @���_�����, @����
End
Close ������
Deallocate ������
Select * From #res
Go

Exec ����������� 1


/*������������ ������ � 18
����������� �������, ������������ �������� (��������� �������)�
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� �������, ������������ ��������. 
������� ������ ������������ �������� � ��� ������� �� �����-���� ������������ ������� ���� ������ � ���������� ��������, ������������ �� 
��������������� ������� �� �����-���� �������� ������� (��������, �������� ��� �������� � ���������� ��� ������� ����).
������� �� ������ ������ � ������� �� ����������� � ���������� � ������������ �� �����������.
����� � ������ ������ ���� ����������� �������� �� ���������� ������� � ����� Management Studio ��� ��������� ������� �� 
������������ ������� � ���������������� ��������, ������������� �������� (����, �������, ������ �������� � ��� �������� �����).*/

Drop function �������������
Go

--�������� - ��� �������
--��������� - ������� ��������� �� ���������� �������

Create function ������������� (@��� int)
Returns int
  Begin
    Return (Select avg(���������) From ��������� Where @��� = [��� �������])
  End
Go

Select *, dbo.�������������(���) As ResAvg
  From ������


/*������������ ������ � 19
����������� �������, ������������ ������� ��������� ��������
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� �������, ������������ ������� � ������� ���������� ������� (RETURNS TABLE). 
������� ������ ������������ �������� � ��� ������� �� �����-���� ������������ ������� ���� ������ � ���������� ��������������� ������ �� 
�����-���� �������� ������� (��������, �������� ��� �������� � ���������� ��� ������).
������� �� ������ ������ � ������� �� ����������� � ���������� � ������������ �� �����������.
����� � ������ ������ ���� ����������� �������� �� ���������� ������� � ������� ������������� ������� � ����� Management Studio.*/

Drop function ResOfPupil
Go

--�������� - ��� �������
--��������� - ���������� �������

Create function ResOfPupil (@��� int)
Returns table
AS
Return
  Select ���, ��������, [��� �������], [��� ��������], ����, ���������
    From ���������
    Where [��� �������] = @���
Go

Select * From ResOfPupil(1)


/*������������ ������ � 20
����������� �������, ������������ �������, ���������� ������������������� ����������/��������
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� �������, ������������ �������, 
���������� ����� ���������� ������������������ ����������/��������. 
������� ������ ������������ �������� � ��� ������� �� �����-���� ������������ ������� ���� ������ � ���������� �������, 
���������� ��� ���� �������� �������, � ������������� ���� �� ���� ���� �� ������������ ������� 
(��������, ��� ���� ������� ������ + ������� ��������).
������������ �������������� ������� � ������� ������ ����������� � ��� �����:
1)      ��������� �������� ���� ������������ �������;
2)      ���������� ������� INSERT INTO � SELECT ��� ��������� ������ � �������������� ������� �������.
������� �� ������ ������ � ������� �� ����������� � ���������� � ������������ �� �����������.
����� � ������ ������ ���� ����������� �������� �� ���������� ������� � ������� ������������� ������� � ����� Management Studio.*/

Drop function ����������_������
Go
-- �������� - ��� �������.
-- ��������� - ���������� ��������� ��� ���������� �������.
Create function ����������_������ (@��� int)
Returns @res Table
  (��� int Primary Key
  ,�������� varchar(80)
  ,[��� �������] int
  ,[��� ��������] int
  ,���� date
  ,[��� �������] int
  ,��������� int
  ,��� varchar(80)
  )
Begin
  Declare @��� varchar(80)
  Select @��� = ���
	From ������
	Where ��� = @���
  Insert into @res
	Select *, @���
	  From ���������
	  Where [��� �������] = @���
  Return
End
Go

Select * From ����������_������(1)


/*������������ ������ � 21
����������� �������, ������������ �������������� ������������ �������� ��������
� ������ ������ ���� ����������� ����� SQL-������� ��� �������� ��������� �������, ������������ �������� ��������������, ������������  �� ������������ �������� �������� ��������� ���� ��������� ������� ���� ������. ������� ������� ������������ ������ ��� ��, ��� � � ������ �14.
������� ������ �������� �� 3-� ����������:
1)      �������� ���������� ��� ���������� ����������;
2)      ������������� SELECT-������� � ���� ������ ��� ��������� ��������� �������������� � 
��������� �������� � ���������� (� ������� �������� ������������� �����������, � ��� ����� � ������ ����� (������������ ��������) � � ����������� FROM (������������ ����� ������));
3)      ��������� RETURN.
����� � ������ ������ ���� ������������ ��������� �� ���������� ��������� ��������:
1)      ���������� ������� ��� ��������� �������� ������ �� ������� ���� ������: ���� ���������� ����� � 
��������� ���� � ���������� ������������������. ������ ������ ���� ����������� �� �������� ���������� �����;
2)      ���������� ������� � ����� Management Studio ��� ������ ������� � ����������� ����������� ��������.
�������: 
4.����� ����� ��������� ������������������ ��� ���� ���������������� ��������� � ����������� ������ 
����� ���� ��� ���������������� ���������*/

Drop Function �����
Go

--��������� - ����� ��������� ������������������ ��� ���� ���������������� ��������� � ����������� ������ ����� ���� ��� ���������������� ���������.

Create Function �����()
Returns int
Begin
  Declare @����� int
  Set @����� =
    (Select sum(����)
      From ������
    ) -
	(Select min(Summa) 
      From (Select P1.���� + P2.���� AS Summa
	    From ������ AS P1, ������ AS P2
        Where P2.��� = (
		  Select min(���)
		    From ������
		    Where ��� > P1.���)
		  ) AS �����
	)
  Return @�����
End
Go

Select ���, ���� From ������ Order by ���
Go

Select dbo.�����() as Res


/*������������ ������ � 22
����������� ��������� ��� ������ ���� ������ � ����������� ��������� �����������
����������� �������� ��� ����������� ��������� ����������� ���� ������. � ������ ������ ���� ������������ SQL-������� ��� 
�������� �������� ��������� ������ ����� ��������� � �������� ��������� ��� ������ ���� ��������. 
������ ���� ����������� �������� ��������� �����:
1)      ��� ���������� �������� ������� �������� ������� ��� �������� ������ ������������ �������;
2)      ������� �� �������� ������ ������������ ������� ��� ������� ��������� ������� � �������� �������;
3)      �������� ������� ������ ������������ ������� ��� ��������� ������ �������� �������;
4)      �������� ������� ������ ������������ ������� ��� ��������� ���� ���� ������ � �������� �������.
� ������ ����� ������ ���� ������������ ���������, ��������������� �������� ��������� ��� ������ � ����� ������ �� 
������� �� MS Access:
1)      ��� ���������� �������� �������: ���������� �������� ������� �� �������� ������ ������������ �������, 
�������� ������ ������������ �������,  ���������� �������� ������� ����� �������� ������ ������������ �������;
2)      ��� ������� �� ��������: ��������� �� ������ ��� ������� �������� ������;
3)      ��� �������� ������� ������: ��������������� ��������� �� ������ (����� ����������� � ������ ����������� �������� �������, 
����� ��� ������ ������������ ������� �������� �������).*/

Alter Table ������
  Drop FK_������_����
Go

Alter Table ������
  Drop FK_������_�����
Go

Alter Table ����������
  Drop FK_����������_�����
Go

Alter Table ������
  Drop FK_������_�������
Go

-- 1. ��� ���������� �������� ������� �������� ������� ��� �������� ������ ������������ �������.
Create trigger trg����_delete on ����
  After delete
As
  Delete from ������ 
    Where [��� �����] in (Select ��� From deleted)
Go

-- 2. ������� �� �������� ������ ������������ ������� ��� ������� ��������� ������� � �������� �������.
Create trigger trg�����_delete on �����
  After delete
As
  If exists(Select * from ������ Where [��� ������] in (Select ��� from deleted))
  Begin
    Raiserror('������ �������, ��� ��� ������� �������.', 16, 2)
    Rollback tran
  End
Go

-- 3. �������� ������� ������ ������������ ������� ��� ��������� ������ �������� �������.
Create trigger trg���������_������ on ������
  After insert
As
  If exists(Select * from inserted where [��� �������] not in (Select ��� From ������))
  Begin
    Raiserror('�������� ��� �������.', 16, 2)
    Rollback tran
  End
Go
-- 4. �������� ������� ������ ������������ ������� ��� ��������� ���� ���� ������ � �������� �������.
Create trigger trg���������_������ on ������
  After update
As
  If update([��� �������])
    If exists(Select * from inserted where [��� �������] not in (Select ��� from ������))
  Begin
    Raiserror('�������� ��� �������.', 16, 2)
    Rollback tran
  End
Go

/*������������ ������ � 23
����������� ��������� ��� ������ ���� ������ � ���������� ��������� ����������
����������� �������� ��� ���������� ��������� ���������� � ������� ���� ������. 
� ������ ������ ���� ������������ ��������� SQL-�������:
1)      ��� ���������� ���� ��������� ���������� � ������� (���������� ���� ����������� � ������� �������);
2)      ���������� ���������� ���� (���������� ���� ����������� �� �������� ����������� ������� ������);
3)      �������� ��������� ��� ������������� ���� (�������� �������� ���� ����������� ��� ������������� ������� ������).
� ������ ����� ������ ���� ������������ ��������� Management Studio, ��������������� �������� ���������:
1)      ���������� ������� ����� ���������� ����������;
2)      ������� �� ����������, ��������, ��������� ������� �������, �� ������� ����������� ������ ������ (������� ������) � 
����� ���������� ���� ��������� ����������. ������� �� �������� � ��������� ������ �������� ���������� ���� 
����� ��� � ����� ������.*/

Alter table ������
  Add kol int not null default 0
Go

Update ������
  Set kol =
    (Select count(*) From ������ Where ������.��� = [��� �������])
Go

Create trigger trg������kol on ������
  After insert, update, delete
As
  Update ������
    Set kol -= k
	  From (Select [��� �������], count(*) As k From deleted Group by [��� �������]) As tabl
      Where ������.��� = [��� �������]
  Update ������
    Set kol += k
	  From (Select [��� �������], count(*) As k From inserted Group by [��� �������]) As tabl
      Where ������.��� = [��� �������]
Go

Select * from ������
Go

Insert into ������
  Values (1,1,4)
  ,(2,2,6)
  ,(3,3,8)
Go

Select * from ������
Go

Delete from ������
  Where ��� = 3
Go

Select * from ������
Go

Update ������
  Set [��� �������] = 1
  Where [��� �������] = 2

Select * from ������
Go

/*������������ ������ � 24
����������� ��������� ��� ������ ���� ������ � ���������� ������ ����� �������������
����������� �������� ��� ���������� ������ ����� �������������.
� ������ ������ ���� ������������ ��������� SQL-�������:
1)      ��� �������� �������������, ������������� ��� ���� �������� ������� � ���� ������������ �������  
(��� ���� ������� ������ � ������� ��������);
2)      �������� INSTEAD-��������� ��� ���������� �������� �������, ���� ���������� ������ ����������� 
		��� ������������� (��� ����������, ��������, ��������� ������� ����� ������������� ���������� ������� ������).
� ������ ����� ������ ���� ������������ ��������� Management Studio, ��������������� �������� ��������:
1)      ��������� ����������, ��������, ��������� ������� ����� �������������;
2)      ���������� �������� ������� ����� ���������� ��������.*/

Drop View ������_������
Go

Create View ������_������
As
  Select ������.���, [��� �������], [��� �����], ����, ���
    From ������, ������
    Where [��� �������] = ������.���
Go

Create Trigger trg������_������I on ������_������ Instead of Insert
As
  Insert Into ������
    Select [��� �������], [��� �����], ����
      From inserted
      Where ��� is null
  Insert Into ������
    Select ������.���, [��� �����], ����
      From inserted, ������
      Where inserted.��� = ������.��� and [��� �������] is null
  Insert Into ������
    Select ������.���, [��� �����], ����
      From inserted, ������
      Where [��� �������] = ������.��� and inserted.��� = ������.��� and [��� �������] is not null and inserted.��� is not null
Go

Create Trigger trg������_������U on ������_������ Instead of Update
As
  If not Update (���)
    Update ������
      Set [��� �������] = inserted.[��� �������]
        , [��� �����] = inserted.[��� �����]
        , ���� = inserted.����
      From inserted
      Where inserted.��� = [������].���
  Else
    If not Update ([��� �������])
      Update ������
        Set [��� �������] = ������.���
		  , [��� �����] = inserted.[��� �����]
          , ���� = inserted.����
        From inserted, ������
        Where inserted.��� = ������.��� and inserted.��� = ������.���
    Else
      Update ������
        Set [��� �������] = ������.���
          , [��� �����] = inserted.[��� �����]
          , ���� = inserted.����
        From inserted, ������
        Where inserted.��� = ������.��� and inserted.��� = ������.��� and inserted.[��� �������] = ������.���
Go

Create Trigger trg������_������D on ������_������ Instead of Delete
As
  Delete From ������ Where ��� in (Select ��� From deleted)
Go

Select * From ������
Go

Insert into ������_������ ([��� �������], [��� �����], ����, ���)
  Values(null, 2, 4, '�������� �������� ���������')
  ,(2, 4, 1, null)
  ,(3, 6, 5, '���������� ���� ��������')
Go

Select * From ������
Go

Update ������_������
  Set [��� �������] = 3
  Where [��� �������] = 2
Go
Update ������_������
  Set ��� = '�������� �������� ���������'
  Where ��� = '�������� ���������� ���������'
Go
Update ������_������
  Set [��� �������] = 2, ��� = '�������� �������� ���������'
  Where [��� �������] = 3
Go

Select * From ������
Go

Delete From ������_������
  Where ��� = 4
Go

Select * From ������
Go
