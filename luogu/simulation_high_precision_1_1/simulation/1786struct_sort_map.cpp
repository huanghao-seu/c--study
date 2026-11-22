#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

using namespace std;
enum class Pos{
    BangZhu,
    FuBangZhu,
    HuFa,
    ZhangLao,
    TangZhu,
    JingYing,
    BangZhong
};
struct Pe{
    string name;
    Pos pos;
    int contr;
    int level;
    int id;
};

int main(){
     // --- 建立字典 ---
    map<string, Pos> strToPos = {
        {"BangZhu", Pos::BangZhu}, {"FuBangZhu", Pos::FuBangZhu},
        {"HuFa", Pos::HuFa}, {"ZhangLao", Pos::ZhangLao},
        {"TangZhu", Pos::TangZhu}, {"JingYing", Pos::JingYing},
        {"BangZhong", Pos::BangZhong}
    };
    
    map<Pos, string> posToStr = {
        {Pos::BangZhu, "BangZhu"}, {Pos::FuBangZhu, "FuBangZhu"},
        {Pos::HuFa, "HuFa"}, {Pos::ZhangLao, "ZhangLao"},
        {Pos::TangZhu, "TangZhu"}, {Pos::JingYing, "JingYing"},
        {Pos::BangZhong, "BangZhong"}
    };
    int n;
    cin>>n;
    vector<Pe>arr;
    for(int i=0;i<n;i++){
       string per;
       Pe tem;
       cin>>tem.name;
       cin>>per;
       cin>>tem.contr;
       cin>>tem.level;
       tem.pos = strToPos[per];
       tem.id=i;
       arr.push_back(tem);
    }
    // --- 第一次排序：重新分配职位（排除帮主和副帮主） ---
    vector<Pe*>others;
    for(auto&p:arr){
        if(p.pos!=Pos::BangZhu&&p.pos!=Pos::FuBangZhu)
        others.push_back(&p);
    }
    sort(others.begin(),others.end(),[](Pe*a,Pe*b){
        if(a->contr!=b->contr)return a->contr>b->contr;
        return a->id<b->id;
    });
    for(int i = 0; i < others.size(); i++){
        if(i < 2) others[i]->pos = Pos::HuFa;
        else if(i < 6) others[i]->pos = Pos::ZhangLao;
        else if(i < 13) others[i]->pos = Pos::TangZhu;
        else if(i < 38) others[i]->pos = Pos::JingYing;
        else others[i]->pos = Pos::BangZhong;
    }
    // --- 第二次排序：最终列表 ---
       sort(arr.begin(), arr.end(), [](const Pe& a, const Pe& b) {
        if (a.pos != b.pos) return a.pos < b.pos;        
        if (a.level != b.level) return a.level > b.level;
        return a.id < b.id;                             
    });
    
    // ================= 输出 =================
    for (const auto& p : arr) {
        cout << p.name << " " << posToStr[p.pos] << " " << p.level << "\n";
    }
    
    return 0;
}
