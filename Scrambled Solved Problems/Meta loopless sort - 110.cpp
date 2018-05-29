#include <iostream>
#include <string>
using namespace std;
const char *pVars = "abcdefgh";
const char *Indent(int nCnt)
{
    static const char *pSpaces[] = { "",
                                     "  ", "    ", "      ", "        ", "        ", "          ",
                                     "            ", "              ", "                "
                                   };
    return pSpaces[nCnt];
}
void MetaSort(int currLevel, int maxLevel, string &strOrder)
{
    if (currLevel == maxLevel)
    {
        cout << Indent(currLevel) << "writeln(" << strOrder[0];
        for (size_t i = 1; i < strOrder.size(); ++i)
        {
            cout << ',' << strOrder[i];
        }
        cout << ")\n";
        return;
    }
    cout << Indent(currLevel);
    for (size_t i = 0; i < strOrder.size(); ++i)
    {
        cout << "if " << pVars[currLevel] << " < " << strOrder[i] << " then\n";
        strOrder.insert(i, pVars + currLevel, 1);
        MetaSort(currLevel + 1, maxLevel, strOrder);
        strOrder.erase(i, 1);
        cout << Indent(currLevel) << "else ";
    }
    cout << endl;
    strOrder.insert(strOrder.size(), pVars + currLevel, 1);
    MetaSort(currLevel + 1, maxLevel, strOrder);
    strOrder.erase(strOrder.size() - 1, 1);
}
int main(void)
{
    int nProgs, nVars;
    cin >> nProgs;
    for (int j = 0; j < nProgs; ++j)
    {
        cin >> nVars;
        if (j != 0)
        {
            cout << endl;
        }
        string strVarDec = "a";
        for (int i = 1; i < nVars; ++i)
        {
            strVarDec.push_back(',');
            strVarDec.push_back(i + 'a');
        }
        cout << "program sort(input,output);\nvar\n" << strVarDec
             << " : integer;\nbegin\n  readln(" << strVarDec << ");\n";
        string strInit("a");
        MetaSort(1, nVars, strInit);
        cout << "end." << endl;
    }
    return 0;
}
