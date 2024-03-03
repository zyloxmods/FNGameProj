#include "CurieGlobals.h"

UCurieGlobals::UCurieGlobals() {
    this->bEnableCurie = true;
    this->CurieComponentClass = NULL;
    this->MaterialDefinitionsTable = NULL;
    this->ElementDefinitionsTable = NULL;
    this->EntityStateDefinitionsTable = NULL;
    this->RegisteredCurieManager = NULL;
}

