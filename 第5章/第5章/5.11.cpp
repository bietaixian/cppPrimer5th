//#include <iostream>
//using std::cout;
//using std::cin;
//using std::endl;
//int main()
//{
//    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0,
//        spaceCnt = 0, tabCnt = 0, verticalCnt = 0, NewLineCnt = 0;
//    char ch;
//    while (cin >> std::noskipws >>ch)
//    {
//        switch (ch)
//        {
//        case 'a':case 'A':
//            ++aCnt;
//            break;
//        case 'e':case 'E':
//            ++eCnt;
//            break;
//        case 'i':case 'I':
//            ++iCnt;
//            break;
//        case 'o':case 'O':
//            ++oCnt;
//            break;
//        case ' ':
//            ++spaceCnt;
//            break;
//        case '\t':
//            ++tabCnt;
//            break;
//        case '\v':
//            ++verticalCnt;
//            break;
//        case '\n':
//            ++NewLineCnt;
//            break;
//
//        default:
//            break;
//        }
//    }
//    cout << "Number of vowel a: " << aCnt << endl
//        << "Number of vowel e: " << eCnt << endl
//        << "Number of vowel i: " << iCnt << endl
//        << "Number of vowel o: " << oCnt << endl
//        << "Number of vowel u: " << uCnt << endl
//        << "Number of space: " << spaceCnt << endl
//        << "Number of horizontal tab: " << tabCnt << endl
//        << "Number of Vertical tab: " << verticalCnt << endl
//        << "Number of Newline: " << NewLineCnt << endl;
//    system("pause");
//
//}