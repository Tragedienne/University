from unittest import TestCase, main
from L10.Main.unittest.src.lab2 import Lab2


class Test(TestCase):
    def setUp(self) -> None:
        self.calculator = Lab2()

    def tearDown(self) -> None:
        ...

################################################################

    def test_1_1(self):
        self.assertEqual(self.calculator.func_1(1, 1, 1), -1)

    def test_1_2(self):
        self.assertEqual(self.calculator.func_1(1, 2, 3), -1)

    def test_1_3(self):
        self.assertEqual(self.calculator.func_1(1, 2, 2), 0)

    def test_1_4(self):
        self.assertEqual(self.calculator.func_1(2, 2, 1), 2)

    def test_1_5(self):
        self.assertEqual(self.calculator.func_1(2, 1, 2), 1)

    def test_1_red(self):
        self.assertEqual(self.calculator.func_1(1, 1, 1), 1)

################################################################

    def test_2_1(self):
        self.assertEqual(self.calculator.func_2(0, 1, 1), -1)

    def test_2_2(self):
        self.assertEqual(self.calculator.func_2(5, 1, 2), -1)

    def test_2_3(self):
        self.assertEqual(self.calculator.func_2(5, 1, 1), -1)

    def test_2_4(self):
        self.assertEqual(self.calculator.func_2(0, 10, 1), -1)

    def test_2_5(self):
        self.assertEqual(self.calculator.func_2(10, 10, 1), [1.0, 1.9, 2.8, 3.7, 4.6, 5.5, 6.4, 7.3, 8.2, 9.1, 10.0])

    def test_2_red(self):
        self.assertEqual(self.calculator.func_2(0, 1, 1), [1.0, 1.9, 2.8, 3.7, 4.6, 5.5, 6.4, 7.3, 8.2, 9.1, 10.0])

################################################################

    def test_3_1(self):
        self.assertEqual(self.calculator.func_3(-1), -1)

    def test_3_2(self):
        self.assertEqual(self.calculator.func_3(0), -1)

    def test_3_3(self):
        self.assertEqual(self.calculator.func_3(1), -1)

    def test_3_4(self):
        self.assertEqual(self.calculator.func_3(5), [82, 4.9900200799090815])

    def test_3_5(self):
        self.assertEqual(self.calculator.func_3(10), [12366, 9.99996214792161])

    def test_3_red(self):
        self.assertEqual(self.calculator.func_3(0), [12366, 9.99996214792161])

################################################################


if __name__ == '__main__':
    main()
