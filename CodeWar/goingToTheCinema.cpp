#include<iostream>
#include<math.h>

using namespace std;

class Movie
{
public:
    static int movie(int card, int ticket, double perc){

        int sumA = ticket;
        double sumB = card + ticket*perc;

        // int i;
        // for(i=2;ceil(sumB)>=sumA;i++){
        //     sumA=ticket*i;
        //     sumB+=(ticket*pow(perc,i));
        // }
        // return i-1;

        int i=1;
        while(ceil(sumB)>=sumA){
            i++;
            sumA+=ticket;
            sumB+=(ticket*pow(perc,i));
        }
        return i;
    }
};

int main(){
    Movie mv;
    cout<<mv.movie(500, 15, 0.9)<<endl;//43
    cout<<mv.movie(100, 10, 0.95)<<endl;//24
    cout<<mv.movie(0, 10, 0.95)<<endl;//2
    cout<<mv.movie(1256, 45, 0.86)<<endl;//35
}