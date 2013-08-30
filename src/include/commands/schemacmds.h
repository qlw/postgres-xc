/*-------------------------------------------------------------------------
 *
 * schemacmds.h
 *	  prototypes for schemacmds.c.
 *
 *
 * Portions Copyright (c) 1996-2013, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/commands/schemacmds.h
 *
 *-------------------------------------------------------------------------
 */

#ifndef SCHEMACMDS_H
#define SCHEMACMDS_H

#include "nodes/parsenodes.h"

<<<<<<< HEAD
#ifdef PGXC
extern void CreateSchemaCommand(CreateSchemaStmt *parsetree,
					const char *queryString, bool is_top_level);
#else
extern void CreateSchemaCommand(CreateSchemaStmt *parsetree,
=======
extern Oid CreateSchemaCommand(CreateSchemaStmt *parsetree,
>>>>>>> e472b921406407794bab911c64655b8b82375196
					const char *queryString);
#endif
extern void RemoveSchemaById(Oid schemaOid);

extern Oid	RenameSchema(const char *oldname, const char *newname);
extern Oid	AlterSchemaOwner(const char *name, Oid newOwnerId);
extern void AlterSchemaOwner_oid(Oid schemaOid, Oid newOwnerId);

#endif   /* SCHEMACMDS_H */
