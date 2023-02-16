% flight(flight_number, departure_city, arrival_city, departure_time, arrival_time).
flight(1, 'New York', 'London', '09:00', '12:00').
flight(2, 'London', 'New York', '14:00', '17:00').

% seat(flight_number, seat_number, availability).
seat(1, 1, available).
seat(1, 2, available).
seat(1, 3, available).
seat(2, 1, available).
seat(2, 2, available).
seat(2, 3, available).

% booking(flight_number, seat_number, name).

% check the availability of a seat on a flight
check_availability(Flight, Seat):-
  flight(Flight, _, _, _, _),
  seat(Flight, Seat, available).

% book a seat on a flight
book(Flight, Seat, Name):-
  flight(Flight, _, _, _, _),
  seat(Flight, Seat, available),
  assertz(booking(Flight, Seat, Name)),
  retract(seat(Flight, Seat, available)),
  assertz(seat(Flight, Seat, booked)).

% cancel a booking
cancel(Flight, Seat):-
  booking(Flight, Seat, _),
  retract(booking(Flight, Seat, _)),
  retract(seat(Flight, Seat, booked)),
  assertz(seat(Flight, Seat, available)).
