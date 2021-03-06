/*MOHAMED EL AAKIL MESAOUDI - RAÚL GIMÉNEZ DE DIOS - GRUPO 8
100405967@alumnos.uc3m.es - 100405861@alumnos.uc3m.es
*/
%{                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

char temp [2048] ;
char funcion_actual [400] ;

#define FF fflush(stdout);    // para forzar la impresion inmediata

char *mi_malloc (int);

char *genera_cadena (char *);

int yylex () ;



char *to_string(int n)
{
    sprintf(temp, "%d", n);
    
    return genera_cadena(temp);

}
%}

%union {                      // El tipo de la pila tiene caracter dual
      int valor ;             // - valor numerico de un NUMERO
      char *cadena ;          // - para pasar los nombres de IDENTIFES
}

%token <valor> NUMERO         // Todos los token tienen un tipo para la pila
%token <cadena> IDENTIF       // Identificador=variable
%token <cadena> INTEGER       // identifica la definicion de un entero
%token <cadena> STRING
%token <cadena> MAIN          // identifica el comienzo del proc. main
%token <cadena> WHILE         // identifica el bucle while
%token <cadena> FOR
%token <cadena> PUTS
%token <cadena> PRINTF
%token <cadena> AND
%token <cadena> OR
%token <cadena> EQ
%token <cadena> NEQ
%token <cadena> LE
%token <cadena> GE
%token <cadena> IF
%token <cadena> ELSE
%token <cadena> RETURN

%type <cadena> expresion 
%type <cadena> termino 
%type <cadena> operando
%type <cadena> asignacion
%type <cadena> impresion
%type <cadena> r_impresion
%type <cadena> axioma
%type <cadena> funcion_main
%type <cadena> dec_variables
%type <cadena> dec_funciones
%type <cadena> declaracion
%type <cadena> r_declaracion
%type <cadena> tipo_declaracion
%type <cadena> funcion
%type <cadena> argumentos
%type <cadena> r_argumentos
%type <cadena> sentencias
%type <cadena> r_asignacion
%type <cadena> impresion_string
%type <cadena> expresion_bool
%type <cadena> bucle_while
%type <cadena> condicional 
%type <cadena> resto_condicional
%type <cadena> bucle_for
%type <cadena> return
%type <cadena> llamada_funcion
%type <cadena> argumentos_llamada
%type <cadena> r_argumentos_llamada

%right '='                    // es la ultima operacion que se debe realizar
%left AND OR
%left '>' '<' NEQ EQ LE GE
%left '+' '-'                 // menor orden de precedencia
%left '*' '/' '%'                // orden de precedencia intermedio
%left SIGNO_UNARIO            // mayor orden de precedencia


%%
axioma:   dec_variables dec_funciones { printf ("%s%s\n(main)", $1, $2) ; }
        ;
        
dec_variables: /* lambda */ { $$=""; }
                | declaracion ';' dec_variables { 
                                                strcpy (temp, "") ;
                                                sprintf(temp,"%s%s",$1,$3);
                                                $$ = genera_cadena (temp) ;
                                                }
            ;
dec_funciones:  funcion '}' dec_funciones       { 
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"%s\n%s",$1,$3);
                                                    $$ = genera_cadena (temp) ;
                                                }
                |   funcion_main '}'  { $$ = $1; }
            ;

funcion:   IDENTIF 
                                                        { 
                                                            strcpy (funcion_actual, "") ;    
                                                            sprintf(funcion_actual,"%s", $1);
                                                        }
            '(' argumentos ')' '{' sentencias    
                                                        { 
                                                            strcpy (temp, "") ;  
                                                            sprintf(temp,"( defun %s ( %s )%s\n)", $1, $4, $7);
                                                            $$ = genera_cadena (temp) ;                                         
                                                        }
            ;

argumentos: /* lambda */				{ $$ = ""; }
        |   r_argumentos                { $$ = $1; }
        ;

r_argumentos: INTEGER IDENTIF ',' r_argumentos  {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"%s %s",$2,$4);
                                                    $$ = genera_cadena (temp) ;
                                                }
        |   INTEGER IDENTIF                     {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"%s", $2);
                                                    $$ = genera_cadena (temp) ;
                                                }
        ;
        
return: RETURN expresion                    {  
                                                strcpy (temp, "") ;
                                                sprintf(temp,"( return-from %s %s )", funcion_actual, $2);
                                                $$ = genera_cadena (temp) ;
                                            }
        ;   

funcion_main: MAIN                                      { 
                                                            strcpy (funcion_actual, "") ;    
                                                            sprintf(funcion_actual,"%s", $1);
                                                        }
'(' ')' '{' sentencias                  { 
                                            strcpy (temp, "") ;
                                            sprintf(temp,"( defun main ()%s \n)",$6);
                                            $$ = genera_cadena (temp) ;                                          
                                        }
            ;
            
sentencias:     /*lambda*/                  { $$ = ""; }
            |   declaracion ';' sentencias  {  
                                                strcpy (temp, "") ;
                                                sprintf(temp,"\n%s%s",$1,$3);
                                                $$ = genera_cadena (temp) ;
                                            }                      

            |   asignacion ';' sentencias	{  
                                                strcpy (temp, "") ;
                                                sprintf(temp,"\n%s%s",$1,$3);
                                                $$ = genera_cadena (temp) ;
                                            }	

            |   impresion ';' sentencias	{  
                                                strcpy (temp, "") ;
                                                sprintf(temp,"\n%s%s",$1,$3);
                                                $$ = genera_cadena (temp) ;
                                            }		
            |   impresion_string ';' sentencias		{  
                                                        strcpy (temp, "") ;
                                                        sprintf(temp,"\n%s%s",$1,$3);
                                                        $$ = genera_cadena (temp) ;
                                                    }
            |   llamada_funcion ';' sentencias		{  
                                                        strcpy (temp, "") ;
                                                        sprintf(temp,"\n%s%s",$1,$3);
                                                        $$ = genera_cadena (temp) ;
                                                    }
            |   return ';' sentencias		        {  
                                                        strcpy (temp, "") ;
                                                        sprintf(temp,"\n%s%s",$1,$3);
                                                        $$ = genera_cadena (temp) ;
                                                    }                                        
            |   bucle_while sentencias          {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"\n%s%s",$1,$2);
                                                    $$ = genera_cadena (temp) ;
                                                }
            |   bucle_for sentencias            {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"\n%s%s",$1,$2);
                                                    $$ = genera_cadena (temp) ;
                                                }
            |   condicional sentencias          {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"\n%s%s",$1,$2);
                                                    $$ = genera_cadena (temp) ;
                                                }
            ;

condicional: IF '(' expresion_bool ')' '{' sentencias '}' resto_condicional  {  
                                                                                strcpy (temp, "") ;
                                                                                sprintf(temp,"( if %s \n( progn%s) %s\n)", $3, $6, $8);
                                                                                $$ = genera_cadena (temp) ;
                                                                            }
            ;
            
resto_condicional:  /* lambda */				{ $$ = ""; }
            |   ELSE '{' sentencias '}'         {   strcpy (temp, "") ;
                                                    sprintf(temp,"\n( progn%s )", $3);
                                                    $$ = genera_cadena (temp) ;
                                                }
            ;
bucle_for: FOR '(' asignacion ';' expresion_bool ';' asignacion ')' '{' sentencias '}'   {
                                                                                            strcpy (temp, "") ;
                                                                                            sprintf(temp," %s \n ( loop while %s do %s \n%s)", $3, $5, $10, $7);
                                                                                            $$ = genera_cadena (temp) ;
                                                                                        }
            ;

bucle_while: WHILE '(' expresion_bool ')' '{' sentencias '}'   {  
                                                                strcpy (temp, "") ;
                                                                sprintf(temp,"( loop while %s do %s )", $3, $6);
                                                                $$ = genera_cadena (temp) ;
                                                            }       
            ;      

impresion_string: PUTS '(' STRING ')'   {
                                            strcpy (temp, "") ;
                                            sprintf(temp,"( print \"%s\" )", $3);
                                            $$ = genera_cadena (temp) ;
                                        }
;

llamada_funcion: IDENTIF '(' argumentos_llamada ')' {
                                                        strcpy (temp, "") ;
                                                        sprintf(temp,"( %s %s )", $1, $3);
                                                        $$ = genera_cadena (temp) ;
                                                    }
        ;

argumentos_llamada: /* lambda */				{ $$ = ""; }
        |   r_argumentos_llamada                { $$ = $1; }
        ;

r_argumentos_llamada: expresion ',' r_argumentos_llamada  {  
                                                            strcpy (temp, "") ;
                                                            sprintf(temp,"%s %s",$1,$3);
                                                            $$ = genera_cadena (temp) ;
                                                        }
        |   expresion                           {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"%s", $1);
                                                    $$ = genera_cadena (temp) ;
                                                }
        ;

impresion:  PRINTF '(' STRING ',' r_impresion ')'   { 
                                                        strcpy (temp, "") ;
                                                        sprintf(temp,"%s", $5);
                                                        $$ = genera_cadena (temp) ;
                                                    }
            ;            

r_impresion: expresion ',' r_impresion { 
                                            strcpy (temp, "") ;
                                            sprintf(temp,"( print %s ) %s", $1, $3);                                         
                                            $$ = genera_cadena (temp) ;
                                        }
            |   expresion   { 
                                strcpy (temp, "") ;
                                sprintf(temp,"( print %s )", $1) ;                                          
                                $$ = genera_cadena (temp) ;
                            }

            ;

declaracion: INTEGER r_declaracion      { 
                                            strcpy (temp, "") ;
                                            sprintf(temp,"%s", $2) ;                                          
                                            $$ = genera_cadena (temp) ;
                                        }
            ;

r_declaracion: tipo_declaracion ',' r_declaracion   { 
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "%s\n%s", $1, $3) ;                                          
                                                        $$ = genera_cadena (temp) ;
                                                    }
    |   tipo_declaracion                            { 
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "%s\n", $1) ;                                          
                                                        $$ = genera_cadena (temp) ;
                                                    }
            ;

tipo_declaracion: IDENTIF '[' expresion ']'    { 
                                                strcpy (temp, "") ;
                                                sprintf (temp, "( setq %s ( make-array %s ) ) ", $1, $3) ;                                          
                                                $$ = genera_cadena (temp) ;
                                            }
    |   IDENTIF                             { 
                                                strcpy (temp, "") ;
                                                sprintf (temp, "( setq %s 0 ) ", $1) ;                                          
                                                $$ = genera_cadena (temp) ;
                                            }
            ;

asignacion:  r_asignacion ',' asignacion            {  
                                                          strcpy (temp, "") ;
                                                          sprintf(temp,"%s\n%s", $1, $3) ;                                                                                                   
                                                          $$ = genera_cadena (temp) ;
                                                        }

            | r_asignacion                         { 
                                                          strcpy (temp, "") ; 
                                                          sprintf(temp,"%s", $1) ;                                                                                                    
                                                          $$ = genera_cadena (temp) ;
                                                        }
            ;
r_asignacion: IDENTIF '=' expresion                     { 
                                                          strcpy (temp, "") ;
                                                          sprintf (temp, "( setq %s %s ) ", $1, $3) ;                                       
                                                          $$ = genera_cadena (temp) ;
                                                        }
            | IDENTIF '[' expresion ']' '=' expresion      { 
                                                          strcpy (temp, "") ;
                                                          sprintf (temp, "( setf ( aref %s %s ) %s ) ", $1, $3, $6) ;                                       
                                                          $$ = genera_cadena (temp) ;
                                                        }
            ;


expresion_bool: expresion_bool AND expresion_bool       {  
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "( And %s %s ) ", $1, $3);
                                                        $$ = genera_cadena (temp) ; 
                                                        }
            |   expresion_bool OR expresion_bool        {  
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "( Or %s %s ) ", $1, $3);
                                                        $$ = genera_cadena (temp) ; 
                                                        }
            |   expresion EQ expresion      {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( = %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                            }
            |   expresion NEQ expresion     {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( /= %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                            }
            |   expresion GE expresion      {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( >= %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                            }
            |   expresion LE expresion      {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( <= %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                            }
            |   expresion '<' expresion     {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( < %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                            }
            |   expresion '>' expresion     {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( > %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                            }
            ;
            
expresion:  expresion '+' expresion   		    {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( + %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                                }
                                                    
            |   expresion '-' expresion   		{  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( - %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                                }

            |   expresion '*' expresion   		{  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( * %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                                }
            |   expresion '/' expresion   		{  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( / %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                                }
            |   expresion '%' expresion   		{  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( mod %s %s ) ", $1, $3);
                                                    $$ = genera_cadena (temp) ; 
                                                }
            |   termino					        { $$ = $1; } 
            ;


termino:        operando				            { $$ = $1; }                          
            |   '+' operando %prec SIGNO_UNARIO		{ 
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "+ $2");
                                                        $$ = genera_cadena (temp) ; 
                                                    }
            |   '-' operando %prec SIGNO_UNARIO		{ 
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "- $2");
                                                        $$ = genera_cadena (temp) ; 
                                                    }
            ;

operando:       IDENTIF				{   
                                        sprintf (temp, "%s", $1) ;
                                        $$ = genera_cadena (temp) ; 
                                    } 
            |   IDENTIF	'[' expresion ']'			{   
                                                    sprintf (temp, "( aref %s %s )", $1, $3) ;
                                                    $$ = genera_cadena (temp) ; 
                                                } 

            |   NUMERO				{ 
                                        sprintf (temp, "%d", $1) ;
                                        $$ = genera_cadena (temp) ; 
                                    } 
            |   '(' expresion ')'			{  
                                                strcpy (temp, "") ;
                                                //sprintf(temp, "( %s )", $2);
                                                sprintf(temp, "%s", $2);
                                                $$ = genera_cadena (temp) ; 
                                            }
            |   llamada_funcion			    {  
                                                strcpy (temp, "") ;
                                                sprintf(temp, "%s", $1);
                                                $$ = genera_cadena (temp) ; 
                                            }
            ;

%%
                            // SECCION 4    Codigo en C
int n_linea = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
    fprintf (stderr, "%s en la linea %d\n", mensaje, n_linea) ;
    printf ( "\n") ;	// bye
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_pal_reservadas { // para las palabras reservadas de C
    char *nombre ;
    int token ;
} t_reservada ;

t_reservada pal_reservadas [] = { // define las palabras reservadas y los
    "main",        MAIN,           // y los token asociados
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",      PRINTF,
    "!=",          NEQ, 
    "==",          EQ, 
    "<=",          LE, 
    ">=",          GE, 
    "&&",          AND,
    "||",          OR,
    "while",       WHILE,
    "for",         FOR, 
    "if",          IF,
    "else",        ELSE,
    "return",      RETURN,
    NULL,          0               // para marcar el fin de la tabla
} ;

t_reservada *busca_pal_reservada (char *nombre_simbolo)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_reservada *sim ;

    i = 0 ;
    sim = pal_reservadas ;
    while (sim [i].nombre != NULL) {
           if (strcmp (sim [i].nombre, nombre_simbolo) == 0) {
                                         // strcmp(a, b) devuelve == 0 si a==b
                 return &(sim [i]) ;
             }
           i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *mi_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

    p = malloc (nbytes) ;
    if (p == NULL) {
         fprintf (stderr, "No queda memoria para %d bytes mas\n", nbytes) ;
         fprintf (stderr, "Reservados %ld bytes en %d llamadas\n", nb, nv) ;
         exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}

char *genera_cadena (char *nombre)     // copia el argumento a un
{                                      // string en memoria dinamica
      char *p ;
      int l ;

      l = strlen (nombre)+1 ;
      p = (char *) mi_malloc (l) ;
      strcpy (p, nombre) ;

      return p ;
}



int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char ops_expandibles [] = "!<=>|%&+-/*" ;
    char cadena [256] ;
    t_reservada *simbolo ;

    do {
    	c = getchar () ;

		if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
			do {		//	OJO que puede funcionar mal si una linea contiene #
			 c = getchar () ;	
			} while (c != '\n') ;
		}
		
		if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
			cc = getchar () ;
			if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
				ungetc (cc, stdin) ;
		 } else {
		     c = getchar () ;	// ...
		     if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
		          do {		// Se trata de codigo inline (Codigo embebido en C)
		              c = getchar () ;
		              // putchar (c) ;
		          } while (c != '\n') ;
		     } else {		// ==> comentario, ignorar la linea
		          while (c != '\n') {
		              c = getchar () ;
		          }
		     }
		 }
		}
		
		if (c == '\n')
		 n_linea++ ;
		
    } while (c == ' ' || c == '\n' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
         i = 0 ;
         do {
             c = getchar () ;
             cadena [i++] = c ;
         } while (c != '\"' && i < 255) ;
         if (i == 256) {
              printf ("AVISO: string con mas de 255 caracteres en linea %d\n", n_linea) ;
         }		 	// habria que leer hasta el siguiente " , pero, y si falta?
         cadena [--i] = '\0' ;
         yylval.cadena = genera_cadena (cadena) ;
         return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
         ungetc (c, stdin) ;
         scanf ("%d", &yylval.valor) ;
         //printf ("\nDEV: NUMERO %d\n", yylval.valor) ;        // PARA DEPURAR
         return NUMERO ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
         i = 0 ;
         while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
                 (c >= '0' && c <= '9') || c == '_') && i < 255) {
             cadena [i++] = tolower (c) ;
             c = getchar () ;
         }
         cadena [i] = '\0' ;
         ungetc (c, stdin) ;

         yylval.cadena = genera_cadena (cadena) ;
         simbolo = busca_pal_reservada (yylval.cadena) ;
         if (simbolo == NULL) {    // no es palabra reservada -> identificador 
               //printf ("\nDEV: IDENTIF %s\n", yylval.cadena) ;    // PARA DEPURAR
               return (IDENTIF) ;
         } else {
               //printf ("\nDEV: OTRO %s\n", yylval.cadena) ;       // PARA DEPURAR
               return (simbolo->token) ;
         }
    }

    if (strchr (ops_expandibles, c) != NULL) { // busca c en ops_expandibles
         cc = getchar () ;
         sprintf (cadena, "%c%c", (char) c, (char) cc) ;
         simbolo = busca_pal_reservada (cadena) ;
         if (simbolo == NULL) {
              ungetc (cc, stdin) ;
              yylval.cadena = NULL ;
              return (c) ;
         } else {
              yylval.cadena = genera_cadena (cadena) ; // aunque no se use
              return (simbolo->token) ;
         }
    }

    //printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
         //printf ("tEOF ") ;                                // PARA DEPURAR
         return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}

