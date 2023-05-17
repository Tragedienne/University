/*ЛАБОРАТОРНАЯ РАБОТА №5
«Создание таблиц с помощью SQL-запросов»
В отчете должен быть представлен текст SQL-запросов для создания всех таблиц разработанной базы данных.
Также в CREATE TABLE должны быть определены значения полей по умолчанию, 
ограничения уникальности и проверочные ограничения (в CREATE TABLE для базы данных должно быть определено хотя бы по одному ограничению каждого вида). 
Значения полей по умолчанию, ограничения уникальности и проверочные ограничения на таблицы с данными по сотрудникам и 
должностям к рассмотрению не принимаются.*/

Alter Table Урок
Drop FK_Урок_Расписание
GO

Alter Table Олимпиада
Drop FK_Олимпиада_Учитель
, FK_Олимпиада_Предмет
, FK_Олимпиада_Ученик
GO

Alter Table Учитель
Drop FK_Учитель_Должность
, FK_Учитель_Предмет
GO

Alter Table Расписание
Drop FK_Расписание_Учитель
, FK_Расписание_Предмет
, FK_Расписание_Кабинет
, FK_Расписание_Класс
GO

Alter Table Ученик
Drop FK_Ученик_Класс
GO

Alter Table Оценки
Drop FK_Оценки_Ученика
, FK_Оценки_Урок
GO

Drop Table Расписание
GO
Drop Table Олимпиада
GO
Drop Table Учитель
GO
Drop Table Оценки
GO
Drop Table Ученик
GO
Drop Table Урок
GO
Drop Table Предмет
GO
Drop Table Класс
GO
Drop Table Кабинет
GO
Drop Table Должность
GO

Create Table Расписание
(Код int Identity Primary Key
, [Номер урока] int Not NULL
, [Код учителя] int Not NULL
, [Код предмета] int Not NULL
, [Код кабинета] int Not NULL
, [Код класса] int Not NULL
, Время time Not NULL
)
GO

Create Table Олимпиада
(Код int Identity Primary Key
, Название varchar(50) Not NULL
, [Код учителя] int Not NULL
, [Код предмета] int Not NULL
, Дата date Not NULL
, [Код ученика] int Not NULL
, Результат int Not NULL Check (Результат >= 0 AND Результат <= 100) 
)
GO

Create Table Учитель
(Код int Identity Primary Key
, ФИО varchar(50) Not NULL
, Адрес varchar(50) Not NULL
, Телефон varchar(50) Not NULL
, [Код должности] int Not NULL
, [Код предмета] int Not NULL
)
GO

Create Table Оценки
(Код int Identity Primary Key
, [Код ученика] int Not NULL
, [Код урока] int Not NULL
, Балл int Not NULL Default 1
)
GO

Create Table Ученик
(Код int Identity Primary Key
, ФИО varchar(50) Not NULL
, Пол varchar(8) Not NULL
, [Дата рождения] date Not NULL
, Адрес varchar(50) Not NULL
, [Код класса] int Not NULL
, [Год поступления] int Not NULL
, [Год выпуска] int 
)
GO

Create Table Урок
(Код int Identity Primary Key
, Дата date Not NULL
, [Код расписания] int Not NULL
)
GO

Create Table Предмет
(Код int Identity Primary Key
, Дисциплина varchar(50) Not NULL
)
GO

Create Table Класс
(Код int Identity Primary Key
, Класс varchar(8) Not NULL
)
GO

Create Table Кабинет
(Код int Identity Primary Key
, Номер varchar(8) Not NULL unique
)
GO

Create Table Должность
(Код int Identity Primary Key
, Должность varchar(50) Not NULL
)
GO

/*ЛАБОРАТОРНАЯ РАБОТА №7
«Определение связей между таблицами с помощью SQL запросов»
В отчете должен быть представлен текст SQL-запросов для определения связей между таблицами (ALTER TABLE + CONSTRAINT).
Также в ALTER TABLE должны быть определены ограничения уникальности и проверочные ограничения 
(в ALTER TABLE для базы данных должно быть определено хотя бы по одному ограничению каждого вида).
Ограничения уникальности и проверочные ограничения на таблицы с данными по сотрудникам и должностям 
к рассмотрению не принимаются.*/

Alter Table Урок
Add Constraint FK_Урок_Расписание Foreign Key ([Код расписания]) References Расписание(Код)
GO

Alter Table Олимпиада
Add Constraint FK_Олимпиада_Учитель Foreign Key ([Код учителя]) References Учитель(Код)
, Constraint FK_Олимпиада_Предмет Foreign Key ([Код предмета]) References Предмет(Код)
, Constraint FK_Олимпиада_Ученик Foreign Key ([Код ученика]) References Ученик(Код)
, Constraint Уникальное_Название Unique (Название)
GO

Alter Table Учитель
Add Constraint FK_Учитель_Должность Foreign Key ([Код должности]) References Должность(Код)
, Constraint FK_Учитель_Предмет Foreign Key ([Код предмета]) References Предмет(Код)
GO

Alter Table Расписание
Add Constraint FK_Расписание_Учитель Foreign Key ([Код учителя]) References Учитель(Код)
, Constraint FK_Расписание_Предмет Foreign Key ([Код предмета]) References Предмет(Код)
, Constraint FK_Расписание_Кабинет Foreign Key ([Код кабинета]) References Кабинет(Код)
, Constraint FK_Расписание_Класс Foreign Key ([Код класса]) References Класс(Код)
GO

Alter Table Ученик
Add Constraint FK_Ученик_Класс Foreign Key ([Код класса]) References Класс(Код)
GO

Alter Table Оценки
Add Constraint FK_Оценки_Ученика Foreign Key ([Код ученика]) References Ученик(Код)
, Constraint FK_Оценки_Урок Foreign Key ([Код урока]) References Урок(Код)
, Constraint Диапазон_Оценок Check (Балл >= 1 AND Балл <= 10)
GO
