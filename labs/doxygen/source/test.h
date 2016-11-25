
/*!
 \brief  Test class
*/
class Test
{
  public:
    /*! \brief An enum.
	
	
    More detailed description. */
    enum Enum { 
                 Val1, /*!< Enum value Val1. */  
                 Val2, /*!< Enum value Val2. */  
                 Val3  /*!< Enum value Val3. */  
               } 
         /*! \brief Enum pointer.
		 
         Details. */
         *enumPtr, 
         /*! \brief Enum variable.
		 
		 
          Details. */
         enumVar;  
    
    /*! \brief A constructor.

      More detailed description of the constructor.
    */
    Test();
    /*! \brief A destructor.
    
      More detailed description of the destructor.
    */
   ~Test();
    
    /*! \brief A function that taking two arguments and returning an integer value.
 
      \param a an integer argument.
      \param c a constant character pointer.
      \return The test results
    */
    int testMe(int a,const char *c);
       
    /*! \brief A pure virtual function.
  
      \param c1 the first argument.
      \param c2 the second argument.
    */
    virtual void testToo(char c1,char c2) = 0;
   
    /*! \brief A public variable.
    
      Details.
    */
    int publicVar;
       
    /*! \brief A function variable.
    
      Details.
    */
    int (*handler)(int a,int b);
};
