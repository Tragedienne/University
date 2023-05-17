from L8_1.P2.Car import Car
from L8_1.P2.Class import Class
from L8_1.P2.Delivery import Delivery
from L8_1.P2.Driver import Driver


def main():
    # print(f'Cost - 4.5 BYN, Discount - 10%: {Car.cost_discount('', 4.5, 10)}')
    car = Car('1111 AA-3', 4.5, 10)
    try:
        print(car.info())
    except NotImplementedError:
        print('Method was modified.')
    print(f'Cost - 4.5 BYN, Discount - 10%: {Class.cost_discount("Комфорт", 4.5, 10)}')
    clas = Class('1111 AA-3', 4.5, 10, 'Комфорт')
    print(clas.info())
    print(f'Cost - 4.5 BYN, Discount - 10%: {Delivery.cost_discount("Еда", 4.5, 10)}')
    delivery = Delivery('1111 AA-3', 4.5, 10, 'Еда')
    print(delivery.info())
    print(f'Cost - 4.5 BYN, Discount - 10%: {Driver.cost_discount("Olga", 4.5, 10)}')
    driver = Driver('1111 AA-3', 4.5, 10, 'Olga')
    print(driver.info())


if __name__ == "__main__":
    main()
