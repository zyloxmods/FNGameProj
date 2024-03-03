#include "FortCurieBlueprintFunctionLibrary.h"

bool UFortCurieBlueprintFunctionLibrary::RemoveElectricLink(UObject* WorldContextObject, AActor* FirstLinkActor, AActor* SecondLinkActor) {
    return false;
}

bool UFortCurieBlueprintFunctionLibrary::IsCurieEnabled() {
    return false;
}

bool UFortCurieBlueprintFunctionLibrary::IsCurieActive(UObject* WorldContextObject) {
    return false;
}

void UFortCurieBlueprintFunctionLibrary::IgniteGrassInBounds(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, FBox IgnitionBounds, int32 PropagationFuel) {
}

bool UFortCurieBlueprintFunctionLibrary::HasElementAttached(UObject* WorldContextObject, const FCurieContainerHandle& CurieContainerHandle, FGameplayTag ElementTag) {
    return false;
}

bool UFortCurieBlueprintFunctionLibrary::HasCurieStateAttached(AActor* Actor, FGameplayTag StateIdentifier) {
    return false;
}

void UFortCurieBlueprintFunctionLibrary::GetInstigatorInfoFromInteractParams(const FCurieInteractParamsHandle& InteractParamsHandle, AActor*& Instigator, AActor*& EffectCauser) {
}

void UFortCurieBlueprintFunctionLibrary::GetInstigatorInfoForAttachedElement(UObject* WorldContextObject, const FCurieContainerHandle& CurieContainerHandle, FGameplayTag ElementTag, AActor*& Instigator, AActor*& EffectCauser) {
}

UFortCurieManager* UFortCurieBlueprintFunctionLibrary::GetCurieManager(UObject* WorldContextObject) {
    return NULL;
}

UFortCurieComponent* UFortCurieBlueprintFunctionLibrary::GetCurieComponentFromActor(AActor* Actor, bool bCreateIfNecessary) {
    return NULL;
}

void UFortCurieBlueprintFunctionLibrary::ExtinguishGrassInBounds(UObject* WorldContextObject, FBox IgnitionBounds) {
}

void UFortCurieBlueprintFunctionLibrary::ExecuteWaterApplication(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, float LandscapeExtinguishRadius) {
}

void UFortCurieBlueprintFunctionLibrary::ExecuteFireApplication(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationFuel, float LandscapeIgnitionRadius) {
}

bool UFortCurieBlueprintFunctionLibrary::ExecuteEndWaterInteract(UObject* WorldContextObject, AActor* Target, FCurieInteractHandle InteractHandle) {
    return false;
}

bool UFortCurieBlueprintFunctionLibrary::ExecuteEndFireInteract(UObject* WorldContextObject, AActor* Target, FCurieInteractHandle InteractHandle) {
    return false;
}

bool UFortCurieBlueprintFunctionLibrary::ExecuteEndElectricityInteract(UObject* WorldContextObject, AActor* Target, FCurieInteractHandle InteractHandle) {
    return false;
}

void UFortCurieBlueprintFunctionLibrary::ExecuteElectricityApplication(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationDepthLimit) {
}

FCurieInteractHandle UFortCurieBlueprintFunctionLibrary::ExecuteBeginWaterInteract(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, float LandscapeExtinguishRadius) {
    return FCurieInteractHandle{};
}

FCurieInteractHandle UFortCurieBlueprintFunctionLibrary::ExecuteBeginFireInteract(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationFuel, float LandscapeIgnitionRadius) {
    return FCurieInteractHandle{};
}

FCurieInteractHandle UFortCurieBlueprintFunctionLibrary::ExecuteBeginElectricityInteract(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationDepthLimit) {
    return FCurieInteractHandle{};
}

void UFortCurieBlueprintFunctionLibrary::EnablePermanentElementSourceOnActor(AActor* TargetActor, FGameplayTag ElementTag) {
}

void UFortCurieBlueprintFunctionLibrary::EnableElementAttachmentOnActor(AActor* TargetActor, FGameplayTag ElementTag) {
}

void UFortCurieBlueprintFunctionLibrary::DisablePermanentElementSourceOnActor(AActor* TargetActor, FGameplayTag ElementTag) {
}

void UFortCurieBlueprintFunctionLibrary::DisableElementAttachmentOnActor(AActor* TargetActor, FGameplayTag ElementTag) {
}

void UFortCurieBlueprintFunctionLibrary::CurieProtoMeshExtraction(TArray<FVector>& LocalVertLocs, UStaticMeshComponent* MeshComponent, int32 LOD, int32 VertDivisor) {
}

bool UFortCurieBlueprintFunctionLibrary::AddElectricLink(UObject* WorldContextObject, AActor* FirstLinkActor, AActor* SecondLinkActor) {
    return false;
}

UFortCurieBlueprintFunctionLibrary::UFortCurieBlueprintFunctionLibrary() {
}

