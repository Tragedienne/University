import pytest
from L10.Main.pytest.src.lab3 import AddLeftDigit
from L10.Main.pytest.src.lab3 import Calc
from L10.Main.pytest.src.lab3 import Ln1

################################################################


def test_1_1():
    assert AddLeftDigit(0, 0) == -1


def test_1_2():
    assert AddLeftDigit(1, -1) == -1


def test_1_3():
    assert AddLeftDigit(0, 123) == -1


def test_1_4():
    assert AddLeftDigit(10, 123) == -1


def test_1_5():
    assert AddLeftDigit(1, 23) == 123


def test_1_red():
    assert AddLeftDigit(0, 0) == 1


################################################################


def test_2_1():
    assert Calc(0, 0, 0) == 'error'


def test_2_2():
    assert Calc(10, 2, 1) == 8


def test_2_3():
    assert Calc(10, 2, 2) == 20


def test_2_4():
    assert Calc(10, 2, 3) == 5


def test_2_5():
    assert Calc(10, 2, 0) == 12


def test_2_red():
    assert Calc(10, 2, 0) == 'error'


################################################################


def test_3_1():
    assert Ln1(1, 0, 0) == 'error'


def test_3_2():
    assert Ln1(0.9, 0.5, 10) == 0.9


def test_3_3():
    assert Ln1(0.5, 1, 5) == 0


def test_3_4():
    assert Ln1(0.1, 10, 100) == 0


def test_3_5():
    assert Ln1(0.9999, 0.1, 100) == 0.7455349406295881


def test_3_red():
    assert Ln1(1, 0, 0) == 0


################################################################

if __name__ == '__main__':
    pytest.main()
