from abc import ABC
from . import sensors_pb2

class Sensor(ABC): 

    def __init__(self):
        self.queue = []

    @abstractmethod
    def processData(self, message):
        pass

    def pop():
        self.queue.pop(0)

    def push(self, data):
        self.queue.append(processData(data))


class Rocketspond():

    def __init__(self):
        self.sensors = {}

    def addSensor(self, name: str, sensor: Sensor):
        self.sensors['name'] = sensor


class GPS(Sensor):

    def processData(self, msg: sensors_pb2.DataGPS):
        return [msg.latitude, msg.longitude, msg.height]
