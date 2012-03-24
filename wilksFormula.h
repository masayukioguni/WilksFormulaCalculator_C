#ifndef __WILKS_FORMULA_H__ 
#define __WILKS_FORMULA_H__ 

#ifdef __cplusplus
extern "C" {
#endif


double wilks_formula_get_men_formula(double weight,double total);
double wilks_formula_get_men_factor(double weight);
double wilks_formula_get_women_formula(double weight,double total);
double wilks_formula_get_women_factor(double weight);

double reverse_wilks_formula_get_men_total(double weight,double formula);
double reverse_wilks_formula_get_women_total(double weight,double formula);

#ifdef __cplusplus
}
#endif


#endif