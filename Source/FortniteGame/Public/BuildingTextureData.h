#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortResourceType.h"
#include "EFortTextureDataType.h"
#include "BuildingTextureData.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UBuildingTextureData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Diffuse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Specular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortTextureDataType::Type> Type;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortResourceType ResourceType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResourceCost[5];
    
    UBuildingTextureData();
};

