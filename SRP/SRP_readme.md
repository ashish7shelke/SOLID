
*Single Responsibility Principle*
---------------------------------

*Basic Idea:

Every component (Class / Module / Function) should have single responsibilty.

"A class should have only one reason to change" - Robert C. Martin

When requirements changes, they also change the responsibility among the classes.
If a class has more than one responsibilty, that class will have more than one reason to change.

*Violating the Principle:

	When class has multiple respondibilities,
		It's changed, rebuilt, retested and redeployed more often than actually needed
		
		Changes to one responsibility may unnecessarily impact other responsibilities.
		
		Changes in one class impact other dependent classes
		
		Its harder to maintain, reuse and test
	
*Complying with the principle

	It's changed, rebuilt, retested and redeployed less often
	It's smaller and more readable
	It's less dependent on other classes
	It's easier to maintain, reuse and test
	It's got smaller impact on other parts of application



