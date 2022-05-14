#define COMPONENT vz99
#include "\z\ace\addons\main\script_mod.hpp"

#undef COMPONENT_NAME
#define COMPONENT_NAME QUOTE(POTATO - COMPONENT)

#undef PREFIX
#define PREFIX potato

#undef MAJOR
#define MAJOR 1
#undef MINOR
#define MINOR 0
#undef PATCHLVL
#define PATCHLVL 0


#include "\z\ace\addons\main\script_macros.hpp"

#define ACE_PREFIX ace

#define ACEGVAR(module,var) TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var) QUOTE(ACEGVAR(module,var))
#define ACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)
#define DACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)
#define QACEFUNC(var1,var2) QUOTE(DACEFUNC(var1,var2))

#define ACECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,var1),var2))
#define ACELSTRING(var1,var2) QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,var1),var2))
