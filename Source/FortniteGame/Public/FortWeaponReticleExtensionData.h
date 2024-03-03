#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "FortWeaponReticleExtensionData.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortWeaponReticleExtensionData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPrimaryAssetId, TSoftClassPtr<UUserWidget>> WeaponToReticleExtensionMap;
    
public:
    UFortWeaponReticleExtensionData();
};

