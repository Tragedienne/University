-- �������� - �����, ����������
-- ��������� - ���������� ������ � ���� ������ �� ���� ����������
--� ���������� ������ ���� �������� �� ���������

Drop proc �������
GO

Create proc ������� @����� varchar(40) = '2�', @���������� varchar(40) = '�����������'
AS
If @����� is not null AND @���������� is not null
  Select count(����) AS ���
    From �����, ������, ������, ����, ����������, �������
      Where �����.��� = ������.[��� ������] AND ������.��� = ������.[��� �������] AND
      ������.[��� �����] = ����.��� AND ����.[��� ����������] = ����������.��� AND ����������.[��� ��������] = �������.��� AND
      ����� = @����� AND ���������� = @����������
Else
  If @����� is not null 
    Select count(����) AS ���
      From �����, ������, ������
        Where �����.��� = ������.[��� ������] AND ������.��� = ������.[��� �������] AND ����� = @����� 
  Else
    If @���������� is not null 
      Select count(����) AS ���
        From ������, ����, ����������, �������
          Where ������.[��� �����] = ����.��� AND ����.[��� ����������] = ����������.��� AND ����������.[��� ��������] = �������.��� AND ���������� = @���������� 
    Else
      Select count(����) AS ���
        From ������
GO
     
Exec ������� '2�', '�����������'
Exec ������� '2�', Null
Exec ������� Null, '�����������'
Exec ������� Null, Null

Exec ������� @����� = '11�', @���������� = '�����������'
Exec ������� '2�', @���������� = '������� ����'
Exec ������� '2�'