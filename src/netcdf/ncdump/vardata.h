/*********************************************************************
 *   Copyright 1993, University Corporation for Atmospheric Research
 *   See netcdf/COPYRIGHT file for copying and redistribution conditions.
 *   $Header: /upc/share/CVS/netcdf-3/ncdump/vardata.h,v 1.2 1996/10/28 22:51:38 russ Exp $
 *********************************************************************/

extern char *progname;		/* for error messages */

/* Display for user-defined fill values and default floating-point fill
   values; should match what ncgen looks for in ../ncgen/ncgen.l */
#define FILL_STRING "_"

#ifdef __cplusplus
extern "C" {
#endif

/* Output the data for a single variable, in CDL syntax. */
extern int vardata ( const struct ncvar*, /* variable */
		     size_t [], /* variable dimension lengths */
		     int, /* netcdf id */
		     int, /* variable id */
		     const struct fspec* /* formatting specs */
    );

#ifdef __cplusplus
}
#endif
