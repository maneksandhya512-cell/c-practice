import csv
with open("new.csv","w",newline="") as f:
    info =csv.writer(f)
    info.writerow(["sr","name","age"])
    info.writerow(["1","michel","34"])
                   