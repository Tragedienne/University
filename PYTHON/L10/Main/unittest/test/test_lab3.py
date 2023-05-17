from unittest import TestCase, main
from L10.Main.unittest.src.lab3 import Lab3


class Test(TestCase):
    def setUp(self) -> None:
        self.calculator = Lab3()

    def tearDown(self) -> None:
        ...

################################################################

    def test_1_1(self):
        self.assertEqual(self.calculator.AddLeftDigit(0, 0), -1)

    def test_1_2(self):
        self.assertEqual(self.calculator.AddLeftDigit(1, -1), -1)

    def test_1_3(self):
        self.assertEqual(self.calculator.AddLeftDigit(0, 123), -1)

    def test_1_4(self):
        self.assertEqual(self.calculator.AddLeftDigit(10, 123), -1)

    def test_1_5(self):
        self.assertEqual(self.calculator.AddLeftDigit(1, 23), 123)

    def test_1_red(self):
        self.assertEqual(self.calculator.AddLeftDigit(0, 0), 1)

################################################################

    def test_2_1(self):
        self.assertEqual(self.calculator.Calc(0, 0, 0), 'error')

    def test_2_2(self):
        self.assertEqual(self.calculator.Calc(10, 2, 1), 8)

    def test_2_3(self):
        self.assertEqual(self.calculator.Calc(10, 2, 2), 20)

    def test_2_4(self):
        self.assertEqual(self.calculator.Calc(10, 2, 3), 5)

    def test_2_5(self):
        self.assertEqual(self.calculator.Calc(10, 2, 0), 12)

    def test_2_red(self):
        self.assertEqual(self.calculator.Calc(10, 2, 0), 'error')

################################################################

    def test_3_1(self):
        self.assertEqual(self.calculator.Ln1(1, 0, 0), 'error')

    def test_3_2(self):
        self.assertEqual(self.calculator.Ln1(0.9, 0.5, 10), 0.9)

    def test_3_3(self):
        self.assertEqual(self.calculator.Ln1(0.5, 1, 5), 0)

    def test_3_4(self):
        self.assertEqual(self.calculator.Ln1(0.1, 10, 100), 0)

    def test_3_5(self):
        self.assertEqual(self.calculator.Ln1(0.9999, 0.1, 100), 0.7455349406295881)

    def test_3_red(self):
        self.assertEqual(self.calculator.Ln1(1, 0, 0), 0)

################################################################


if __name__ == '__main__':
    main()
