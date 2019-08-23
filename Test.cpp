
#define BOOST_TEST_MODULE JekinsTest
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>
#include <boost/test/results_reporter.hpp>
#include <iostream>
#include <fstream>
#include <cassert>


using namespace std;

std::ofstream out;
	
struct global_fixture
{
	global_fixture()
	{
				out.open("Test_jks.xml");
        assert( out.is_open() );
        boost::unit_test::results_reporter::set_stream(out);
	      cout << "Prepare test data" << endl;
	}
	
/*	~global_fixture()
	{
			
	    cout << "cleanup test environment..." << endl;
	    out.close();
	} */
};


// ����ȫ�ּо�
//BOOST_GLOBAL_FIXTURE(global_fixture)

//BOOST_AUTO_TEST_SUITE(JenkinsTest)

BOOST_FIXTURE_TEST_SUITE(test, global_fixture)

BOOST_AUTO_TEST_CASE(case1)
{      
        BOOST_REQUIRE_MESSAGE(4>2, "exception occured.");    //����require�ģ��������������ִֹͣ��
        BOOST_CHECK_MESSAGE(3>2, "exception occured.");           //����check�ģ�����������󣬻ᱨ�����ǻ����ִ��
        BOOST_REQUIRE(1>0);
}

// �׼�����
BOOST_AUTO_TEST_SUITE_END()