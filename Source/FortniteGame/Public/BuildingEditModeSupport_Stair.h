#pragma once
#include "CoreMinimal.h"
#include "BuildingEditModeSupport.h"
#include "BuildingEditModeSupport_Stair.generated.h"

class UBuildingEditModeMetadata_Stair;
class UMaterialInterface;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class UBuildingEditModeSupport_Stair : public UBuildingEditModeSupport {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingEditModeMetadata_Stair* StairPreviewMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingEditModeMetadata_Stair* LastValidMetadataConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> AuxiliaryIndicatorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> AuxiliaryIndicatorComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ActivatedAuxIndicatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> AuxIndicatorComponentParentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> AuxIndicatorArrowTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> AuxIndicatorGridTexture;
    
public:
    UBuildingEditModeSupport_Stair();
};

