#include<iostream>
#include<vector>
using namespace std;

class AimToTen
{
public:


int need(vector<int>marks)
{
        double sum=0;
		static int needed=0;


        for (int i=0;i<marks.size();++i)
        {
            sum=sum+marks[i];
        }

        double size=marks.size();
        double average=sum/size;

        if (average>=9.5)
        {
            return needed;
        }

        else
        {
            marks.push_back(10);
            ++needed;
            return need(marks);

        }
}


};
int main()
{

 vector<int>test={8,9};

AimToTen sample;

int required=sample.need(test);

cout<<required<<endl;

}


