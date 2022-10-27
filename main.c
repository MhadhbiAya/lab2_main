/**
  ******************************************************************************
  * @file    main.c
  * @author  Aya Mhadhbi
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define SOM
#define MUL
//#define INTEL
#define OTHERS


/* Private function prototypes -----------------------------------------------*/
 static int sum(int var1, int var2);
 static int mul(int var1, int var2);
 static int min(int var1, int var2);
 static int max(int var1, int var2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  //INTEL faire la somme et retenir la valeur minimal
#ifdef SOM // Accés  seulement if définie pour l'optimisation de mémoire 
  int ResultSom = sum(4,6); //stockage de resultat de somme dans ResultSom
  int ResultMin = min(4,6) ; //stockage de Valeur minimal dans ResultMin
#endif
  //Generique  faire la multiplication et retenir la valeur maximal
#ifdef MUL
  int ResultMul = mul(4,6); //stockage de resultat de Produit dans ResultMul
  int ResultMax = max(4,6) ; //stockage de valeur maximal dans ResultMax
#endif

  while (1)
  {
   
  }
}
#ifdef SOM
  static int sum(int var1, int var2)
  {
    return (var1+var2); // fonction pour faire la somme de deux variables  
  }
#endif
#ifdef OTHERS 
  static int min(int var1, int var2)
  {   
      return ((var1-var2)>0) ? var2 : var1; //Determiner la valeur min : si var1-var2>0 donc var2 est la valeur minimal sinon var1
  }
static int max(int var1, int var2)
  {   
      return ((var1-var2)>0) ? var1 : var2; //Determiner la valeur max : si var1-var2>0 donc var1 est la valeur maximal sinon var2
  }
#endif
#ifdef MUL
  static int mul(int var1, int var2)
  {
    return (var1*var2); //fonction pour la multipication 
  }
#endif
 
/**************************************END OF FILE**************************************/
