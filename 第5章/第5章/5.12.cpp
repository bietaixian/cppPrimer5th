//#include <iostream>
//using std::cout;
//using std::cin;
//using std::endl;
//int main()
//{
//    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0,
//             ffCnt = 0, flCnt = 0, fiCnt = 0;
//    char ch, prech=' ' ;
//    while (cin >>ch)
//    {
//        
//        switch (ch)
//        {
//        case 'a':case 'A':
//            ++aCnt;
//            break;
//        case 'e':case 'E':
//            ++eCnt;
//            break;
//        case 'i':
//            if (prech == 'f') ++fiCnt;
//        case 'I':
//            ++iCnt;
//            break;
//        case 'o':case 'O':
//            ++oCnt;
//            break;
//        case 'u':case 'U':
//            ++uCnt;
//            break;
//        case 'f':
//            if (prech == 'f') ++ffCnt;
//            break;
//        case 'l':
//            if (prech == 'f') ++flCnt;
//            break;
//        default:
//            break;
//        }
//        prech = ch;
//    }
//    cout << "Number of vowel a: " << aCnt << endl
//        << "Number of vowel e: " << eCnt << endl
//        << "Number of vowel i: " << iCnt << endl
//        << "Number of vowel o: " << oCnt << endl
//        << "Number of vowel u: " << uCnt << endl
//        << "Number of ff: " << ffCnt << endl
//        << "Number of fl: " << flCnt << endl
//        << "Number of fi: " << fiCnt << endl;
//    system("pause");
//
//}