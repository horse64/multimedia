#ifndef HORSE3D_COMPILER_MAIN_H_
#define HORSE3D_COMPILER_MAIN_H_

#include "json.h"

typedef struct h64compilewarnconfig h64compilewarnconfig;

jsonvalue *compiler_TokenizeToJSON(
    const char *fileuri, h64compilewarnconfig *wconfig
);

jsonvalue *compiler_ParseASTToJSON(
    const char *fileuri, h64compilewarnconfig *wconfig,
    int resolve_references
);

int compiler_command_Compile(
    const char **argc, int argv, int argoffset
);

int compiler_command_GetAST(
    const char **argc, int argv, int argoffset
);

int compiler_command_GetResolvedAST(
    const char **argc, int argv, int argoffset
);

int compiler_command_GetTokens(
    const char **argc, int argv, int argoffset
);

int compiler_command_Run(
    const char **argc, int argv, int argoffset
);

int compiler_command_CodeInfo(
    const char **argc, int argv, int argoffset
);

int compiler_command_ToASM(
    const char **argv, int argc, int argoffset
);

typedef struct h64misccompileroptions {
    int vmexec_debug;
} h64misccompileroptions;

#endif  // HORSE3D_COMPILER_MAIN_H_
