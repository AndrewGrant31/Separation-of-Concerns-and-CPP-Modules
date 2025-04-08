import std;

//import Standard_Module;
import Private_Partition;
//import Single_Source_File;
//import Multiple_Files;

auto main(int argc , char* argv[]) -> int
{
	auto hello { std::make_unique<Hello::HelloToWhom> ( 
		argc == 2 ? std::string{argv [ 1 ]} : std::string{} ) };

	std::println("{}", hello->Greetings());
}
