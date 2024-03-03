#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TeleportationFxLibrary.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UPointLightComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UTeleportationFxLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTeleportationFxLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateDissolveFx(float TRANSITION, float ZHeight, float LightIntensity, float MaxLightIntensity, const FName SocketMeshTop, const FName SocketMeshBottom, const USkeletalMeshComponent* SkeletalMeshComponent, UPointLightComponent* TeleportationPointLight, const TArray<UMaterialInstanceDynamic*>& DissolveMIDs);
    
    UFUNCTION(BlueprintCallable)
    static bool SetupDissolveFx(UMaterialInterface* MatCharacterDissolve, const TArray<USkeletalMeshComponent*>& SkeletalMeshes, UPARAM(Ref) TArray<UMaterialInstanceDynamic*>& DissolveMIDs);
    
    UFUNCTION(BlueprintCallable)
    static void PreDissolveGlowUpdate(const TArray<UMaterialInstanceDynamic*>& Materials, float Glow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CleanupDissolveFX(UObject* WorldContextObject, UMaterialInterface* DissolveMat, UPARAM(Ref) TArray<UMaterialInstanceDynamic*>& DissolveMIDs);
    
};

