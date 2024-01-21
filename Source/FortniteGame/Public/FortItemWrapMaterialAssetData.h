#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "FortItemWrapMaterialAssetData.generated.h"

class UMaterialInstanceConstant;

UCLASS(Blueprintable, EditInlineNew)
class UFortItemWrapMaterialAssetData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* GeneratedMaterial_Vehicle_Opaque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* GeneratedMaterial_Vehicle_Masked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* GeneratedMaterial_Weapon_Opaque;
    
    UFortItemWrapMaterialAssetData();
};

