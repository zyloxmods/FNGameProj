#include "MarshalledVFX_HelperLib.h"
#include "Templates/SubclassOf.h"

void UMarshalledVFX_HelperLib::SetVectorParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, const FVector& Value) {
}

void UMarshalledVFX_HelperLib::SetupDependentVFX(UObject* Context, bool bPointersAreSafeToRetain) {
}

void UMarshalledVFX_HelperLib::SetMaterialParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, UMaterialInterface* Value) {
}

void UMarshalledVFX_HelperLib::SetIntParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, int32 Value) {
}

void UMarshalledVFX_HelperLib::SetFloatParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, float Value) {
}

void UMarshalledVFX_HelperLib::SetColorParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, const FLinearColor& Value) {
}

void UMarshalledVFX_HelperLib::SetBoolParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, bool Value) {
}

void UMarshalledVFX_HelperLib::SetBaseForSystems(UObject* Context, USceneComponent* Base) {
}

void UMarshalledVFX_HelperLib::SetActorParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, AActor* Value) {
}

TArray<FParticleSysParam> UMarshalledVFX_HelperLib::MapParticleInstanceParamNames(const TMap<FName, FParameterNameMapping>& Mappings, TArray<FParticleSysParam>& Params, UFXSystemComponent* ForComponent) {
    return TArray<FParticleSysParam>();
}

TArray<UFXSystemComponent*> UMarshalledVFX_HelperLib::GetMatchingSystemComponentsAs(UObject* Context, const FGameplayTagContainer& WithMatching, TSubclassOf<UFXSystemComponent> Class) {
    return TArray<UFXSystemComponent*>();
}

TArray<UFXSystemComponent*> UMarshalledVFX_HelperLib::GetMatchingSystemComponents(UObject* Context, const FGameplayTagContainer& WithMatching) {
    return TArray<UFXSystemComponent*>();
}

void UMarshalledVFX_HelperLib::DeactivateMatching(UObject* Context, const FGameplayTagContainer& Tags) {
}

void UMarshalledVFX_HelperLib::CleanupDependentVFX(UObject* Context) {
}

void UMarshalledVFX_HelperLib::ActivateMatching(UObject* Context, const FGameplayTagContainer& Tags, bool bReset) {
}

UMarshalledVFX_HelperLib::UMarshalledVFX_HelperLib() {
}

