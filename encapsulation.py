class car:
    def __init__(self,speed,color):
        self.__speed=speed
        self.__color=color
        pass
    def set_speed(self,speed):
        self.__speed=speed
    def get_speed(self):
        return self.__speed
    def set_color(self,color):
        self.__color=color
    def get_color(self):
        return self.__color
ford = car(30,'red')
honda=car(50,'Purple')
audi = car(80,'White')
# ford.__speed=40
# this is not allowed
print(ford.get_speed())
print(honda.get_speed())
print(audi.get_speed())
print(ford.get_color())
print(honda.get_color())
print(audi.get_color())




# ford.set_speed(50)
# honda.set_speed(40)
# audi.set_speed(70)

# ford.set_color('red')
# honda.set_color('purple')
# audi.set_color('pink')
