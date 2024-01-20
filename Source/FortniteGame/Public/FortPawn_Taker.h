#pragma once
#include "CoreMinimal.h"
#include "BuildingHitTime.h"
#include "FortAIPawn.h"
#include "FortPawn_Taker.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class AFortPawn_Taker : public AFortAIPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowShackleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseClimbLinks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBuildingHitTime> BuildingCollisions;
    
    AFortPawn_Taker();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScalarParameterOnAllCharacterMIDs(FName ParameterName, float ScalarValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestorePreviousMaterialOnCharacterMesh(float ScalarValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverrideMaterialAndCopyParametersOnCharacterMesh(UMaterialInterface* NewMaterialToApply);
    
};

