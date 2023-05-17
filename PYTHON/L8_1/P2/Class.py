import random

from L8_1.P2.Car import Car


class Class(Car):
    comforts = ['Эконом', 'Комфорт', 'Бизнес']

    def __init__(self, number='6666 AA-1', cost=10.5, discount=Car.min_discount, comfort='Эконом'):
        super().__init__(number, cost, discount)
        if self.check(comfort):
            self._comfort = comfort
        else:
            self._comfort = self.__correction(comfort)

    def __correction(self, comfort: str) -> str:
        return random.choice(comfort)

    @property
    def comfort(self) -> str:
        return self._comfort

    @comfort.setter
    def comfort(self, comfort: str):
        if self._comfort == "":
            raise ValueError("Empty comfort.")
        else:
            self._comfort = comfort

    @classmethod
    def check(cls, arg):
        return arg in Class.comforts

    def info(self):
        return f'Number:{self.get_number()}, cost: {self.cost}, discount: {self.discount}%,' \
               f'comfort: {self.comfort}'

    @staticmethod
    def cost_discount(option, cost, discount=Car.min_discount):
        if option in Class.comforts:
            round(cost - (cost * (discount / 100)), 2)
        else:
            print("There is no discount for the class:", option)
            return cost
