/*ЛАБОРАТОРНАЯ РАБОТА №5
«Создание таблиц с помощью SQL-запросов»
В отчете должен быть представлен текст SQL-запросов для создания всех таблиц разработанной базы данных.
Также в CREATE TABLE должны быть определены значения полей по умолчанию, 
ограничения уникальности и проверочные ограничения (в CREATE TABLE для базы данных должно быть определено хотя бы по одному ограничению каждого вида). 
Значения полей по умолчанию, ограничения уникальности и проверочные ограничения на таблицы с данными по сотрудникам и 
должностям к рассмотрению не принимаются.*/

Drop Table Расписание
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

Drop Table Олимпиада
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

Drop Table Учитель
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

Drop Table Оценки
GO
Create Table Оценки
(Код int Identity Primary Key
, [Код ученика] int Not NULL
, [Код урока] int Not NULL
, Балл int Not NULL Default 1
)
GO

Drop Table Ученик
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

Drop Table Урок
GO
Create Table Урок
(Код int Identity Primary Key
, Дата date Not NULL
, [Код расписания] int Not NULL
)
GO

Drop Table Предмет
GO
Create Table Предмет
(Код int Identity Primary Key
, Дисциплина varchar(50) Not NULL
)
GO

Drop Table Класс
GO
Create Table Класс
(Код int Identity Primary Key
, Класс varchar(8) Not NULL
)
GO

Drop Table Кабинет
GO
Create Table Кабинет
(Код int Identity Primary Key
, Номер varchar(8) Not NULL unique
)
GO

Drop Table Должность
GO
Create Table Должность
(Код int Identity Primary Key
, Должность varchar(50) Not NULL
)
GO
