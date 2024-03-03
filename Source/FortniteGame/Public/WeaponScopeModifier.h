#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "Engine/Scene.h"
#include "WeaponScopeModifier.generated.h"

UCLASS(Blueprintable)
class UWeaponScopeModifier : public UCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings ScopeSettings;
    
public:
    UWeaponScopeModifier();
};

