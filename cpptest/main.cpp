#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

struct Person{
    char *name;
    int age;
    int worth;

    bool operator < (const Person p) const{
        if(worth > p.worth) return true;
        else if(worth < p.worth) return false;
        else{ // 财富相等，比较年龄，年龄小的优先
            if(age < p.age) return true;
            else if(age > p.age) return false;
            else{ // 年龄相等，比较名字，按照字典顺序
                for(int i = 0; i < 9; i++){
                    if(name[i] < p.name[i]) return true;
                    else if(name[i] > p.name[i]) return false;
                }
                return true;
            }
        }

    }

};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<Person> persons;
    int N,K;
    cin >> N >> K;
    persons.resize(N);
    for(int i = 0; i < N; i++){
        char *name = new char[9];
        cin>>name>>persons[i].age>>persons[i].worth;
        persons[i].name = name;
    }
    sort(persons.begin(),persons.end());
    int maxCnt,age_begin,age_end;
    int outputCnt = 0;
    for(int i = 0; i < K; i++){
        cin>>maxCnt>>age_begin>>age_end;
        outputCnt = 0;
        cout<<"Case #"<<i+1<<":\n";
        for(int i = 0; i < N; i++){
            if(persons[i].age >= age_begin && persons[i].age <= age_end){
                cout<<persons[i].name<<' '<<persons[i].age<<' '<<persons[i].worth<<endl;
                outputCnt++;
                if(outputCnt >= maxCnt) break;
            }
        }
        if(outputCnt == 0) cout<<"None\n";
    }
    return 0;
}
