//#include <sstream>
//#include <vector>
//#include <string>
//#include <iostream>
//using std::istringstream;
//using std::vector;
//using std::getline;
//using std::string;
//using std::cin;
//int main()
//{
//    struct PersonInfo
//    {
//        string name;
//        vector<string> phones;
//    };
//
//    string line, word;
//    vector<PersonInfo> people;
//    istringstream record;
//    while (getline(cin,line))
//    {
//        PersonInfo info;
//        record.clear();
//        record.str(line);
//        record >> info.name;
//        while (record>>word)
//        {
//            info.phones.push_back(word);
//        }
//        people.push_back(info);
//    }
//
//    for (auto &p : people)
//    {
//        std::cout << p.name << " ";
//        for (auto& s : p.phones) std::cout << s << " ";
//        std::cout << std::endl;
//    }
//    system("pause");
//    return 0;
//}