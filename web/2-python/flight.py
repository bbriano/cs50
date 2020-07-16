class Flight:
    def __init__(self, capacity):
        self.capacity = capacity
        self.passenger = []

    def open_seats(self):
        return self.capacity - len(self.passenger)

    def add_passenger(self, passenger):
        if not self.open_seats():
            return False
        self.passenger.append(passenger)
        return True


flight = Flight(3)

people = ["John", "Ron", "Brian", "Ricky"]

for person in people:
    if flight.add_passenger(person):
        print(f"Successfully added {person} to flight")
    else:
        print(f"No more seats left for {person}")
