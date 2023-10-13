#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int T = 1; T <= t; T++)
    {
        string s;
        cin >> s;
        int wicket = 0, over, ball, runs = 0;
        over = s.length() / 6;
        ball = s.length() % 6;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'W')
                wicket++;
            else if(s[i]<'7')
                runs += s[i] - '0';
        }
        string o, r, w;
        if (s.length() > 6)
            o = "Overs";
        else
            o = "Over";
        if (runs > 1)
            r = "Runs";
        else
            r = "Run";
        if (wicket > 1)
            w = "Wickets";
        else
            w = "Wicket";

        cout << over << "." << ball << " " << o << " " << runs << " " << r << " " << wicket << " " << w <<"."<< endl;
    }
}