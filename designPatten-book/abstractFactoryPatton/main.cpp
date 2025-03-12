#include <iostream>
#include "abstractFactory.h"

using namespace std;

int main(void) {
    tUser tu;
    tu.id = 1;
    tu.name = "ycao";

    IFactory* pf = new SqlFactory();
    IUser* pu = pf->createUser();

    pu->insert(tu);
    pu->getUser(tu.id);

    delete pf;
    delete pu;

    cout << "----------------------->" << endl;
    
    tDepartment td;
    td.id = 1;
    td.dptName = "fisilink";

    IFactory* pf1 = new AccFactory();
    IDepartment* pd = pf1->createDepartment();

    pd->insert(td);
    pd->getDepartment(td.id);

    delete pf1;
    delete pd;

    return 0;
}
