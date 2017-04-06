#ifndef __SHOW_STATEMENT_H__
#define __SHOW_STATEMENT_H__

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {
    // Represents SQL-extension Show statements.
    // Example "SHOW TABLES;"
    struct ShowStatement : SQLStatement {
        enum EntityType {
            kTables,
            kColumns,
            kIndex
        };

        ShowStatement(EntityType type);
        virtual ~ShowStatement();

        EntityType type;
        char* tableName; // default: NULL
    };

} // namespace hsql
#endif