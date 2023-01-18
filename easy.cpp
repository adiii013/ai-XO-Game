#include<iostream>
#include<algorithm>

using namespace std;

struct data{
    int order;
    string name;
    int m;
    int w;
    int l;
    double nrr;
    int pts;
};

bool comparator(struct data d1, struct data d2){
  if(d1.pts == d2.pts){
      if(d1.nrr > d2.nrr){
        return true;
      }
      return false;
  }
  if(d1.pts > d2.pts){
    return true;
  }
  return false;
}

int main() {
    struct data d[6];
    d[0].order = 1;
    d[0].name = "IND";
    d[0].m = 5;
    d[0].w = 4;
    d[0].l = 1;
    d[0].nrr = 1.319;
    d[0].pts = 8;

    d[1].order = 2;
    d[1].name = "PAK";
    d[1].m = 5;
    d[1].w = 3;
    d[1].l = 2;
    d[1].nrr = 1.028;
    d[1].pts = 6;

    d[2].order = 3;
    d[2].name = "SA";
    d[2].m = 5;
    d[2].w = 2;
    d[2].l = 2;
    d[2].nrr = 0.874;
    d[2].pts = 5;

    d[3].order = 4;
    d[3].name = "NED";
    d[3].m = 5;
    d[3].w = 2;
    d[3].l = 3;
    d[3].nrr = -0.849;
    d[3].pts = 4;

    d[4].order = 5;
    d[4].name = "BAN";
    d[4].m = 5;
    d[4].w = 2;
    d[4].l = 3;
    d[4].nrr = -1.176;
    d[4].pts = 4;

    d[5].order = 5;
    d[5].name = "ZIM";
    d[5].m = 5;
    d[5].w = 1;
    d[5].l = 3;
    d[5].nrr = -1.138;
    d[5].pts = 3;

   sort(d,d+6,comparator);
   
   for(int i = 0; i <6;i++){
    cout<<d[i].order<<" "<<d[i].name<<" "<<d[i].m<<" "<<d[i].w<<" "<<d[i].l<<" "<<d[i].nrr<<" "<<d[i].pts<<" "<<endl;
   }

}