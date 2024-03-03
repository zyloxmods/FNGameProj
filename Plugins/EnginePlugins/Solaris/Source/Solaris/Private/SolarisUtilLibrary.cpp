#include "SolarisUtilLibrary.h"

int32 USolarisUtilLibrary::MakeUnsetOptional(UObject* Property) {
    return 0;
}

bool USolarisUtilLibrary::MakeOptionalFromValue(UObject* Property, int32 Value) {
    return false;
}

bool USolarisUtilLibrary::IsOptionalSet(UObject* Property, int32 Optional) {
    return false;
}

bool USolarisUtilLibrary::IsNonNullObject(UObject* Object) {
    return false;
}

UObject* USolarisUtilLibrary::InstantiateObject(UClass* Type) {
    return NULL;
}

bool USolarisUtilLibrary::HasTrait(UObject* Object, UClass* TraitClass) {
    return false;
}

int32 USolarisUtilLibrary::GetOptionalValue(UObject* Property, int32 Optional) {
    return 0;
}

UClass* USolarisUtilLibrary::GetClass(UObject* Object) {
    return NULL;
}

USolarisUtilLibrary::USolarisUtilLibrary() {
}

