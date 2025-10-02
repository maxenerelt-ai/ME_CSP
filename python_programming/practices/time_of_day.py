# ME 6th Time of Day code

import datetime

current = datetime.datetime.now()

hour = current.hour

if hour <= 12:
    print(f"Looks like its {hour} good morning!")
elif hour <= 18:
    print(f"Hello there looks like the time is {hour} good afternoon!")
else:
    print(f"Looks like its {hour} good afternoon!")
