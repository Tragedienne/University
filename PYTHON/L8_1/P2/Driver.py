import random

from L8_1.P2.Car import Car


class Driver(Car):
    names = ['Stanislav', 'Olga', 'Sergey']

    def __init__(self, number='6666 AA-1', cost=10.5, discount=Car.min_discount, name='Olga'):
        super().__init__(number, cost, discount)
        if self.check(name):
            self._name = name
        else:
            self._types = self.__correction

    def __correction(self, name: str) -> str:
        return random.choice(name)

    @property
    def name(self) -> str:
        return self._name

    @name.setter
    def name(self, name: str):
        if self._name == "":
            raise ValueError("Empty name.")
        else:
            self._name = name

    @classmethod
    def check(cls, arg):
        return arg in Driver.names

    def info(self):
        return f'Number:{self.get_number()}, cost: {self.cost}, discount: {self.discount}%,' \
               f'driver: {self.name}'

    @staticmethod
    def cost_discount(option, cost, discount=Car.min_discount):
        if option in Driver.names:
            round(cost - (cost * (discount / 100)), 2)
        else:
            print("There is no discount for the driver:", option)
            return cost
