#include "TeleportationFxLibrary.h"

void UTeleportationFxLibrary::UpdateDissolveFx(float TRANSITION, float ZHeight, float LightIntensity, float MaxLightIntensity, const FName SocketMeshTop, const FName SocketMeshBottom, const USkeletalMeshComponent* SkeletalMeshComponent, UPointLightComponent* TeleportationPointLight, const TArray<UMaterialInstanceDynamic*>& DissolveMIDs) {
}

bool UTeleportationFxLibrary::SetupDissolveFx(UMaterialInterface* MatCharacterDissolve, const TArray<USkeletalMeshComponent*>& SkeletalMeshes, TArray<UMaterialInstanceDynamic*>& DissolveMIDs) {
    return false;
}

void UTeleportationFxLibrary::PreDissolveGlowUpdate(const TArray<UMaterialInstanceDynamic*>& Materials, float Glow) {
}

void UTeleportationFxLibrary::CleanupDissolveFX(UObject* WorldContextObject, UMaterialInterface* DissolveMat, TArray<UMaterialInstanceDynamic*>& DissolveMIDs) {
}

UTeleportationFxLibrary::UTeleportationFxLibrary() {
}

