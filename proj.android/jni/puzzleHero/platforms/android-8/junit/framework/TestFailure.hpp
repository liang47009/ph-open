/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: junit.framework.TestFailure
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_DECL
#define J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <junit/framework/Test.hpp>


namespace j2cpp {

namespace junit { namespace framework {

	class TestFailure;
	class TestFailure
		: public object<TestFailure>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit TestFailure(jobject jobj)
		: object<TestFailure>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TestFailure(local_ref< junit::framework::Test > const&, local_ref< java::lang::Throwable > const&);
		local_ref< junit::framework::Test > failedTest();
		local_ref< java::lang::Throwable > thrownException();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::String > trace();
		local_ref< java::lang::String > exceptionMessage();
		jboolean isFailure();

	}; //class TestFailure

} //namespace framework
} //namespace junit

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_IMPL
#define J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_IMPL

namespace j2cpp {



junit::framework::TestFailure::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


junit::framework::TestFailure::TestFailure(local_ref< junit::framework::Test > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<junit::framework::TestFailure>(
	call_new_object<
		junit::framework::TestFailure::J2CPP_CLASS_NAME,
		junit::framework::TestFailure::J2CPP_METHOD_NAME(0),
		junit::framework::TestFailure::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< junit::framework::Test > junit::framework::TestFailure::failedTest()
{
	return call_method<
		junit::framework::TestFailure::J2CPP_CLASS_NAME,
		junit::framework::TestFailure::J2CPP_METHOD_NAME(1),
		junit::framework::TestFailure::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< junit::framework::Test >
	>(get_jobject());
}

local_ref< java::lang::Throwable > junit::framework::TestFailure::thrownException()
{
	return call_method<
		junit::framework::TestFailure::J2CPP_CLASS_NAME,
		junit::framework::TestFailure::J2CPP_METHOD_NAME(2),
		junit::framework::TestFailure::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Throwable >
	>(get_jobject());
}

local_ref< java::lang::String > junit::framework::TestFailure::toString()
{
	return call_method<
		junit::framework::TestFailure::J2CPP_CLASS_NAME,
		junit::framework::TestFailure::J2CPP_METHOD_NAME(3),
		junit::framework::TestFailure::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > junit::framework::TestFailure::trace()
{
	return call_method<
		junit::framework::TestFailure::J2CPP_CLASS_NAME,
		junit::framework::TestFailure::J2CPP_METHOD_NAME(4),
		junit::framework::TestFailure::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > junit::framework::TestFailure::exceptionMessage()
{
	return call_method<
		junit::framework::TestFailure::J2CPP_CLASS_NAME,
		junit::framework::TestFailure::J2CPP_METHOD_NAME(5),
		junit::framework::TestFailure::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean junit::framework::TestFailure::isFailure()
{
	return call_method<
		junit::framework::TestFailure::J2CPP_CLASS_NAME,
		junit::framework::TestFailure::J2CPP_METHOD_NAME(6),
		junit::framework::TestFailure::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(junit::framework::TestFailure,"junit/framework/TestFailure")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,0,"<init>","(Ljunit/framework/Test;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,1,"failedTest","()Ljunit/framework/Test;")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,2,"thrownException","()Ljava/lang/Throwable;")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,4,"trace","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,5,"exceptionMessage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(junit::framework::TestFailure,6,"isFailure","()Z")
J2CPP_DEFINE_FIELD(junit::framework::TestFailure,0,"fFailedTest","Ljunit/framework/Test;")
J2CPP_DEFINE_FIELD(junit::framework::TestFailure,1,"fThrownException","Ljava/lang/Throwable;")

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTFAILURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
