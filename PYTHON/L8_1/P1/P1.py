class Car:
    min_discount = 5
    max_discount = 90

    def __init__(self, number='6666 AA-1', cost=10.5, discount=min_discount):
        if self.check_discount(discount):
            self._discount = discount
        else:
            self._discount = self.min_discount
        if not self.check_cost(cost):
            self.cost = cost
        else:
            self._cost = 10.5
        self._number = number

    def get_number(self) -> str:
        return self._number

    def set_number(self, number: str):
        if self._number == "":
            raise ValueError("Empty number.")
        else:
            self._number = number

    @property
    def cost(self) -> float:
        return self._cost

    @cost.setter
    def cost(self, cost: float):
        if self.check_cost(cost):
            raise ValueError('The cost can not be negative or null.')
        self._cost = cost
        self._round_cost()

    @property
    def discount(self) -> int:
        return self._discount

    @discount.setter
    def discount(self, discount: int):
        if self.check_discount(discount):
            self._discount = discount
        else:
            raise ValueError('Invalid discount value.')

    @classmethod
    def check_discount(cls, arg):
        return cls.min_discount <= arg <= cls.max_discount

    @staticmethod
    def check_cost(arg):
        return arg > 0

    @staticmethod
    def cost_discount(cost, discount=min_discount):
        return round(cost - (cost * (discount / 100)), 2)

    def _round_cost(self):
        self.cost = round(self.cost, 2)

    def info(self):
        return f'Number: {self.get_number()}, Cost: {self.cost}, Discount: {self.discount}%'


def main():
    #print(f'Cost - 4.5 BYN, Discount - 10%: {Car.cost_discount(4.5, 10)}')
    car = Car('1111 AA-3', 4.5, 10)
    print(car.info())


if __name__ == "__main__":
    main()
