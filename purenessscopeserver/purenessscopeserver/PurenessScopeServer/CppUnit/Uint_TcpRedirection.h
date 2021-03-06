#ifndef UNIT_TCPREDIRECTION_H
#define UNIT_TCPREDIRECTION_H

#ifdef _CPPUNIT_TEST

#include "Unit_Common.h"
#include "TcpRedirection.h"
#include "ConnectHandler.h"
#include "ClientReConnectManager.h"
#include "XmlConfig.h"

class CUnit_Redirection : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(CUnit_Redirection);
    CPPUNIT_TEST(Test_Redirection);
    CPPUNIT_TEST_SUITE_END();

public:
    virtual ~CUnit_Redirection();

    virtual void setUp(void);

    virtual void tearDown(void);

    void Test_Redirection(void);

private:
    CTcpRedirection* m_pTcpRedirection;
};

#endif

#endif
