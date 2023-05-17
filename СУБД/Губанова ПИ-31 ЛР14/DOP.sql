--Параметр - название класса '11Б'
/* Цикл по ученикам этого класса.
   Внутренний цикл по оценкам этого ученика.
   Для очередной оценки: нет ли другой оценки у этого ученика по этому же предмету,
   полученной позже. Если есть, то текущую оценку удалить.*/
  
Drop proc Оценки_ученика
Go

Create proc Оценки_ученика @class varchar(8) = '11Б' AS
  Declare @idY int = null, @idO int = null, @idC int, @date datetime = null, @predmet varchar(50) = null
  Select @idC = Код
    From Класс
    Where [Класс] = @class
  Select @idY = min(Код)
    From Ученик
    Where [Код класса] = @idC
  While @idY is not null
  Begin
    Select @idO = min(Код)
      From Оценки
      Where [Код ученика] = @idY
    While @idO is not null
    Begin
	  Select @predmet = [Код предмета], @date = Дата
	    From Расписание, Урок, Оценки
		Where [Код расписания] = Расписание.Код AND [Код урока] = Урок.Код AND @idO = Оценки.Код
	  If exists(
	    Select * From Оценки, Урок, Расписание
		  Where [Код урока] = Урок.Код AND [Код расписания] = Расписание.Код 
		    AND Дата > @date AND [Код предмета] = @predmet AND @idY = [Код ученика]
		)
        Delete From Оценки
          Where @idO = Код		
      Select @idO = min(Код)
        From Оценки
        Where Код > @idO AND [Код ученика] = @idY   
    End 
    Select @idY = min(Код)
      From Ученик
      Where Код > @idY AND [Код класса] = @idC  
  End
GO

Select * From Оценки, Урок 
  Where [Код урока] = Урок.Код 
Begin tran
Exec Оценки_ученика '11Б'
Select * From Оценки, Урок 
  Where [Код урока] = Урок.Код 
Rollback
Go
