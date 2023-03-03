
*Open-CLosed Principle*
---------------------------------

*Basic Idea:

Every component (Class / Module / Function) should be open for extension but closed for modification.

	Open for Extension:
		If requirement changes, behaviour of component can be extended.
		
	Closed for Modification:
		Extending the behaviour of a component does not cahnge its source code and tests.

*Violating the Principle:

	When our code does not confirm OCP
		A change in one plcae results in a cascade of changes in many other places
		Such code becomes coupled, inflexible and rigid. Its become harder to maintain, test and reuse.
		Adding / extending functionalities takes more efforts
		
	
*Complying with the principle

	Changes do not usually cascade to many other places
	Code is more stable, maintainable and resistant to changes
	Modules and classes are less coupled accross the application
	Modules are rebuilt more often and compilation time is reduced
	Adding / extending functionality is usually easier

*How to comply
	
	Dynamic polymorphism and inheritance
		Use appropriate abstractions and inheritances where changes are anticipated
		Subclass and override super-classes to extend the existing behaviour
		Depend on abstraction/interfaces instead concrete classes
		
	Static polymorphism and templates
		Use class and function templates to be able to extend the existing behaviour
		Depend on template parameters instead of concrete types
		Use template specialization to extend the existing behaviour oof template classes and functions
	
	Design Patterns
		Decorator(dynamic) to added behaviour to individual objects without affecting the behaviour of other objects from the same class.
		Decorator(static) to added behaviour to types, then depend on template parameters
		Template method to allow derivative classed to extend/modify the basic behaviour defined in base classes
		Adapter to use wrapper instead of modifying interface
		Facade to simplify interface and reduce dependencies
		
	Other methods
		Composition to add behaviour to objects, its preferred over inheritance
		Run-time  concept idiom to behave in run-time polymorphic manner without modifying concrete types and inheriting from them
	



