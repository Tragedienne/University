--�������� - �������� ������ '11�'
/* ���� �� �������� ����� ������.
   ���������� ���� �� ������� ����� �������.
   ��� ��������� ������: ��� �� ������ ������ � ����� ������� �� ����� �� ��������,
   ���������� �����. ���� ����, �� ������� ������ �������.*/
  
Drop proc ������_�������
Go

Create proc ������_������� @class varchar(8) = '11�' AS
  Declare @idY int = null, @idO int = null, @idC int, @date datetime = null, @predmet varchar(50) = null
  Select @idC = ���
    From �����
    Where [�����] = @class
  Select @idY = min(���)
    From ������
    Where [��� ������] = @idC
  While @idY is not null
  Begin
    Select @idO = min(���)
      From ������
      Where [��� �������] = @idY
    While @idO is not null
    Begin
	  Select @predmet = [��� ��������], @date = ����
	    From ����������, ����, ������
		Where [��� ����������] = ����������.��� AND [��� �����] = ����.��� AND @idO = ������.���
	  If exists(
	    Select * From ������, ����, ����������
		  Where [��� �����] = ����.��� AND [��� ����������] = ����������.��� 
		    AND ���� > @date AND [��� ��������] = @predmet AND @idY = [��� �������]
		)
        Delete From ������
          Where @idO = ���		
      Select @idO = min(���)
        From ������
        Where ��� > @idO AND [��� �������] = @idY   
    End 
    Select @idY = min(���)
      From ������
      Where ��� > @idY AND [��� ������] = @idC  
  End
GO

Select * From ������, ���� 
  Where [��� �����] = ����.��� 
Begin tran
Exec ������_������� '11�'
Select * From ������, ���� 
  Where [��� �����] = ����.��� 
Rollback
Go
