#include<bits/stdc++.h>
using namespace std;

class FootballException: public exception
{
  public:
    int errno;
    string errmsg;

    FootballException()
    {

    }

    FootballException(int n,string msg)
    {
      errno = n;
      errmsg = msg;
    }

    void showerror()
    {
      cout<<errno<<":"<<errmsg<<endl;
    }
};

class player
{
public:
  string name1;
  string team;
  int age;

  string getname()
  {
    return name1;
  }

  string getteam()
  {
    return team;
  }

  int getage()
  {
    return age;
  }

  void setname1(string s)
  {
    this->name1 = s;
  }

  void setteamname(string s)
  {
    this->team = s;
  }

  void setage(int i)
  {
    this->age = i;
  }
};

class Forward:public player
{
public:
  int goal;
  int assist;

  int getgoal()
  {
    return goal;
  }

  int getassist()
  {
    return assist;
  }

  void setgoal(int i)
  {
    goal = i;
  }

  void setassist(int i)
  {
    assist = i;
  }
};

class defender:public player
{
public:
  int blocks;
  int tackle;

  int getblocks()
  {
    return blocks;
  }

  int gettackle()
  {
      return tackle;
  }

  void setblocks(int i)
  {
    blocks = i;
  }

  void settackle(int i)
  {
    tackle = i;
  }
};

class goalkeeper:public player
{
public:
  int cleansheets;
  int goalsconceeded;

  int getcleansheets()
  {
    return cleansheets;
  }

  int getgoalsconceeded()
  {
    return goalsconceeded;
  }

  void setcleansheets(int i)
  {
    cleansheets = i;
  }

  void setgoalsconceeded(int i)
  {
    goalsconceeded = i;
  }
};

class SportsClub{
public:
  string name;
  string location;
  string statistics;

  string getname()
  {
    return name;
  }

  string getlocation()
  {
    return location;
  }

  string getstatistics()
  {
    return statistics;
  }

  void setname(string s)
  {
    this->name = s;
  }

  void setlocation(string s)
  {
    this->location = s;
  }

  void setstatistics(string s)
  {
    this->statistics = s;
  }
};

class FootballClub:public SportsClub{
public:
  int points;
  int wincount;
  int drawcount;
  int defeatcount;
  int scoredgoalscount;
  int receivedgoalscount;
  int matchesplayed;
  int gf;
  int gd;

  int getwincount()
  {
      return wincount;
  }

  int getdrawcount()
  {
      return drawcount;
  }

  int getdefeatcount()
  {
      return defeatcount;
  }

  int getscoredgoalscount()
  {
      return scoredgoalscount;
  }

  int getreceivedgoalscount()
  {
      return receivedgoalscount;
  }

  int getpoints()
  {
      return points;
  }

  int getmatchesplayed()
  {
      return matchesplayed;
  }

  int getgf()
  {
      return gf;
  }

  int getgd()
  {
      return gd;
  }

  void setwincount(int i)
  {
    wincount = i;
  }

  void setdrawcount(int i)
  {
    drawcount = i;
  }

  void setdefeatcount(int i)
  {
    defeatcount = i;
  }

  void setscoredgoalscount(int i)
  {
    scoredgoalscount = i;
  }

  void setreceivedgoalscount(int i)
  {
    receivedgoalscount = i;
  }

  void setpoints(int i)
  {
    points = i;
  }

  void setmatchesplayed(int i)
  {
    matchesplayed = i;
  }

  void setgf(int i)
  {
    gf = i;
  }

  void setgd(int i)
  {
    gd = i;
  }

};

class match{
public:
  FootballClub teama;
  FootballClub teamb;

  int teamascore;
  int teambscore;

  // date

  FootballClub getteama()
  {
    return teama;
  }

  FootballClub getteamb()
  {
    return teamb;
  }

  int getteamascore()
  {
    return teamascore;
  }

  int getteambscore()
  {
    return teambscore;
  }

  void setteama(FootballClub teama)
  {
    this->teama = teama;
  }

  void setteamb(FootballClub teamb)
  {
    this->teamb = teamb;
  }

  void setteamascore(int teamascore)
  {
    this->teamascore = teamascore;
  }

  void setteambscore(int teambscore)
  {
      this->teambscore = teambscore;
  }

};

bool myfun(FootballClub const & f1, FootballClub const & f2)
{
  if(f1.points != f2.points)
  return f1.points > f2.points;

  else if(f1.gd != f2.gd)
  return f1.gd > f2.gd;

  else
  return f1.gf > f2.gf;

}

bool myfun1(Forward const & f1, Forward const & f2)
{
  if(f1.goal != f2.goal)
  return f1.goal > f2.goal;
}

bool myfun2(goalkeeper const & f1, goalkeeper const & f2)
{
  if(f1.cleansheets != f2.cleansheets)
  return f1.cleansheets > f2.cleansheets;

  else
  return f1.goalsconceeded < f2.goalsconceeded;
}

bool myfun3(defender const & f1, defender const & f2)
{
  if(f1.tackle != f2.tackle)
  return f1.tackle > f2.tackle;

  else
  return f1.blocks > f2.blocks;
}

bool verify(string cn)
{
    set<string>a;

    a.insert("barcelona");
    a.insert("realmadrid");
    a.insert("sevilla");
    a.insert("realsociedad");
    a.insert("getafe");
    a.insert("atleticomadrid");
    a.insert("valencia");
    a.insert("villarreal");
    a.insert("granada");
    a.insert("athleticbilbao");
    a.insert("osasuna");
    a.insert("realbetis");
    a.insert("levante");
    a.insert("alaves");
    a.insert("realvalladolid");
    a.insert("eibar");
    a.insert("celtavigo");
    a.insert("realmallorca");
    a.insert("leganes");
    a.insert("espanyol");

    if(a.find(cn) != a.end())
    {
        return true;
    }
    else return false;
}


int main()
{

//  system("COLOR 4F");
//  system("PAUSE");
//  cout<<char(201)<<endl;


  int n,k=0,k1=0,k2=0,k3=0;
  string te,st;
  string fi,se;
  int ffg,ssg;
  int fg,sg;
  int fir,sec;
  int fir1,sec1;
  int res = 1;
  vector<Forward>p(100);
  vector<goalkeeper>g(100);
  vector<defender>d(100);
  set<string>ne;
  bool checker1, checker2, checker3 , checker4 , checker5 , checker6 , checker7 , checker8, checker9, checker10 , checker11;
  vector<FootballClub>f(100);
  FootballClub tmpPersonObject;
  match m;
  int i, j, flag = 1;
  int numLength = 5;
  string na;
  set<string>ch;
  set<string>::iterator it;
  string gname;
  string dname;
  string tname;
  vector <FootballClub>::iterator it3;
  string nm,ta;
  int gl;

  cout<<endl;
  cout<<"********************************************* Welcome To Football Management System *****************************************"<<endl;
  cout<<"********************************************* Designed By Sumit Kumar & Shobhit Nigam ***************************************"<<endl;

  cout<<endl;
  cout<<endl;


  while(true)
  {

    checker1 = false;
    checker2 = false;
    checker7 = false;
    checker8 = false;
    checker9 = false;
    checker10 = false;
    cout<<"Laliga Menu"<<endl;
    cout<<endl;
    cout<<"Choose The Below Menu To Simulate The Football Management System"<<endl;
    cout<<endl;
    cout<<"Press 1 To Create New Team And Add It To League"<<endl;
    cout<<endl;
    cout<<"Press 2 To Add A Played Match"<<endl;
    cout<<endl;
    cout<<"Press 3 To Display The League Table"<<endl;
    cout<<endl;
    cout<<"Press 4 To Display The Top Goal Scorer Of The League"<<endl;
    cout<<endl;
    cout<<"Press 5 To Display The Top Goal Keeper Of The League"<<endl;
    cout<<endl;
    cout<<"Press 6 To Display The Top Defender Of The League"<<endl;
    cout<<endl;
    cout<<"Press 7 To Display The Specific Team Details"<<endl;
    cout<<endl;
    cout<<"Press 8 To Delete The Team"<<endl;
    cout<<endl;
    cin >> n;
    cout<<endl;
    switch(n){
    case 1:
        try
        {
          cout<<"Enter The Club Name";
          cout<<endl;
          cin>>te;

          cout<<endl;
          cout<<"Enter The Stadium Of Above Club";
          cout<<endl;
          cin>>st;
          cout<<endl;

          checker3 = verify(te);

          if(checker3)
          {
            it = ch.find(te);

          if(it!=ch.end())
          {
          //  cout<<"Club is Already Added"<<endl;
            throw 400;
          }
          else
          {
            f[k].setname(te);
            f[k].setlocation(st);
            k++;
            ch.insert(te);
          }
         }

         else
         {
          //   cout<<"No such team is present in the league"<<endl;
            throw 401;
         }
        }

        catch(int x)
        {
          if(x==400)
          {
            cout<<endl;
            cout<<"*************************************Error********************************************"<<endl;
            cout<<endl;
            cout<<x<<":"<<"Club Is Already Added"<<endl;
            cout<<endl;
          }

          else
          {
            cout<<endl;
            cout<<"*************************************Error********************************************"<<endl;
            cout<<endl;
            cout<<x<<":"<<"No Such Team Is Present In The League"<<endl;
            cout<<endl;
          }
        }
          break;

    case 2:

          try
          {
            cout<<endl;
            cout<<"Enter First Team Name"<<endl;
            cout<<endl;
            cin>>fi;
            cout<<endl;
            cout<<"Enter Second Team Name"<<endl;
            cout<<endl;
            cin>>se;

            cout<<endl;
            cout<<"Enter First Team Goal"<<endl;
            cout<<endl;
            cin>>fg;
            cout<<endl;
            cout<<"Enter Second Team Goal"<<endl;
            cout<<endl;
            cin>>sg;



            for(int i1=0;i1<k;i1++)
            {
              if(f[i1].name == fi)
              fir=i1, checker1 = true;
            }

            for(int i2=0;i2<k;i2++)
            {
              if(f[i2].name == se)
              sec=i2 , checker2 = true;
            }

            if(checker1 && checker2)
            {
            m.setteama(f[fir]);
            m.setteamb(f[sec]);
            m.setteamascore(fg);
            m.setteambscore(sg);

            f[fir].setscoredgoalscount(f[fir].getscoredgoalscount()+fg);
            f[sec].setscoredgoalscount(f[sec].getscoredgoalscount()+sg);

            f[fir].setmatchesplayed(f[fir].getmatchesplayed()+1);
            f[sec].setmatchesplayed(f[sec].getmatchesplayed()+1);

            if(fg>sg)
            {

              f[fir].points += 3;
              f[fir].wincount +=1;
              f[fir].gf +=fg;
              f[fir].gd +=fg-sg;
              f[sec].gd +=sg-fg;
              f[sec].gf += sg;
              f[sec].defeatcount +=1;
            }
            if(fg<sg)
            {
              f[sec].points += 3;
              f[sec].wincount +=1;
              f[fir].gf += fg;
              f[sec].gf += sg;
              f[fir].gd += fg-sg;
              f[sec].gd += sg-fg;
              f[fir].defeatcount +=1;

            }
            if(fg==sg)
            {
              f[sec].points +=1;
              f[fir].points +=1;
              f[fir].gf += fg;
              f[sec].gf += sg;
              f[sec].drawcount +=1;
              f[fir].drawcount +=1;
            }

            cout<<endl;
            cout<<"Enter The Name Of The Goal Keeper Of First Team"<<endl;
            cout<<endl;
            cin>>gname;

            for(int i1=0;i1<k2;i1++)
            {
              if(g[i1].name1 == gname)
              fir1=i1, checker8 = true;
            }

            if(checker8)
            {
              if(sg == 0)
              {
                g[fir1].cleansheets += 1;
              }
              else
              {
                g[fir1].goalsconceeded += sg;
              }
            }

            else
            {
              g[k2].setname1(gname);
              g[k2].setteamname(fi);
              if(sg == 0)
              {
                g[k2].cleansheets += 1;
              }
              else
              {
                g[k2].goalsconceeded += sg;
              }
              k2++;
            }

            ffg = fg;
            ssg = sg;
            cout<<endl;
            cout<<"Enter The Player Details Of First Team"<<endl;
            cout<<endl;

            while(ffg)
            {
              checker5 = false;
              cout<<endl;
              cout<<"Enter The Name"<<endl;
              cout<<endl;
              cin>>nm;

            //  cout<<"enter the team he played"<<endl;
            //  cin>>ta;
              cout<<endl;
              cout<<"Number Of Goals He Scored"<<endl;
              cout<<endl;
              cin>>gl;

              if(gl>ffg)
              {
                cout<<endl;
                throw 402;
                // cout<<"Player Goal Cannot Be More Than Team Goal"<<endl;
                cout<<endl;
              }
              else
              {
                for(int i1=0;i1<k1;i1++)
                {
                  if(p[i1].name1 == nm)
                  fir1=i1, checker5 = true;
                }

                  if(checker5)
                  {
                    p[fir1].goal += gl;
                    ffg = ffg - gl;
                  }
                  else
                  {
                    p[k1].setname1(nm);
                    p[k1].setteamname(fi);
                    p[k1].goal += gl;
                    k1++;
                    ffg = ffg - gl;
                    ne.insert(nm);
                  }
                }
              }

              cout<<endl;
              cout<<"Enter The Name Of The Goal Keeper Of Second Team"<<endl;
              cout<<endl;
              cin>>gname;

              for(int i2=0;i2<k2;i2++)
              {
                if(g[i2].name1 == gname)
                sec=i2 , checker7 = true;
              }

              if(checker7)
              {
                if(fg == 0)
                {
                  g[sec].cleansheets += 1;
                }
                else
                {
                  g[sec].goalsconceeded += fg;
                }
              }
              else
              {
                g[k2].setname1(gname);
                g[k2].setteamname(se);
                if(fg == 0)
                {
                  g[k2].cleansheets += 1;
                }
                else
                {
                  g[k2].goalsconceeded += fg;
                }
                k2++;
              }

            cout<<endl;
            cout<<"Enter The Player Details Of Second Team"<<endl;
            cout<<endl;

            while(ssg)
            {
              checker6 = false;
              cout<<endl;
              cout<<"Enter The Name"<<endl;
              cout<<endl;
              cin>>nm;

            //  cout<<"enter the team he played"<<endl;
            //  cin>>ta;
              cout<<endl;
              cout<<"Number Of Goals He Scored"<<endl;
              cout<<endl;
              cin>>gl;

              if(gl>ssg)
              {
                cout<<endl;
                throw 403;
              // cout<<"Player Goal Cannot Be More Than Team Goal"<<endl;
                cout<<endl;
              }
              else
              {
                for(int i2=0;i2<k1;i2++)
                {
                  if(p[i2].name1 == nm)
                  sec=i2 , checker6 = true;
                }

                  if(checker6)
                  {
                    p[sec].goal += gl;
                    ssg = ssg - gl;
                  }
                  else
                  {
                    p[k1].setname1(nm);
                    p[k1].setteamname(se);
                    p[k1].goal += gl;
                    k1++;
                    ssg = ssg - gl;
                    ne.insert(nm);
                  }
                }
              }
              int tac,blo;
              cout<<endl;
              cout<<"Enter The Defender Details Of First Team"<<endl;
              cout<<endl;

              res = 1;
              while(res == 1)
              {
                cout<<endl;
                cout<<"Enter The Name"<<endl;
                cout<<endl;
                cin>>dname;

                cout<<endl;
                cout<<"Enter The Number Of Tackle He Did"<<endl;
                cout<<endl;
                cin>>tac;

                cout<<endl;
                cout<<"Enter The Number Of Block He Did"<<endl;
                cout<<endl;
                cin>>blo;

                for(int i1=0;i1<k3;i1++)
                {
                  if(d[i1].name1 == dname)
                  fir1=i1 , checker9 = true;
                }


                if(checker9)
                {
                  d[fir1].blocks += blo;
                  d[fir1].tackle += tac;
                }
                else
                {
                  d[k3].setname1(dname);
                  d[k3].setteamname(fi);
                  d[k3].blocks += blo;
                  d[k3].tackle += tac;
                  k3++;
                }

                cout<<endl;
                cout<<"Press 1 For Adding More Defender Details"<<endl;
                cout<<endl;
                cin>>res;
              }

              res =1;

              cout<<endl;
              cout<<"Enter The Defender Details Of Second Team"<<endl;
              cout<<endl;

              while(res == 1)
              {
                cout<<endl;
                cout<<"Enter The Name"<<endl;
                cout<<endl;
                cin>>dname;

                cout<<endl;
                cout<<"Enter The Number Of Tackle He Did"<<endl;
                cout<<endl;
                cin>>tac;

                cout<<endl;
                cout<<"Enter The Number Of Block He Did"<<endl;
                cout<<endl;
                cin>>blo;

                for(int i2=0;i2<k3;i2++)
                {
                  if(d[i2].name1 == dname)
                  sec1=i2 , checker10 = true;
                }
                if(checker10)
                {
                  d[sec1].blocks += blo;
                  d[sec1].tackle += tac;
                }
                else
                {
                  d[k3].setname1(dname);
                  d[k3].setteamname(fi);
                  d[k3].blocks += blo;
                  d[k3].tackle += tac;
                  k3++;
                }

                cout<<endl;
                cout<<"Press 1 For Adding More Defender Details"<<endl;
                cout<<endl;
                cin>>res;
              }
        /*   for(auto it=g.begin();it!=g.begin()+k2;it++)
               {
                 cout<<it->name1<<" ";
                 cout<<it->team<<" ";
                 cout<<it->cleansheets<<" ";
                 cout<<it->goalsconceeded<<" ";
                 cout<<endl;
               }
            } */

            /* for(auto it=p.begin();it!=p.begin()+k1;it++)
              {
                cout<<it->name1<<" ";
                cout<<it->team<<" ";
                cout<<it->goal<<" ";
                cout<<endl;
              } */
            }
          else
          {
            throw 404;
            //  cout<<"No such team added"<<endl;
          }
        }
        catch(int x)
        {
          if(x==404)
          {
            cout<<endl;
            cout<<"*******************************************************Error******************************************"<<endl;
            cout<<endl;
            cout<<x<<":"<<"No Such Team Added"<<endl;
            cout<<endl;
          }

          if(x==403)
          {
            cout<<endl;
            cout<<"*******************************************************Error******************************************"<<endl;
            cout<<endl;
            cout<<x<<":"<<"Player Goal Cannot Be More Than Team Goal"<<endl;
            cout<<endl;
          }

          if(x==402)
          {
            cout<<endl;
            cout<<"*******************************************************Error******************************************"<<endl;
            cout<<endl;
            cout<<x<<":"<<"Player Goal Cannot Be More Than Team Goal"<<endl;
            cout<<endl;
          }
        }
          break;

      case 3:

            sort(f.begin(),f.begin() + k,myfun);

/*          for(int i=0;i<k;i++)
          {
            cout<<f[i].name<<" ";
            cout<<f[i].matchesplayed<<" ";
            cout<<f[i].wincount<<" ";
            cout<<f[i].gf<<" ";
            cout<<f[i].gd<<" ";
            cout<<f[i].points<<" ";
            cout<<endl;
          } */


        cout<<endl;
        cout<<"Team"<<"\t \t"<<"Played"<<"\t \t"<<"Won"<<"\t \t"<<"Draw"<<"\t \t"<<"Lost"<<"\t \t"<<"GF"<<"\t \t"<<"GD"<<"\t \t"<<"Points"<<endl;
        for(auto it=f.begin();it!=f.begin()+k;it++)
          {
            cout<<it->name<<"\t ";
            cout<<it->matchesplayed<<"\t \t";
            cout<<it->wincount<<"\t \t";
            cout<<it->drawcount<<"\t \t";
            cout<<it->defeatcount<<"\t \t";
            cout<<it->gf<<"\t \t";
            cout<<it->gd<<"\t \t";
            cout<<it->points<<"\t \t";
            cout<<endl;
          }
          cout<<endl;
          break;


    case 4:
          sort(p.begin(),p.begin() + k1,myfun1);

          cout<<endl;
          cout<<"Name"<<"\t \t"<<"Team"<<"\t \t"<<"Goal"<<endl;
          for(auto it=p.begin();it!=p.begin()+k1;it++)
            {
              cout<<it->name1<<"\t \t";
              cout<<it->team<<"\t \t";
              cout<<it->goal<<"\t \t";
              cout<<endl;
            }

            cout<<endl;
          break;

    case 5:
            sort(g.begin(),g.begin() + k2,myfun2);

            cout<<endl;
            cout<<"Name"<<"\t \t"<<"Team"<<"\t \t"<<"CleanSheets"<<"\t \t"<<"GoalsConceeded"<<endl;
            for(auto it=g.begin();it!=g.begin()+k2;it++)
                {
                  cout<<it->name1<<"\t \t";
                  cout<<it->team<<"\t \t";
                  cout<<it->cleansheets<<"\t \t";
                  cout<<it->goalsconceeded<<"\t \t";
                  cout<<endl;
                }

                cout<<endl;
             break;

    case 6:
            sort(d.begin(),d.begin() + k3,myfun3);

            cout<<endl;
            cout<<"Name"<<"\t \t"<<"Team"<<"\t \t"<<"Tackle"<<"\t \t"<<"Blocks"<<endl;
            for(auto it=d.begin();it!=d.begin()+k3;it++)
                {
                  cout<<it->name1<<"\t \t";
                  cout<<it->team<<"\t \t";
                  cout<<it->tackle<<"\t \t";
                  cout<<it->blocks<<"\t \t";
                  cout<<endl;
                }

                cout<<endl;
              break;

    case 7:
            checker11 = false;
            try
            {
              cout<<endl;
              cout<<"Enter The Team Name For Which You Want The Details"<<endl;
              cout<<endl;
              cin>>tname;

              cout<<endl;

              sort(f.begin(),f.begin() + k,myfun);

              cout<<"Team Details"<<endl;
              cout<<endl;

              for(int i=0;i<k;i++)
              {
                if(f[i].name == tname)
                {
                  checker11 = true;
                  cout<<"Matches"<<"\t"<<"-"<<"\t";
                  cout<<f[i].matchesplayed<<"\n";
                  cout<<"Win"<<"\t"<<"-"<<"\t";
                  cout<<f[i].wincount<<"\n";
                  cout<<"Draw"<<"\t"<<"-"<<"\t";
                  cout<<f[i].drawcount<<"\n";
                  cout<<"Lost"<<"\t"<<"-"<<"\t";
                  cout<<f[i].defeatcount<<"\n";
                  cout<<"GF"<<"\t"<<"-"<<"\t";
                  cout<<f[i].gf<<"\n";
                  cout<<"GD"<<"\t"<<"-"<<"\t";
                  cout<<f[i].gd<<"\n";
                  cout<<"Points"<<"\t"<<"-"<<"\t";
                  cout<<f[i].points<<"\n";
                  cout<<endl;
                }
              }

    /*          if(checker11 == false)
              {
                throw 405;
              }

              checker11 = false; */

              cout<<"Top Forward Details"<<endl;
              cout<<endl;

              sort(p.begin(),p.begin() + k1,myfun1);

              for(int i=0;i<k1;i++)
              {
                  if(p[i].team == tname)
                  {
                    checker11 = true;
                    cout<<"Name"<<"\t"<<"-"<<"\t";
                    cout<<p[i].name1<<"\n";
                  //  cout<<it->team<<" ";
                    cout<<"Goal"<<"\t"<<"-"<<"\t";
                    cout<<p[i].goal<<"\n";
                    cout<<endl;
                  }
                }

              /*  if(checker11 == false)
                {
                  throw 406;
                }*/

                checker11 = false;
                cout<<"Top GoalKeeper Details"<<endl;
                cout<<endl;

                sort(g.begin(),g.begin() + k2,myfun2);

                for(int i=0;i<k2;i++)
                {
                    if(g[i].team == tname)
                    {
                      checker11 = true;
                      cout<<"Name"<<"\t"<<"-"<<"\t";
                      cout<<g[i].name1<<"\n";
                    //  cout<<it->team<<" ";
                      cout<<"CleanSheets"<<"\t"<<"-"<<"\t";
                      cout<<g[i].cleansheets<<"\n";
                      cout<<"GoalsConceeded"<<"\t"<<"-"<<"\t";
                      cout<<g[i].goalsconceeded<<"\n";
                      cout<<endl;
                    }
                  }

                /*  if(checker11 == false)
                  {
                    throw 407;
                  }

                  checker11 = false; */
                  cout<<"Top Defender Details"<<endl;
                  cout<<endl;

                  sort(d.begin(),d.begin() + k3,myfun3);

                  for(int i=0;i<k3;i++)
                  {
                      if(d[i].team == tname)
                      {
                        checker11 = true;
                        cout<<"Name"<<"\t"<<"-"<<"\t";
                        cout<<d[i].name1<<"\n";
                      //  cout<<it->team<<" ";
                        cout<<"Tackle"<<"\t"<<"-"<<"\t";
                        cout<<d[i].tackle<<"\n";
                        cout<<"Blocks"<<"\t"<<"-"<<"\t";
                        cout<<d[i].blocks<<"\n";
                        cout<<endl;
                      }
                    }

                /*    if(checker11 == false)
                    {
                      throw 408;
                    } */
            }
            catch(int x)
            {
              if(x==405)
              {
                cout<<endl;
                cout<<"*******************************************************Error******************************************"<<endl;
                cout<<endl;
                cout<<x<<":"<<"No Such Team In The League"<<endl;
                cout<<endl;
              }

              if(x==406)
              {
                cout<<endl;
                cout<<"*******************************************************Error******************************************"<<endl;
                cout<<endl;
                cout<<x<<":"<<"No Such Team In The League"<<endl;
                cout<<endl;
              }

              if(x==407)
              {
                cout<<endl;
                cout<<"*******************************************************Error******************************************"<<endl;
                cout<<endl;
                cout<<x<<":"<<"No Such Team In The League"<<endl;
                cout<<endl;
              }

              if(x==408)
              {
                cout<<endl;
                cout<<"*******************************************************Error******************************************"<<endl;
                cout<<endl;
                cout<<x<<":"<<"No Such Team In The League"<<endl;
                cout<<endl;
              }
            }
            break;
    case  8:
            checker4 = false;
            cout<<endl;
            cout<<"Name Of Club You Want To Delete"<<endl;
            cout<<endl;
            cin>>na;
            for (it3 = f.begin(); it3 != f.end(); ++it3) {
              if (it3->name == na) {
                k--;
                it3 = f.erase(it3); // After erasing, it3 is now pointing the next location.
                --it3; // Go to the prev location because of ++it3 in the end of for loop.
                it = ch.find(na);
                ch.erase(it);
                checker4 = true;
              }
            }

          try
          {
            if(checker4)
            {
              cout<<endl;
              cout<<na<<" Deleted From The Club"<<endl;
              cout<<endl;
            }
            else
            {
              throw 409;
            }
          }

          catch(int x)
          {
            cout<<endl;
            cout<<x<<":"<<"No Such Team In The Club"<<endl;
            cout<<endl;
          }
          break;

    default:
            cout<<endl;
            cout<<"Wrong Choice"<<endl;
            cout<<endl;
    }
  }
}
