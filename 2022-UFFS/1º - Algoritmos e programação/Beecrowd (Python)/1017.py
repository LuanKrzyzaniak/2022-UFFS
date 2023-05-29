trip_time = int(input())
av_speed = int(input())
car_eff = 12

distance = trip_time * av_speed
fuel = distance / car_eff

print(f"{fuel:.3f}")