main: main.cpp Cliente.o Cliente.h ContaBancaria.o ContaBancaria.h
	g++ main.cpp Cliente.o ContaBancaria.o -o main 
Cliente.o: Cliente.cpp Cliente.h
	g++ Cliente.cpp -c
ContaBancaria.o: ContaBancaria.cpp ContaBancaria.h
	g++ ContaBancaria.cpp -c
clean:
	rm -f *.o main
