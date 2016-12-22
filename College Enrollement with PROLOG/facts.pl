is_cs_course(cs111).     /* Fact  1 */
is_cs_course(cs211).     /* Fact  2 */
is_cs_course(cs311).     /* Fact  3 */
is_cs_course(cs315).     /* Fact  4 */
is_cs_course(cs421).	 /* Fact  5 */
is_cs_course(cs436).

is_math_course(math270).  /* Fact  6 */
is_math_course(math242).  /* Fact  7 */
is_math_course(math372).  /* Fact  8 */
is_math_course(math480).  /* Fact  9 */
is_phys_course(phys201).  /* Fact  10 */
is_phys_course(phys301).  /* Fact  11 */

is_student(newton).    /* Fact  12 */
is_student(galileo).   /* Fact  13 */
is_student(lovelace).  /* Fact  14 */
is_student(turing).    /* Fact  15 */

is_enrolled_in(newton,cs311).     /* Fact  16 */
is_enrolled_in(newton,cs421).     /* Fact  17 */
is_enrolled_in(newton,math372).   /* Fact  18 */
is_enrolled_in(turing,math480).   /* Fact  19 */
is_enrolled_in(turing,cs421).     /* Fact  20 */
is_enrolled_in(turing,phys301).   /* Fact  21 */
is_enrolled_in(galileo,cs436).    /* Fact  22 */
is_enrolled_in(galileo,cs421).    /* Fact  23 */
is_enrolled_in(lovelace,phys301). /* Fact  24 */
is_enrolled_in(lovelace,math372). /* Fact  25 */

is_core_course(cs111).   /* Fact  26 */
is_core_course(cs211).   /* Fact  27 */
is_core_course(cs311).   /* Fact  28 */
is_core_course(math270). /* Fact  29 */
is_core_course(phys201). /* Fact  30 */

is_elective(cs315).   /* Fact  31 */
is_elective(cs421).   /* Fact  32 */
is_elective(cs436).   /* Fact  33 */
is_elective(math242). /* Fact  34 */
is_elective(math372). /* Fact  35 */
is_elective(math480). /* Fact  36 */
is_elective(phys301). /* Fact  37 */

has_taken_course(galileo,cs111).   /* Fact  38 */
has_taken_course(galileo,cs211).   /* Fact  39 */
has_taken_course(galileo,cs311).   /* Fact  40 */
has_taken_course(galileo,math270). /* Fact  41 */
has_taken_course(galileo,phys201). /* Fact  42 */
has_taken_course(galileo,mat242).  /* Fact  43 */
has_taken_course(galileo,cs436).   /* Fact  44 */
has_taken_course(turing,cs111 ).   /* Fact  45 */
has_taken_course(turing,cs211).    /* Fact  46 */
has_taken_course(turing,cs311).    /* Fact  47 */
has_taken_course(turing,math270).  /* Fact  48 */
has_taken_course(turing,phys201).  /* Fact  49 */
has_taken_course(turing,phys301).  /* Fact  50 */
has_taken_course(turing,math372).  /* Fact  51 */
has_taken_course(lovelace,cs111).  /* Fact  52 */
has_taken_course(lovelace,cs211).  /* Fact  53 */
has_taken_course(newton,cs111).    /* Fact  54 */
has_taken_course(newton,cs211).    /* Fact  55 */

has_passed_course(galileo,cs111).   /* Fact  56 */
has_passed_course(galileo,cs211).   /* Fact  57 */
has_passed_course(galileo,cs311).   /* Fact  59 */
has_passed_course(galileo,math270). /* Fact  60 */
has_passed_course(galileo,phys201). /* Fact  61 */
has_passed_course(galileo,math242). /* Fact  62 */
has_passed_course(galileo,cs436).   /* Fact  63 */
has_passed_course(turing,cs111 ).   /* Fact  64 */
has_passed_course(turing,cs211).    /* Fact  65 */
has_passed_course(turing,cs311).    /* Fact  66 */
has_passed_course(turing,math270).  /* Fact  67 */
has_passed_course(turing,phys201).  /* Fact  68 */
has_passed_course(turing,phys301).  /* Fact  69 */
has_passed_course(turing,math372).  /* Fact  70 */

has_fulfilled_core(X) :- has_passed_course(X,cs111), has_passed_course(X,cs211),has_passed_course(X,cs311),has_passed_course(X,math270),has_passed_course(X,phys201).  /* rule  1 fulfulling core courses */

has_fulfilled_cs_elective(X)   :- has_passed_course(X,cs315);has_passed_course(X,cs421);has_passed_course(X,cs436).
                                   /* rule 2 fulfilling cs elective */


has_fulfilled_math_elective(X) :- has_passed_course(X,math242);has_passed_course(X,math372);has_passed_course(X,math480).
				   /* rule 3 fulfilling math elective */

has_fulfilled_phys_elective(X) :- has_passed_course(X,phys301).    /* rule 4 fulfilling physics elective */

has_fulfilled_all_electives(X) :- has_fulfilled_cs_elective(X),has_fulfilled_math_elective(X),has_fulfilled_phys_elective(X).
	                                    /* rule 5 fulfilling all electives */


satisfied_degree_requirements(X) :-  has_fulfilled_all_electives(X),has_fulfilled_core(X).
                                      /* rule 6 fulfilling degree requirements */

is_elective_math(X) :-  is_elective(X), is_math_course(X).  /* rule 7 characterizing a math elective course  */
is_elective_phys(X) :-	is_elective(X), is_phys_course(X).  /* rule 8 characterizing a physics elective course */
is_elective_cs(X)   :-  is_elective(X), is_cs_course(X).    /* rule 9 characterizing a computer science course */

is_elective_combination(X, Y, Z) :- is_elective_math(X), is_elective_phys(Y), is_elective_cs(Z).
                                   /* rule 10 characterizing a combination that fulfills the elective courses */












