#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

// class StockList
// {
// public:
//     static std::string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories)
//     {
//         if(lstOfArt.empty()||categories.empty())
//             return "";
//         for(std::string id:lstOfArt)
//             std::cout<<id<<"\t";
//         for(std::string ct:categories)
//             std::cout<<ct<<"\t";
//         std::vector<std::string> result;
//         for (std::string cat : categories)
//         {
//             int sum = 0;
//             for (std::string art : lstOfArt)
//             {
//                 if (cat == art.substr(0, 1))
//                 {
//                     int i = art.find(" ");
//                     int num = std::stoi(art.substr(i + 1, art.size()));
//                     sum += num;
//                 }
//             }
//                 result.push_back("(" + cat + " : " + std::to_string(sum) + ")");
//         }

//         std::stringstream ss;
//         for (size_t i = 0; i < result.size(); ++i)
//         {
//             if (i != 0)
//                 ss << " - ";
//             ss << result[i];
//         }
//         std::string s = ss.str();
//         return s;
//     }
// };
class StockList {
public:
  static std::string stockSummary(std::vector<std::string> &books, std::vector<std::string> &categories) {
    if (books.empty() || categories.empty())
      return "";

    int stocks['Z' + 1] = {0};
    for (const std::string &book : books) {
        std::size_t position = book.find_first_of(" ", 2, 1);
        stocks[book[0]] += std::atoi(book.data() + position);
    }

    std::string result = "";
    for (const std::string &category : categories) {
      result = result
        + (result.empty() ? "" : " - ")
        + "(" + category[0] + " : " + std::to_string(stocks[category[0]]) + ")";
    }

    return result;
  }
};

int main()
{
    StockList ss;

    // //Test-1
    // std::vector<std::string> art = {"ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"};
    // std::vector<std::string> cat = {"A", "B"};
    // std::cout << ss.stockSummary(art, cat) << std::endl; //"(A : 200) - (B : 1140)"

    //Test-2
    std::vector<std::string> art = {"ABAR 200",	"CDXE 500",	"BKWR 250",	"BTSQ 890",	"DRTY 600",	"BBAR 150",	"CDXE 515",
    	                            "BKWR 250",	"BTSQ 890",	"DRTY 600",	"CBART 20",	"CDXEF 50",	"BKWRK 25",	"BTSQZ 89",	"DRTYM 60",
                                    "ROXANNE 102",	"RHODODE 123",	"BKWRKAA 125",	"BTSQZFG 239", "DRTYMKH 060"};
    std::vector<std::string> cat = {"B", "R","D","X"};
    std::cout << ss.stockSummary(art, cat) << std::endl; //"(A : 200) - (B : 1140)"

    return 0;
}