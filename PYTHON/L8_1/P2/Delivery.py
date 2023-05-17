import random

from L8_1.P2.Car import Car


class Delivery(Car):
    types = ['Доставка пассажиров', 'Еда', 'Грузоперевозки']

    def __init__(self, number='6666 AA-1', cost=10.5, discount=Car.min_discount, type='Доставка пассажиров'):
        super().__init__(number, cost, discount)
        if self.check(type):
            self._type = type
        else:
            self._types = self.__correction

    def __correction(self, types: str) -> str:
        return random.choice(types)

    @property
    def type(self) -> str:
        return self._type

    @type.setter
    def type(self, types: str):
        if self._types == "":
            raise ValueError("Empty type.")
        else:
            self._types = types

    @classmethod
    def check(cls, arg):
        return arg in Delivery.types

    def info(self):
        return f'Number:{self.get_number()}, cost: {self.cost}, discount: {self.discount}%,' \
               f'delivery: {self.type}'

    @staticmethod
    def cost_discount(option, cost, discount=Car.min_discount):
        if option in Delivery.types:
            round(cost - (cost * (discount / 100)), 2)
        else:
            print("There is no discount for the delivery:", option)
            return cost
