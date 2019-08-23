#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE JekinsTest

#include <boost/test/unit_test.hpp>
#include <iostream>

using namespace std;

struct global_fixture
{
	global_fixture()
	{
	    cout << "Prepare test data" << endl;
	}
	
	~global_fixture()
	{
	    cout << "cleanup test environment..." << endl;
	}
};

// ����ȫ�ּо�
//BOOST_GLOBAL_FIXTURE(global_fixture)

// BOOST_AUTO_TEST_SUITE(Common)
BOOST_FIXTURE_TEST_SUITE(test, global_fixture)

BOOST_AUTO_TEST_CASE(Dir)
{
        
        BOOST_REQUIRE_MESSAGE(4>2, "exception occured.");    //����require�ģ��������������ִֹͣ��
        BOOST_CHECK_MESSAGE(3>2, "exception occured.");           //����check�ģ�����������󣬻ᱨ�����ǻ����ִ��
        BOOST_REQUIRE(1>0);
}

// �׼�����
BOOST_AUTO_TEST_SUITE_END()
