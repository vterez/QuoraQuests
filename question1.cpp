/*
Compiled with gcc 10.2.0 on windows
*/

//thread function
my_mutex.lock();
std::cout<<"Iteration number:"<<iteration_number; //just to check if it is getting here the number of times it is supposed to
my_file_2.write(some_c_string,strlen(some_c_string)); //this works everytime
my_file << some_c_string << std::endl; //this works until some point, then it stops. Since the other file worked and it's the same string, can it be a badbit set?
my_mutex.unlock();


//initialization
std::ofstream my_file("my_file.txt"),my_file_2("my_file_2.txt");
char buffer[200000],buffer2[200000];
my_file.rdbuf()->pubsetbuf(buffer,200000); 
my_file_2.rdbuf()->pubsetbuf(buffer2,200000);
spawn_a_lot_of_threads();


//after threads finish
while(number_of_threads>0)
    sleep();
return 0; //to ensure filestream destruction and file closure



